#include <stdio.h>

#define ll long long

int main(void)
{
    int n;
    scanf("%d", &n);
    ll A[n];
    for (int i = 0; i < n; i++) scanf("%lld", &A[i]);

    ll ans = (ll) -1000000000000000000;
    ll a, b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[i] * A[j] > ans)
            {
                ans = A[i] * A[j];
                if (A[i] > A[j])
                {
                    a = A[i];
                    b = A[j];
                }
                else
                {
                    a = A[j];
                    b = A[i];
                }
            }
            else if (A[i] * A[j] == ans)
            {
                if (A[i] + A[j] < a + b)
                {
                    if (A[i] > A[j])
                    {
                        a = A[i];
                        b = A[j];
                    }
                    else
                    {
                        a = A[j];
                        b = A[i];
                    }
                }
            }
        }
    }

    printf("%lld %lld\n", b, a);

    return 0;
}