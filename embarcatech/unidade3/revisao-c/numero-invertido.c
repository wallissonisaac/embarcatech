/*
10 - Faça um programa que leia um numero inteiro positivo de três dígitos (de 100 a 999). Gere outro numero formado pelos dígitos invertidos do
numero lido. Exemplo: número lido: 123 e o resultado invertido deve ser 321.
*/

#include <stdio.h>

int inverterNumero(int numero) {
    int invertido = 0, resto;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }
    return invertido;
}

int main() {
    int numero, numeroInvertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) {
        numeroInvertido = inverterNumero(numero);
        printf("O número invertido é: %d\n", numeroInvertido);
    } else {
        printf("Número inválido. Digite um número entre 100 e 999.\n");
    }

}
