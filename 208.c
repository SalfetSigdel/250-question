#include <stdio.h>
#include <stdlib.h>

// binary search implementation using recursion
int binSearch(int* a, int first, int last, int t) {
  // find middle index
  int mid = (first + last) / 2;
  // if data found return position(1-indexed position)
  if (a[mid] == t) return mid + 1;
  // if data > a[mid] search in the segment (mid+1,last)
  else if (t > a[mid] & first != last)  // search until first!=last
    return binSearch(a, mid + 1, last, t);
  // if data < a[mid] search in the segment (first,mid-1)
  else if (t < a[mid] & first != last)
    return binSearch(a, first, mid - 1, t);
  else
    return 0;
}

int main() {
  int n, t;
  printf("enter number of array elements: ");
  scanf("%d", &n);

  int* a = (int*)(malloc(sizeof(int) * n));

  printf("enter elements: \n");
  // input array elements
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);

  printf("enter element to search\n");
  scanf("%d", &t);
  // output result
  if (binSearch(a, 0, n - 1, t))
    printf("\n%d found at position %d\n", t, binSearch(a, 0, n - 1, t));
  else
    printf("\n%d not found\n", t);

  return 0;
}
