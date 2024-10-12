#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i= 0 ; i<T ; i++)
    {
        int N;
        scanf("%d",&N);
        if(((N+1)%3==0) || ((N-1)%3==0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
