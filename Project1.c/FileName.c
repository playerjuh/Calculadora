#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	float num1, num2, result;
	int operador, continuar;

	do {
		printf("Escolha o primeiro numero: ");
		scanf("%f", &num1);
		printf("O primeiro numero: %.2f\n", num1);
		printf("Escolha o segundo numero: ");
		scanf("%f*c", &num2);
		printf("O segundo numero: %.2f\n\n", num2);

		printf("SOMA: 1\n");
		printf("SUBTRACAO: 2\n");
		printf("MULTIPLICACAO: 3\n");
		printf("DIVISAO: 4\n\n");
		printf("Escolha o operador: ");
		scanf("%d*c", &operador);

		if (operador == 1) {

			result = num1 + num2;
			printf("Resultado: %.2f\n", result);
		}

		else if (operador == 2) {

			result = num1 - num2;
			printf("Resultado: %.2f\n", result);
		}

		else if (operador == 3) {

			result = num1 * num2;
			printf("Resultado: %.2f\n", result);
		}

		else if (operador == 4) {

			result = num1 / num2;
			printf("Resultado: %.2f\n", result);
		}

		else {

			printf("Operador inexistente");

		}

		printf("\n\nVoce deseja calcular novamente?\nSIM = 1\nNAO = 2\nContinuar? ");
		scanf("%d", &continuar);

	} while (continuar == 1);

	
}