#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;      // Possible ceil index
            high = mid - 1; // Search for first occurrence
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, x;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    printf("%d\n", findCeilIndex(arr, n, x));

    return 0;
}