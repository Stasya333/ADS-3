// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  int left = 0, right = size - 1, count = 0;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (arr[mid] == value) {
      count++;
      for (int i = mid - 1; i >= left; i--) {
        if (arr[i] == value) {
          count++;
        } else {
          break;
        }
      }
      for (int i = mid + 1; i <= right; i++) {
        if (arr[i] == value) {
          count++;
        } else {
          break;
        }
      }
      return count;
    } else if (arr[mid] < value) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return 0;
}
