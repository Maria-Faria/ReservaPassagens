#include <stdio.h>

int main() {
	int voo[10], i, id, numv, j = 1;
	
	for(i = 0; i <= 9; i++) {
		printf("Quantidade de lugares disponiveis para o voo %d: ", i + 1);
		scanf("%d", &voo[i]);
	}
	
	do {
		printf("\n\n---------- Cliente %d ----------\n", j);
		printf("Numero da carteira de identidade: ");
		scanf("%d", &id);
		
		printf("Numero do voo desejado (0 para encerrar): ");	
		scanf("%d", &numv);
		
		if(numv == 0) {
			break;	
		}
		
		while(numv < 1 || numv > 10) {
			printf("Voo inexistente! Informe um voo valido: ");
			scanf("%d", &numv);
		}
		
		printf("----------------------------\n");

		for(i = 1; i <= 10; i++) {
			if(numv == i) {
				if(voo[i - 1] > 0) {
					printf("Reserva cadastrada!\n");
					printf("Identidade do cliente: %d\n", id);
					printf("Numero do voo: %d", numv);
					voo[i - 1] -= 1;
				}else {
					printf("Nao existem lugares disponiveis nesse voo...\n");
				}
			}
		}
		
		j++;
	
	}while(numv != 0);
	
	return 0;
}