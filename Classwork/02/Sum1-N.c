#include<stdio.h>

int main() {

	int n, i=0, s=0;
	
	printf("Enter n = ");
	scanf("%d", &n);
	
	while( i <= n) {
		s = s + i;
		i++;
	}
	
	printf("%d\n" , s);

	return 0;
}
