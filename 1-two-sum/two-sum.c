/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int n=numsSize;
    *returnSize=2;
    int *result=malloc(2*sizeof(int));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                break;
            }
        }
    }
    return result;
}