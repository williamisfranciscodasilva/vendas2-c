#include<conio.h>
#include<stdio.h>
main()
{
	float salario_fixo, quantidade, comissao, salario_total;
	
	salario_fixo = 500;
	printf("Quantidade de sistemas vendidos: ");
	scanf("%f",&quantidade);
	comissao = quantidade * 50;
	salario_total = salario_fixo + comissao;
	
	printf("Salario fixo: %f",salario_fixo);
	printf("\nQuantidade: %f",quantidade);
	printf("\nComissao: %f",comissao);
	printf("\nSalario total: %f", salario_total);
	getch();
}
