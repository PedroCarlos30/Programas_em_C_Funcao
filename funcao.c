#include <stdio.h>
#include <locale.h>

void igual(int n)
{
    setlocale(LC_ALL, "Portuguese");
    if(n == 0){
        printf("%i é igual à 0.", n);
    }
    else{
        printf("%i não é igual à 0.", n);
    }
}

int main(void)
{
    int x = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &x);
    igual(x);
    return 0;
}