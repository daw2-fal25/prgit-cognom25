#include <stdio.h>

int main() {
	float suma=0;
	float mitja;
	float nou_valor=0.0;
	int numero_repeticions=9;
	char consulta='s';

	while(consulta=='s') {
		printf("Fal25 - Dòna la següent data: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valaor;
		numero_repeticions=numero_repeticions+1;
		printf("Fal25 - Vols continuar (s/n): ");
		scanf("%s",consulta);
	}
	mitja=suma/numero_repeticions;
	printf("Fal25 - La mitja és: %.2f\n", mitja);
	return 0;
}
