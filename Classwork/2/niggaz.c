#include <stdio.h>
#define tickets 12

int main() {

	int niggers, sum = 0;

	while(sum != tickets) {
		do
			scanf("%d", &niggers);
		while(niggers < 0 || niggers > tickets);
		sum += niggers;
		if(sum > tickets){
			printf("Error:\n");
			return -1;
		}
	}

	printf("OK!Tickets sold out :>3\n");

	return 0;
}