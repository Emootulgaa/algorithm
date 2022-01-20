#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int c, int r, int x)
{
    if (r >= c) {
        int mid = c + (r-c) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, c, r - 1, x);
        return binarySearch(arr, c + 1, r, x);
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"  : cout << "Element is present at index " << result+1;
    return 0;
}

