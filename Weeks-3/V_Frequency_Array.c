#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d %d", &n, &i);
    int a[n], b[i];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &a[j]);
    }
    for (int k = 1; k <= i; k++)
    {
        b[k] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        int val = a[j];
        b[val]++;
    }
    for (int k = 1; k <= i; k++)
    {
        printf("%d\n", b[k]);
    }
    return 0;
}