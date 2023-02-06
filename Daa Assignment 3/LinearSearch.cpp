#include <iostream>
using namespace std;
 
int search(int nums[], int N, int target)
{
    int i;
    for (i = 0; i < N; i++)
        if (nums[i] == target)
            return i;
    return -1;
}
 
int main(void)
{
    int nums[] = {2, 3, 4, 5, 10, 40 };
    int target = 10;
    int N = sizeof(nums) / sizeof(nums[0]);
 
    int result = search(nums, N, target);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}