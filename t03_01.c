// 12S25012 // JUSMER JUNIATI PASARIBU
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int scores[n]; // Menggunakan Variable Length Array (VLA) yang didukung C99
    long long sum = 0; 

    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    
    double average = (double)sum / n;
    
    printf("%lld\n", sum);
    printf("%.2f\n", average);
    
    return 0;
}
