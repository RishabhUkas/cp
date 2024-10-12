#include <stdio.h>

long long int reverse(long long int N)
{
    long long int digit, rev = 0; 
    while (N > 0)
    {
        digit = N % 10;
        N = N / 10;
        rev = rev * 10 + digit;
    }
    return rev;
}

int main()
{
    int T;
    scanf("%d", &T);  
    for (int i = 1; i <= T; i++)
    {
        long long int N;
        do
        {
            scanf("%lld", &N);  
        } 
        while (N < 0);  

        long long int ans = reverse(N);  
        printf("%lld\n", ans); 
    }
    
    return 0;
}