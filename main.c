#include <stdio.h>

int main() {
    // Variável para demonstração
    unsigned char byte = 0b10101010; // Exemplo de um byte com bits alternados
    
    // Máscara para acessar o quarto bit
    unsigned char mascara = 0b00001000; // O quarto bit é 1, os outros são 0s
    
    // Verificando se o quarto bit está definido
    if (byte & mascara) {
        printf("O quarto bit está definido.\n");
    } else {
        printf("O quarto bit não está definido.\n");
    }
    
    // Definindo o quarto bit como 1
    byte |= mascara;
    printf("Byte após definir o quarto bit como 1: %d\n", byte);
    
    // Limpando o quarto bit (definindo-o como 0)
    byte &= ~mascara;
    printf("Byte após limpar o quarto bit: %d\n", byte);
    
    return 0;
}
