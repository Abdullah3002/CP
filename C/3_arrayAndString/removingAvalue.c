
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int idx;
    scanf("%d", &idx);
    for (int i = idx; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

/*
Input:
5
10 20 30 40 50
2

Output:
10 20 40 50


*/