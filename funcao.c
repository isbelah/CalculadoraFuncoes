#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"
#include<locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n1;
	int n2;
	int opera;
	int conta;
	int total;
	conta = 1;
	while (conta=1){
		printf("\nOPERAÇÕES\nSOMA[1]\nSUBTRAÇÃO[2]\nMULTIPLICAÇÃO[3]\nDIVISÃO[4]\n:");
		scanf("%d", &opera);
		printf("\nDigite o primeiro número:");
		scanf("%d", &n1);
		printf("\nDigite o segundo número:");
		scanf("%d", &n2);		
