#include <stdio.h>

int binary_search(int arr[], int n, int X) 
{
  int low = 0, high = n - 1, mid;
  while (low <= high) 
  {
    mid = (low + high) / 2;
    if (arr[mid] == X) 
    {
      return mid;
    } else if (arr[mid] < X) 
    {
      low = mid + 1;
    } else 
    {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int X = 6;
  
  int result = binary_search(arr, n, X);
  
  if (result == -1) 
  {
    printf("Element not found");
  } else 
  {
    printf("Element found at index %d", result);
  }
  
  return 0;
}