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

    float nota1, nota2, notafinal;

    setlocale(LC_ALL, "portuguese");

    cls();
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    cls();
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    notafinal = (nota1 + nota2) / 2;

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
