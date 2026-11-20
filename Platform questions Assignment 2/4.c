//283 - Moves zeroes 
//https://leetcode.com/problems/move-zeroes/
void moveZeroes(int* nums, int numsSize) {
    int pos = 0;  // next position for a non-zero element

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[pos];
            nums[pos] = nums[i];
            nums[i] = temp;
            pos++;
        }
    }
}
