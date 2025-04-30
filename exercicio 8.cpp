#include <stdio.h>
#include <string.h>

int eh_palindromo(char *str, int inicio, int fim) {
    if (inicio >= fim)
        return 1; 
    if (str[inicio] != str[fim])
        return 0; 
    return eh_palindromo(str, inicio + 1, fim - 1);
}

int palindromo(char *str) {
    return eh_palindromo(str, 0, strlen(str) - 1);
}

int main() {
    char str[100];
    
    printf("Digite uma string: ");
    scanf("%99s", str);
    
    if (palindromo(str))
        printf("'%s' eh um palindromo.\n", str);
    else
        printf("'%s' nao eh um palindromo.\n", str);
    
    return 0;
}
