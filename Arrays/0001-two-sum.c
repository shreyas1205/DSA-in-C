#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = malloc(2 * sizeof(int));

                if (result == NULL) {
                    return NULL;
                }

                result[0] = i;
                result[1] = j;
                *returnSize = 2;

                return result;
            }
        }
    }

    return NULL;
}
