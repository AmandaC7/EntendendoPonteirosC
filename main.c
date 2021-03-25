#include <stdio.h>

int main(void)
{
    int *ptr;
    int *ptr2;
    int valor = 10;
    int valor2 = 20;

    ptr = &valor;
    ptr2 = &valor2;

    int soma = *ptr + *ptr2;

    printf("Endereço = %x \n", &valor);
    printf("Endereço valor2 = %x \n", &valor2);
    printf("Endereço = %x \n", ptr);
    printf("Endereço valor2 = %x \n", ptr2);
    printf("Valor = %d \n", *ptr);
    printf("Valor2 = %d \n", *ptr2);
    printf("Soma de ptrs = %d \n", soma);

}
