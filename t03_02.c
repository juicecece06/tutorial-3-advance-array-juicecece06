// 12S25012 // JUSMER JUNIATI PASARIBU
#include <stdio.h> // Untuk fungsi input/output seperti printf dan scanf
#include <stdlib.h> // Untuk fungsi EXIT_FAILURE jika ada kesalahan

int main() {
    int n; // Deklarasi variabel integer 'n' untuk menyimpan jumlah nilai yang akan dibaca
    int i; // Deklarasi variabel integer 'i' sebagai counter untuk loop
    float sum = 0.0f; // Deklarasi dan inisialisasi variabel float 'sum' untuk mengakumulasi total nilai.
    float average; // Deklarasi variabel float 'average' untuk menyimpan hasil rata-rata
    int count_above_average = 0; // Deklarasi dan inisialisasi counter untuk nilai di atas atau sama dengan rata-rata

    // Langkah 1: Membaca nilai 'n'
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Validasi 'n'. Jika pembacaan gagal atau n tidak valid (misalnya n <= 0), program keluar.
        return EXIT_FAILURE;
    }

    // Karena kita perlu menyimpan semua nilai untuk dibandingkan dengan rata-rata NANTI,
    // kita akan menggunakan array. Ukuran array ditentukan oleh 'n'.
    // Ini adalah perubahan utama dari kode sebelumnya.
    float values[n]; // Deklarasi array float 'values' untuk menyimpan 'n' buah nilai

    // Langkah 2: Membaca 'n' buah nilai, menyimpannya di array, dan menghitung jumlahnya
    for (i = 0; i < n; i++) {
        // Membaca setiap nilai satu per satu.
        if (scanf("%f", &values[i]) != 1) {
            // Validasi input untuk setiap nilai. Jika pembacaan gagal, program keluar.
            return EXIT_FAILURE;
        }
        sum += values[i]; // Menambahkan nilai yang baru dibaca ke total 'sum'
    }

    // Langkah 3: Menghitung rata-rata
    if (n > 0) {
        average = sum / n; // Menghitung rata-rata
    } else {
        average = 0.0f; // Jika n tidak valid (seharusnya tidak terjadi karena sudah divalidasi), rata-rata adalah 0
    }

    // Langkah 4: Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    // Kita perlu mengulang kembali melalui array 'values' yang berisi semua nilai.
    for (i = 0; i < n; i++) {
        if (values[i] >= average) {
            count_above_average++; // Jika nilai saat ini lebih besar atau sama dengan rata-rata, tingkatkan counter
        }
    }

    // Langkah 5: Menampilkan hasil sesuai format yang diminta
    // "%g" untuk menampilkan jumlah tanpa trailing zeros.
    printf("%g\n", sum);
    // "%.2f" untuk menampilkan rata-rata dengan dua digit presisi di belakang koma.
    printf("%.2f\n", average);
    // "%d" untuk menampilkan jumlah nilai di atas rata-rata sebagai integer.
    printf("%d\n", count_above_average);

    return 0; // Mengembalikan 0 menandakan program berjalan sukses
}  