#include <stdio.h>

int *runningSum(int *nums, int numsSize,  int *returnSize)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < numsSize)
	{
		nums[i] = nums[j] + nums[i];
		i++;
		j++;
	}
	*returnSize = numsSize;
	return (nums);
}

int main()
{
	int i;
	int *retu;
	int nums[4] = {1, 2, 3, 4};

	i = 0;
	*retu = 4;
	runningSum(nums, 4, retu);
	while (i <= 3)
	{
		printf("%d ", nums[i]);
		i++;
	}
	return (0);
}
