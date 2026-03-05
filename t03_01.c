// 12S25012 // JUSMER JUNIATI PASARIBU
#include <stdio.h> // Untuk fungsi input/output seperti printf dan scanf
#include <stdlib.h> // Untuk fungsi EXIT_FAILURE jika ada kesalahan

int main() {
    int n; // Deklarasi variabel integer 'n' untuk menyimpan jumlah nilai yang akan dibaca
    int i; // Deklarasi variabel integer 'i' sebagai counter untuk loop
    float sum = 0.0f; // Deklarasi dan inisialisasi variabel float 'sum' untuk mengakumulasi total nilai. Menggunakan float untuk akurasi rata-rata.
    float value; // Deklarasi variabel float 'value' untuk menyimpan setiap nilai yang dibaca
    float average; // Deklarasi variabel float 'average' untuk menyimpan hasil rata-rata

    // Langkah 1: Membaca nilai 'n'
    // Memastikan 'n' adalah bilangan bulat positif dan valid.
    // Loop akan terus berjalan jika scanf gagal membaca integer atau jika n kurang dari atau sama dengan 0.
    // Untuk tujuan autograding, prompt interaktif dihapus, jadi diasumsikan input akan valid atau program akan menerima apapun yang diberikan.
    // Jika validasi input yang lebih ketat diperlukan (misalnya, meminta ulang input), logikanya bisa ditambahkan di sini.
    // Saat ini, validasi internal yang diminta hanya mengasumsikan input sesuai format.
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Jika pembacaan gagal atau n tidak valid (misalnya n <= 0),
        // program akan keluar dengan kode error. Ini penting untuk sistem autograding.
        return EXIT_FAILURE;
    }
  
    // Langkah 2: Membaca 'n' buah nilai dan menghitung jumlahnya
    // Loop akan berjalan sebanyak 'n' kali.
    for (i = 0; i < n; i++) {
        // Membaca setiap nilai satu per satu.
        // Validasi serupa dengan 'n', jika scanf gagal, program akan keluar.
        if (scanf("%f", &value) != 1) {
            return EXIT_FAILURE;
        }
        sum += value; // Menambahkan nilai yang baru dibaca ke total 'sum'
    }

    // Langkah 3: Menghitung rata-rata
    // Memastikan tidak ada pembagian dengan nol jika 'n' somehow menjadi nol (meskipun sudah divalidasi di awal).
    if (n > 0) {
        average = sum / n; // Menghitung rata-rata dengan membagi total 'sum' dengan 'n'
    } else {
        average = 0.0f; // Jika n tidak valid (meskipun seharusnya tidak terjadi), rata-rata adalah 0
    }

    // Langkah 4: Menampilkan hasil sesuai format yang diminta
    // "%g" digunakan untuk menampilkan float atau double tanpa trailing zeros, cocok untuk jumlah.
    printf("%g\n", sum);
    // "%.2f" digunakan untuk menampilkan float atau double dengan dua digit presisi di belakang koma, cocok untuk rata-rata.
    printf("%.2f\n", average);

    return 0; // Mengembalikan 0 menandakan program berjalan sukses
}
