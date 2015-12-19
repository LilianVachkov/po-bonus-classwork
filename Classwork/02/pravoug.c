#include<stdio.h>

int main() {
	
	int a, b, k, i;

	printf("Shirochina = ");
	scanf("%d", &a);
	printf("Visochina = ");
	scanf("%d", &b);

	for(k = 0; k < b; k++) {
		for(i = 0; i < a ; i++)
			printf("#");
		printf("\n");
	}
	
	return 0;
}
