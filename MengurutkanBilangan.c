#include <stdio.h>

// Fungsi untuk Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Loop untuk setiap elemen dalam array
    for (i = 0; i < n - 1; i++) {
        // Loop untuk membandingkan elemen berpasangan dan menukar jika perlu
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika elemen sekarang lebih besar dari elemen berikutnya
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    // Meminta jumlah elemen array
    scanf("%d", &n);
    int arr[n];

    // Meminta elemen-elemen array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Memanggil fungsi Bubble Sort
    bubbleSort(arr, n);

    // Menampilkan elemen array yang sudah diurutkan
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
