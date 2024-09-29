#include <stdio.h>

const int inf = 2147483647;

struct pair
{
    int first;
    int second;
} min = {inf, inf}, max = {-inf, -inf};


int main(void)
{
    unsigned int n;
    scanf("%u", &n);

    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (max.first < a)
        {
            max.second = max.first;
            max.first = a;
        }
        else if (max.second < a)
        {
            max.second = a;
        }

        if (min.first > a)
        {
            min.second = min.first;
            min.first = a;
        }
        else if (min.second > a)
        {
            min.second = a;
        }
//        printf("- max: (1) %d, (2) %d \n  min: (1) %d, (2) %d \n", max.first, max.second, min.first, min.second);
    }
    
    long long prod1 = max.first * max.second;
    long long prod2 = min.first * min.second;

    if (prod1 > prod2) printf("%d %d\n", max.second, max.first);
    else               printf("%d %d\n", min.first, min.second);
    
    return 0;
}