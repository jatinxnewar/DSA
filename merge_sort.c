#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int beg[], int beg_size, int end[], int end_size) {
  int i = 0, j = 0, k = 0;
  while (i < beg_size && j < end_size) {
    if (beg[i] < end[j]) {
      arr[k++] = beg[i++];
    } else {
      arr[k++] = end[j++];
    }
  }
  while (i < beg_size) {
    arr[k++] = beg[i++];
  }
  while (j < end_size) {
    arr[k++] = end[j++];
  }
}

void merge_sort(int arr[], int n) {
  if (n > 1) {
    int mid = n / 2;
    int *beg = (int*) malloc(mid * sizeof(int));
    int *end = (int*) malloc((n - mid) * sizeof(int));
    for (int i = 0; i < mid; i++) {
      beg[i] = arr[i];
    }
    for (int i = mid; i < n; i++) {
      end[i - mid] = arr[i];
    }
    merge_sort(beg, mid);
    merge_sort(end, n - mid);
    merge(arr, beg, mid, end, n - mid);
    free(beg);
    free(end);
  }
}

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  merge_sort(arr, n);
  
  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}