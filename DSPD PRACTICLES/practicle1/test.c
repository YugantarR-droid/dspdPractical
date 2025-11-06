#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
if (arr == NULL || n == 0) {
return 0;
}
int start = 0, end = n - 1, mid;
while (start <= end) {
mid = (start + end) / 2;
printf("Search space: ");
for (int i = start; i <= end; i++) {
printf("%d ", arr[i]);
}
printf("\n");
printf("Middle value = %d\n\n", arr[mid]);
if (arr[mid] == key) {
printf("Found element %d at position %d\n", arr[mid], mid + 1);
return 1;
} 
else if (key > arr[mid]) {
start = mid + 1;
} 
else {
end = mid - 1;
}
}
return 0;
}
int main() {
int n, key;
printf("Enter size of array: ");
scanf("%d", &n);
if (n <= 0) {
printf("NULL\n");
return 0;
}
int arr[n];
printf("Enter %d elements (sorted): ", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter element to search: ");
scanf("%d", &key);
int found = binarySearch(arr, n, key);
if (!found)
printf("NULL\n");
return 0;
}
