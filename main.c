/*
 * This program reads the amount of values the user wants, then it prints
 * the values entered by the user in the same order and in reverse order.
 *
 * Email: A01411277@itesm.mx
 * Author: Jonathan Nuñez de Caceres
 * Date: 12/10/18
 */

#include <stdio.h>

int main() {
    // Variable that will hold the size of the array.
    int n;

    printf("How many values you want to enter?");
    scanf("%d", &n);

    // The array is declared with the size the user chose.
    int numbers[n];

    // This reads the values and stores them in the array.
    for(int i = 0; i < n; i++){
        printf("%d:", i+1);
        scanf("%d", &numbers[i]);
    }

    // Prints the entered numbers.
    printf("Estos son los numeros que ingresaste:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Prints the entered numbers in reverse order.
    printf("Estos son los numeros en orden inverso:\n");
    for(int i = n; i > 0; i--){
        printf("%d ", numbers[i-1]);
    }

    return 0;
}