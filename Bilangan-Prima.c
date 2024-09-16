#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    long long input;
    int isPrime = 1; // set default isPrime menjadi 1 (true)
    scanf("%lld", &input); // mengambil input

    if (input == 0 || input == 1){ //jika input adalah 0/1 maka bilangan tersebut bukan prima
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(input); i++) { //cek input hingga akar kuadrat dari input, karena jika input memiliki akar maka dia memiliki faktor lain yaitu akar itu sendiri
            if (input % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }

    return 0;
}
