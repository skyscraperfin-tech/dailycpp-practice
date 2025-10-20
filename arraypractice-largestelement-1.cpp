#include <iostream>
#include <algorithm>
using namespace std;



int find_largest(int nums[], int n) {
    return *max_element(nums, nums + n);
    // max_element function from the <algorithim> header
}


int main()
{
    int nums[] = {5, 4, 9, 12, 8};
    // first parameter for find_largest function

    int n = sizeof(nums) / sizeof(nums[0]);
    cout << sizeof(nums) << "\n";
    cout << sizeof(nums[0]) << "\n";
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] <<" ";
    }
    //
    cout << "\nLargest element of the said array: "<< find_largest(nums, n);


    return 0;
}