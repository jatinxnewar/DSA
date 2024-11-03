//////////////////////////////////////////////////////////////////////////////////////#include <stdio.h>

int linear_search(int arr[], int n, int X) 
{
  for (int i = 0; i < n; i++) 
  {
    if (arr[i] == X) 
    {
      return i;
    }
  }
  return -1;
}

int main() 
{
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(arr[0]);
  int X = 40;
  
  int result = linear_search(arr, n, X);
  
  if (result == -1) 
  {
    printf("Element not found");
  } else 
  {
    printf("Element found at index %d", result);
  }
  
  return 0;
}