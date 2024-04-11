#include <stdio.h>
#include <locale.h>

void pi(int z); 

int main(void)
{
    int n = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &n);
    pi(n);
    return 0;
}

void pi(int z)
{
    setlocale(LC_ALL, "Portuguese");
    if(z % 2 == 0){
        printf("%i é par.", z);
    }
    else{
        printf("%i é impar.", z);
    }
}