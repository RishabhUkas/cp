#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int n,count_0=1,count_1=1;
        scanf("%d",&n);
        char s[n];
        scanf("%s",&s);
        for(int k=0; k<n;k++)
        {
            if ('0'==s[k])
            {
                count_0++;
            }
            if('1'==s[k])
            {
                count_1++;
            }
        }
        printf("%d\n",abs(count_0-count_1));
    }

}