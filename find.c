#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, *arr, Q, query;
    
    
    scanf("%d %d", &N, &Q);
    
   
    arr = (int*) malloc(N * sizeof(int));
    
    
    for (int i = 0; i < N; i++) {
        scanf("%d", arr + i);
    }
    
   
    for (int i = 0; i < Q; i++) {
        scanf("%d", &query);  
        
        
        int found = 0;
        for (int k = 0; k < N; k++) {
            if (query == arr[k]) {
                found = 1;
                break;
            }
        }
        
        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
   
    free(arr);
    
    return 0;
}
