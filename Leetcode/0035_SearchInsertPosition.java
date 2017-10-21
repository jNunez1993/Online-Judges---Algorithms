//https://leetcode.com/problems/search-insert-position/description/
class Solution {
    public int searchInsert(int[] nums, int target) {
        if (nums.length == 0)
            return 0;
        if (target <= nums[0])
            return 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target)
                return i;
            if (nums.length - 1 != i && target > nums[i] && target < nums[i+1]) 
                return i+1;
        }
        return nums.length;
    }
}
