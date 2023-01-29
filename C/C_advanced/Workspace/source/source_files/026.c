//5Binary search
#include <stdio.h>

#define SIZE 20

//Method 1
int search_bin(int data[], int n, int low, int high) {
   while (low <=high) {
    int mid = low + (high - low) / 2;

    if (n == data[mid])
    {
        return mid;
    } else if (n > data[mid])
    {
        low = mid + 1;
    } else
    {
        high = mid - 1;
    }
   }
   return -1;
}


//Method 2
int bin_search_recursive(int data[], int n, int low, int high) {
    int mid = low + (high - low) / 2;

    if (n == data[mid])
    {
        return mid;
    } else if (n > data[mid])
    {
        return bin_search_recursive(data, n, mid+1, high);
    } else {
        return bin_search_recursive(data, n, low, mid-1);
    }
    return -1;
}

int main() {
    int data[SIZE] = {1, 2, 3, 4, 5, 54, 323, 2, 54, 5};
    int size = sizeof(data) / sizeof(data[0]);
    int n;

    scanf("%d", (printf("Enter to search: "), &n));

    int result = bin_search_recursive(data, n, 0, size-1);
    if (result == -1)
    printf("Element not found");
    else
    printf("Element found at index: %d", result);
}