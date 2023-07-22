#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void limparBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){}
}

int main(){
    setlocale(LC_ALL, "portuguese"); //Se a base ou a altura forem decimais, os separe por vírgula, e não por ponto ".".

    double base, altura, area, perimetro, diagonal;
    int x;

    do{
        printf("=============== MENU PRINCIPAL ===============\n");
        printf("1 - Calcular as medidas de um retângulo.\n");
        printf("2 - Sair.\n");
        printf("\nDigite o número da opção desejada: ");
        scanf("%d", &x);
        limparBuffer();

        system("cls");
        switch(x){
            case 1:
                printf("=============== INSIRA OS DADOS ABAIXO ===============\n");
                printf("Base do retângulo: ");
                scanf("%lf", &base);
                limparBuffer();

                printf("Altura do retângulo: ");
                scanf("%lf", &altura);
                limparBuffer();

                area = base * altura;
                perimetro = 2 * (base + altura);
                diagonal = sqrt(pow(base, 2) + pow(altura, 2));

                system("cls");
                printf("=============== RESULTADO ===============\n");
                printf("Área: %.4lf\n", area);
                printf("Perímetro: %.4lf\n", perimetro);
                printf("Diagonal: %.4lf\n\n", diagonal);

                system("pause");
                system("cls");
                break;
            case 2:
                printf("=============== SAINDO ===============\n\n");
                system("pause");
                system("cls");
                break;
            default:
                printf("=============== INSIRA UMA OPÇÃO VÁLIDA ===============\n\n");
                system("pause");
                system("cls");
                break;
        }
    }while(x != 2);

    return 0;
}
