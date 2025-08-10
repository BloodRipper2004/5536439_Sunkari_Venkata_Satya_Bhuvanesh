// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, k, temp;
    scanf("%d %d", &n, &k);
    
    int Aarr[n], Barr[n];
    for (int i = 0; i < n; i++) scanf("%d", &Aarr[i]);
    for (int i = 0; i < n; i++) scanf("%d", &Barr[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (Aarr[j] > Aarr[j + 1]) {
                temp = Aarr[j];
                Aarr[j] = Aarr[j + 1];
                Aarr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (Barr[j] < Barr[j + 1]) {
                temp = Barr[j];
                Barr[j] = Barr[j + 1];
                Barr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (Aarr[i] + Barr[i] < k) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    
    return 0;
}