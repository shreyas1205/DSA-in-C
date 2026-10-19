int maxSubArray(int* nums, int numsSize) {
    int cursum=nums[0];
    int max=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(cursum+nums[i]>nums[i]){
            cursum+=nums[i];

        }
        else{
            cursum=nums[i];

        }
        if(cursum>max){
            max=cursum;
        }
    }
    return max;
    
}
