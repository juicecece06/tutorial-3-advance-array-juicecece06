// 12S25012 // JUSMER JUNIATI PASARIBU
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int scores[n]; // Menggunakan Variable Length Array (VLA) yang didukung C99
    long long sum = 0; 
    int min_score, max_score;

    // Baca nilai pertama untuk inisialisasi min_score dan max_score
    scanf("%d", &scores[0]);
    sum += scores[0];
    min_score = scores[0];
    max_score = scores[0];

    // Baca nilai-nilai berikutnya dan perbarui sum, min_score, max_score
    for (i = 1; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
        if (scores[i] < min_score) {
            min_score = scores[i];
        }
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    
      
    double average = (double)sum / n;
    
    int count_above_avg = 0;
    for (i = 0; i < n; i++) {
        if (scores[i] >= average) {
            count_above_avg++;
        }
    }
    
    int range = max_score - min_score;

    printf("%lld\n", sum);
    printf("%.2f\n", average);
    printf("%d\n", count_above_avg);
    printf("%d\n", range);
    
    return 0;
}
