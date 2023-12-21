#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void cls(void) {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){

    float nota, notafinal, soma;
    int i, n;

    setlocale(LC_ALL, "portuguese");

    printf("Quantas notas serão cadastradas? \n");
    scanf("%d", &n);

    printf("Digite a primeira nota: \n");
    scanf("%f", &soma);

    for (i = 2; i <= n; i++){
        printf("\n");
        printf("Digite outra nota: \n");
        scanf("%f", &nota);

        soma = soma + nota;
    }

    notafinal = soma / n;

    cls();
    printf("\n");
    printf("NOTA FINAL = %.1lf \n", notafinal);
    printf("\n");
    printf("**********************************\n");

    if (notafinal >= 60.0){
        printf("\t APROVADO! \n");
    } else {
        printf("\t REPROVADO! \n");
    }
    printf("**********************************\n");

return 0;
}