#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", (n * n) / 4 + 1);
    }
    return 0;
}