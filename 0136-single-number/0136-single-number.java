class Solution {
    public int singleNumber(int[] nums) {
        int n=nums.length, ans=nums[0];
        for(int i=1; i<n; i++) ans^=nums[i];
        return ans;
    }
}