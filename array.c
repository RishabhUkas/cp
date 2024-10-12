//hand on array



#include <stdio.h>

int main()
{
    int  N , K;
   
    scanf("%d %d",&N, &K);
 
    
    int arr[N];

    for (int i = 0; i < N; i++) {
        
        scanf("%d", &arr[i]);
    }

    for(int j=0; j < N; j++ )
    {
        if (K==arr[j])
        {
            printf("%d ",j);
        }
    }



}