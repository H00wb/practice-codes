/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
*returnSize = 2;
int *returnedArray = (int*)malloc(2*sizeof(int));
for(int i = 0; i<numsSize; ++i)
{
    if(nums[i] + nums[i+1] == target)
    {
        returnedArray[0] = i;
        returnedArray[1] = i+1;
        break;
    }
}
return returnedArray;
}

