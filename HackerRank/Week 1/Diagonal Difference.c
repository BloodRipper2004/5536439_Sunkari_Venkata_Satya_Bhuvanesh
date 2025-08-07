#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
    int i, j;
    int sum_lr = 0, sum_rl = 0;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i=0; i<n; i++){
        sum_lr = sum_lr + matrix[i][i];
        sum_rl = sum_rl + matrix [i][n-i-1];
    }
    
    int diff = abs(sum_lr-sum_rl);
    printf("%d\n", diff);
    
    return 0;
}