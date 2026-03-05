// 12S25012 // JUSMER JUNIATI PASARIBU
#include <stdio.h> // Untuk fungsi input/output seperti printf dan scanf
#include <stdlib.h> // Untuk fungsi EXIT_FAILURE jika ada kesalahan
#include <float.h>  // Untuk FLT_MAX dan FLT_MIN yang digunakan sebagai nilai awal untuk min/max

int main() {
    int n; // Deklarasi variabel integer 'n' untuk menyimpan jumlah nilai yang akan dibaca
    int i; // Deklarasi variabel integer 'i' sebagai counter untuk loop
    float sum = 0.0f; // Deklarasi dan inisialisasi variabel float 'sum' untuk mengakumulasi total nilai.
    float average; // Deklarasi variabel float 'average' untuk menyimpan hasil rata-rata
    int count_above_average = 0; // Deklarasi dan inisialisasi counter untuk nilai di atas atau sama dengan rata-rata

    // Variabel baru untuk Tugas 3: mencari nilai maksimum dan minimum
    float max_value = FLT_MIN; // Inisialisasi dengan nilai float terkecil yang mungkin
    float min_value = FLT_MAX; // Inisialisasi dengan nilai float terbesar yang mungkin
    float range; // Untuk menyimpan hasil rentang nilai

    // Langkah 1: Membaca nilai 'n'
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Validasi 'n'. Jika pembacaan gagal atau n tidak valid (misalnya n <= 0), program keluar.
        return EXIT_FAILURE;
    }

    // Karena kita perlu menyimpan semua nilai untuk dibandingkan dengan rata-rata NANTI,
    // kita akan menggunakan array. Ukuran array ditentukan oleh 'n'.
    float values[n]; // Deklarasi array float 'values' untuk menyimpan 'n' buah nilai

    // Langkah 2: Membaca 'n' buah nilai, menyimpannya di array, menghitung jumlahnya,
    // dan sekaligus mencari nilai maksimum serta minimum.
    for (i = 0; i < n; i++) {
        // Membaca setiap nilai satu per satu.
        if (scanf("%f", &values[i]) != 1) {
            // Validasi input untuk setiap nilai. Jika pembacaan gagal, program keluar.
            return EXIT_FAILURE;
        }
        sum += values[i]; // Menambahkan nilai yang baru dibaca ke total 'sum'

        // Logika untuk mencari nilai maksimum dan minimum
        if (values[i] > max_value) {
            max_value = values[i]; // Update max_value jika nilai saat ini lebih besar
        }
        if (values[i] < min_value) {
            min_value = values[i]; // Update min_value jika nilai saat ini lebih kecil
        }
    }

    // Langkah 3: Menghitung rata-rata
    if (n > 0) {
        average = sum / n; // Menghitung rata-rata
    } else {
        average = 0.0f; // Jika n tidak valid (seharusnya tidak terjadi karena sudah divalidasi), rata-rata adalah 0
    }

    // Langkah 4: Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    // Kita mengulang kembali melalui array 'values' yang berisi semua nilai.
    for (i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++; // Jika nilai saat ini lebih besar atau sama dengan rata-rata, tingkatkan counter
        }
    }

    // Langkah 5: Menghitung rentang nilai (maksimum - minimum)
    // Hanya hitung jika 'n' > 0 untuk menghindari masalah jika tidak ada nilai.
    if (n > 0) {
        range = max_value - min_value;
    } else {
        range = 0.0f; // Jika tidak ada nilai, rentang dianggap 0
    }


    // Langkah 6: Menampilkan hasil sesuai format yang diminta
    printf("%g\n", sum); // Output jumlah
    printf("%.2f\n", average); // Output rata-rata dengan 2 digit presisi
    printf("%d\n", count_above_average); // Output jumlah nilai di atas/sama dengan rata-rata
    printf("%g\n", range); // Output rentang nilai

    return 0; // Mengembalikan 0 menandakan program berjalan sukses
}  