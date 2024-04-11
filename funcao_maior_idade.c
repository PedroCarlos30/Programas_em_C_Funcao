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
    if(k >= 18){
        printf("Você é maior de idade.");
    }
    else{
        printf("Você não é maior de idade.");
    }
}