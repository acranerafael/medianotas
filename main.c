#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void cls(void);
void limpaStdin(void);
void menu(void);

int main(){
    setlocale(LC_ALL, "portuguese");

    char op;

    printf("Gostaria de iniciar a calculadora? (s/n) \n");
    scanf("%c", &op);

    do {

        if (op == 's' || op == 'S') {
            menu();

            printf("Gostaria de refazer o cálculo? (s/n) \n");
            scanf("%c", &op);

        } else if (op == 'n' || op == 'N') {
            cls();
            printf("\n");
            printf("****************************************\n");
            printf("\t Calculadora encerrada!\n");
            printf("****************************************\n");

            op = 'x';
        } else {
            cls();
            printf("****************************************\n");
            printf("\t Valor inválido! \n");
            printf("****************************************\n");
            printf("\n");

            printf("Digite apenas S ou N \n");
            scanf("%c", &op);
        }

    } while(op != 'x');

    return 0;
}

void cls(void) {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void limpaStdin(void) {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void menu(void) {

    float nota, notafinal, soma;
    int i, n;

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
    printf("\n");

    limpaStdin();
}