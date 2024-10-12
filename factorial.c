#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T ; i++)
    {
        int N;
        long long int fact=1;
        do 
        {
            
            scanf("%d",&N);

        }
        while (N<1 || N>20 );


        for(int j = N; j>=1; j--)
        {
            fact=fact*j;
        }
        printf("%lld\n",fact);
    }
    return 0;
}