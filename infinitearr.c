#include<stdio.h>
int main()
{
    int T,N,sum;
    scanf("%d",&T);
    for(int i =1; i<=T; i++)
    {
       scanf("%d",&N);
        int arr[N];
        sum=0;
        
        for(int j =0 ; j<N ; j++)
        {   
            
            scanf("%d",&arr[j]);  
            sum+=arr[j];
        }
        
        printf("%d\n",sum);
    }
}