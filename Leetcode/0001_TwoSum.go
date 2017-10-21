func twoSum(nums []int, target int) []int {
    m := make(map[int]int)  
    ret := make([]int,0)
    for i := 0; i < len(nums); i++ {
        bullseye := target - nums[i]
        if idx, ok := m[bullseye]; ok {
            ret = append(ret, idx, i)
            break
        }
        m[nums[i]] = i
    }
    return ret
}
