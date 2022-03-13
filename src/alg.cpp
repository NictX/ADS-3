// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int count = 0;
  while (right >= left) {
    if (arr[(left + right) / 2] == value) {
      count++;
      break;
    }
    if (arr[(left + right) / 2] < value) {
      left = (left + right) / 2 + 1;
    }
    if (arr[(left + right) / 2] > value) {
      right = (left + right) / 2 - 1;
    }
  }
  if (count != 0) {
    for (int i = (left + right) / 2 + 1; arr[i] == value && i <= size - 1; i++) {
      count++;
    }
    for (int i = (left + right) / 2 - 1; arr[i] == value && i >= 0; i--) {
      count++;
    }
  }
  return count;
}
