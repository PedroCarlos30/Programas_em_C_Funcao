#include <stdio.h>
#include <locale.h>

void mm(int k); 

int main(void)
{
    int i = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite sua idade: ");
    scanf("%d", &i);
    mm(i);
    return 0;
}

void mm(int k)
{
    setlocale(LC_ALL, "Portuguese");
    //acrescentei a idade > 60 para incluir as pessoas idosas.
    if(k >= 18 && k <=59){
        printf("Você é maior de idade.");
    }
    else if(k >= 60){
        printf("Você é uma pessoa idosa.");
    }
    else{
        printf("Você não é maior de idade.");
    }
}
