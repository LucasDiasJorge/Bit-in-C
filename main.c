#include <stdio.h>

int main() {
    // Exemplo de variáveis
    unsigned char a = 0b10101010; // 170 em decimal
    unsigned char b = 0b11001100; // 204 em decimal
    unsigned char resultado;

    // AND Bitwise (&)
    resultado = a & b;
    printf("AND Bitwise: %d\n", resultado);

    // OR Bitwise (|)
    resultado = a | b;
    printf("OR Bitwise: %d\n", resultado);

    // XOR Bitwise (^)
    resultado = a ^ b;
    printf("XOR Bitwise: %d\n", resultado);

    // NOT Bitwise (~)
    resultado = ~a;
    printf("NOT Bitwise (a): %d\n", resultado);

    // Deslocamento para a esquerda (<<)
    resultado = a << 2;
    printf("Deslocamento para a esquerda: %d\n", resultado);

    // Deslocamento para a direita (>>)
    resultado = b >> 3;
    printf("Deslocamento para a direita: %d\n", resultado);

    return 0;
}
