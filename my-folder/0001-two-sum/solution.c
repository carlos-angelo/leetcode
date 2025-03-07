/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    short numsSizeMinus1 = numsSize - 1;
    for (short i = 0; i < numsSizeMinus1; i++)
    {
        for (short j = i+1; j < numsSize; j++)
        {
            if ((nums[i]+nums[j]) == target)
            {
                int* ptr = (int*) malloc(2 * sizeof(int));
                ptr[0] = i;
                ptr[1] = j;
                return ptr;
            }
        }
    }
    return (int*) malloc(2 * sizeof(int));
}
