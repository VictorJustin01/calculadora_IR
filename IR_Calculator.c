#include <stdio.h>
/*Programa que calcula o imposto de renda do usuário*/
int main()
{
   float salario, salarioDescontado, imposto, valorImposto, parcelaDeduzir;
    printf("Insira seu salário: ");
        scanf("%f", &salario);
    if(salario <= 1903.98)
        printf("Seu salario não será descontado");
        
    if(salario >= 1903.99 && salario <=  2826.65){
        imposto = (7.5/100);
        parcelaDeduzir = 142.80;
        valorImposto = (imposto * salario) - parcelaDeduzir;
        salarioDescontado = salario - valorImposto;
            /*o "imposto * 100" é para transformar o valor de decimal para porcentagem*/
            printf("Seu imposto foi de: %.1f%% e o valor do imposto foi de: R$ %.2f\n", (imposto*100),valorImposto);
            printf("salario com o desconto do imposto de renda: R$ %.2f", salarioDescontado);
    }
   if(salario >= 2826.66 && salario <= 3751.05){
       imposto = (15.0/100);
       parcelaDeduzir = 354.80;
       valorImposto = (imposto * salario)- parcelaDeduzir;
       salarioDescontado = salario - valorImposto;
            printf("Seu imposto foi de: %.1f%% e o valor do imposto foi de: R$ %.2f\n", (imposto*100),valorImposto);
            printf("salario com o desconto do imposto de renda: R$ %.2f", salarioDescontado);
   }
    if(salario >= 3751.06 && salario <= 4664.68){
       imposto = (22.5/100);
       parcelaDeduzir = 636.13;
       valorImposto = (imposto * salario) - parcelaDeduzir;
       salarioDescontado = salario - valorImposto;
            printf("Seu imposto foi de: %.1f%% e o valor do imposto foi de: R$ %.2f\n", (imposto*100),valorImposto);
            printf("salario com o desconto do imposto de renda: R$ %.2f", salarioDescontado);
   }
   else if( salario >= 4664.69){
        imposto = (27.5/100);
        parcelaDeduzir = 869.36;
       valorImposto = (imposto * salario) - parcelaDeduzir;
       salarioDescontado = salario - valorImposto;
            printf("Seu imposto foi de: %.1f%% e o valor do imposto foi de: R$ %.2f\n", (imposto*100),valorImposto);
            printf("salario com o desconto do imposto de renda: R$ %.2f", salarioDescontado);
   }
    return 0;
}