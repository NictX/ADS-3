// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
  int r = size - 1;
  int count = 0;
  while (r >= l) {
    if (arr[(l + r) / 2] == value) {
      count++;
      break;
    }
    if (arr[(l + r) / 2] < value) {
      l = (l + r) / 2 + 1;
    }
    if (arr[(l + r) / 2] > value) {
      r = (l + r) / 2 - 1;
    }
  }
  if (count != 0) {
    for (int i = (l + r) / 2 + 1; arr[i] == value && i <= size - 1; i++) {
      count++;
    }
    for (int i = (l + r) / 2 - 1; arr[i] == value && i >= 0; i--) {
      count++;
    }
  }
  return count;
}
