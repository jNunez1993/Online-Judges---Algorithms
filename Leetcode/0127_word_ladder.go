package main

import (
    "fmt"
)

const MAX_INT = 2147483647
var (
    graph map[string][]string
    minPathLength int = MAX_INT
)

func buildGraph(wordList []string) map[string][]string {
    graph := make(map[string][]string, 0)
    for _, source := range wordList {
        for _, dest := range wordList {
            if source == dest {
                continue
            }

            isAdj := isAdjacent(source, dest)
            if isAdj {
                graph[source] = append(graph[source], dest)
            }
        }
    }

    return graph
}

func bfs(node, dest string) int {
    type path struct {
        next string
        value []string
        visited map[string]bool
    }

    p := path{node, []string{node}, map[string]bool{node: true}}

    queue := make([]path, 0)

    queue = append(queue, p)
    for len(queue) != 0 {
        top := queue[0]
        queue = queue[1:]
        next := top.next
        for _, adjacentNode := range graph[next] {
            if top.visited[adjacentNode] {
                continue
            }

            p = path{adjacentNode, append(top.value, adjacentNode), top.visited}
            p.visited[adjacentNode] = true
            queue = append(queue, p)
            if adjacentNode == dest {
                return len(p.value)
            }
        }
    }

    return MAX_INT
}

/**
Word diff is only one character
*/
func isAdjacent(source, dest string) bool {
    diff := 0
    for i, _ := range source {
        if source[i] != dest[i] {
            diff++
        }

        if diff > 1 {
            return false
        }
    }

    // Source and dest cannot be equal
    if diff == 0 {
        return false
    }

    return true
}

func inArray(wordList []string, word string) bool {
    for _, w := range wordList {
        if w == word {
            return true
        }
    }

    return false
}

func ladderLength(beginWord, endWord string, wordList []string) int {
    begExists := inArray(wordList, beginWord)
    if !begExists {
        wordList = append(wordList, beginWord)
    }

    graph = buildGraph(wordList)
    pathLength := bfs(beginWord, endWord)

    if pathLength == MAX_INT {
        return 0
    }

    return pathLength
}

/**
My own main function for testing. Leetcode does not require main functions
*/
func main() {
    wordList := []string{"hot", "dot", "dog", "lot", "log"}
    length := ladderLength("hit", "cog", wordList)
    fmt.Println(length)
}
