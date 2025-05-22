#include <stdio.h>

// Funktion zur Überprüfung, ob eine Zahl eine Primzahl ist
int isPrime(int number) {
    if (number <= 1)
        return 0;

    int i = 2;
    // Schleife zur Überprüfung, ob die Zahl durch eine andere Zahl teilbar ist
    while (i * i <= number) {
        if (number % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main() {
    int n;
    // Eingabe der Zahl
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%d", &n);

    // Ausgabe, ob die Zahl eine Primzahl ist oder nicht
    if (isPrime(n))
        printf("%d ist eine Primzahl.\n", n);
    else
        printf("%d ist keine Primzahl.\n", n);

    return 0;
}