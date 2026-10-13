
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);

    int l = 0, r = n - 1, pos = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) {
            pos = mid;
            break;
        }
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }

    if (pos == -1) printf("Khong tim thay");
    else printf("Tim thay tai vi tri %d", pos);
    return 0;
}
