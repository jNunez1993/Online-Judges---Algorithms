class Solution(object):
    def uniquePaths(self, m, n):
        memo = [[-1 for j in range(0, m)] for i in range(0, n)]
        return self.traverse(0,0, n, m, memo)

    def is_safe(self, i, j, n, m):
        if i >= 0 and i < n and j>=0 and j < m:
            return True
        return False

    def traverse(self, i, j, n,m, memo):

        if i == n - 1 and j == m - 1:
            return 1

        if memo[i][j] != -1:
            return memo[i][j]

        value = 0
        if self.is_safe(i+1, j, n, m):
            value  += self.traverse(i+1, j, n, m, memo)

        if self.is_safe(i, j+1, n, m):
            value  += self.traverse(i, j + 1, n, m, memo)

        memo[i][j] = value
        return memo[i][j]
