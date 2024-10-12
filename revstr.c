#include<stdio.h>
#include <string.h>

void reverse(char N[60])
{
    int len =strlen(N);
    for (int i=0; i< len /2 ; i++ )
    {
        char temp = N[i];
        N[i] = N[len-i-1];
        N[len -1 - i] = temp;
    }
}

int main()
{
    int T;
    scanf("%d",&T);

    for(int i=0 ; i<T ; i++)
    {
        char N[60];
        scanf("%s",N);

        reverse(N);
        printf("%s\n",N);
    }

}