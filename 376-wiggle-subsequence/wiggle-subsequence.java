class Solution {
    public int wiggleMaxLength(int[] nums) {
        if(nums==null || nums.length==0){
            return 0;
        }
        int max=0;
        int upward=1;
        int downward=1;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                upward=downward+1;

            }
            else if(nums[i]<nums[i-1]){
                downward=upward+1;
            }
        }
        max=Math.max(upward,downward);
        return max;
    }
}