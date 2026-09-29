#include <stdio.h>
int main() {
    float valorHora, horas, bruto, ir, inss, sindicato, liquido;

    printf("Quanto ganha por hora? ");
    scanf("%f", &valorHora);

    printf("Horas trabalhadas no mes: ");
    scanf("%f", &horas);

    bruto = valorHora * horas;

    ir = bruto * 0.11;
    inss = bruto * 0.08;
    sindicato = bruto * 0.05;

    liquido = bruto - (ir + inss + sindicato);

    printf("\nSalario Bruto: R$ %.2f\n", bruto);
    printf("IR (11%%): R$ %.2f\n", ir);
    printf("INSS (8%%): R$ %.2f\n", inss);
    printf("Sindicato (5%%): R$ %.2f\n", sindicato);
    printf("Salario Liquido: R$ %.2f\n", liquido);

}