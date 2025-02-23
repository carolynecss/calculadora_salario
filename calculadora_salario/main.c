#include <stdio.h>

// Função para calcular o desconto do INSS
float calcular_inss(float salario_bruto) {
    if (salario_bruto <= 1212) {
        return salario_bruto * 0.075;  // 7.5%
    } else if (salario_bruto <= 2427.35) {
        return salario_bruto * 0.09;   // 9%
    } else if (salario_bruto <= 3641.03) {
        return salario_bruto * 0.12;   // 12%
    } else if (salario_bruto <= 7087.22) {
        return salario_bruto * 0.14;   // 14%
    } else {
        return 7087.22 * 0.14;        // Teto do INSS
    }
}



// Função para calcular o salário líquido
float calcular_salario_liquido(float salario_bruto) {
    float inss = calcular_inss(salario_bruto);


    return salario_bruto - inss;
}

int main() {
    float salario_bruto;

    // Entrada de dados
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario_bruto);

    // Cálculos
    float inss = calcular_inss(salario_bruto);
    float salario_liquido = calcular_salario_liquido(salario_bruto);

    // Resultado
    printf("\nSalario Bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto INSS: R$ %.2f\n", inss);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

    return 0;
}

