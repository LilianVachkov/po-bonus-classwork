#include<stdio.h>

int main() {

	int n, i, j = 0;
	float s;
	do {
		printf("i = ");
		scanf("%d", &i);

	}while( i <= 0 );

	while(j < i) {

		printf("Enter n = ");
		scanf("%d", &n);
		
		s = s + n;
		j++;
	}
	
	s = s / i;
	
	printf("%f\n" , s);

	return 0;
}
