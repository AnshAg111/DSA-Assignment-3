class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int n=nums.length, ans=100000;
        for(int i=0; i<n-2; i++){
            int j=i+1, k=n-1, sum;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(Math.abs(target-ans)>Math.abs(target-sum)) ans=sum;
                if(sum<target) j++;
                else if(sum>target) k--;
                else return target;
            }
        }
        return ans;
    }
}