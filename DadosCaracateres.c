#include <stdio.h>
void main(){
    char nome[30];
    char ender[40];
    printf("Digite seu nome:\n");
    fflush(stdin);
    gets(nome);
    printf("Seu endereco:\n");
    fflush(stdin);
    gets(ender);
    printf("Voce digitou \"%s\" que mora em \%s\"",nome,ender);

}
