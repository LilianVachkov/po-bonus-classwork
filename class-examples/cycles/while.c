#include <stdio.h>

int main() {

	volatile int i = 0; // counter

	while(i == 0) {
		printf("In cycle\n"); // Тоз пичозен код ще изпринти "In cycle" само веднъж, защото i ще стане 1 и после стаа кофти(за цикъла)
		i++; // This will increase the counter which will evade to inevitable break; of the loop
	}

	i = 0;

	while(i++ < 10) { //доста е валидно това тууууууук
		printf("%d ",i); // 1 to 10 
	}
	printf("\n");

	while(i) { // в C булевите изрази са 0 или 1...всичко различно от 0 е 1, а всичко различно от (за всяко х без 0) е 0...ще изведе от 11 към 0(опитайте се да си обясните защо!)
		printf("%d ",i);
		i--;
	}
	printf("\n");

	do { // това условие ВИНАГИ се изпълняв
		scanf("%d ", &i);
	}while(i); // като потребителя(Вие) въведете 0 => излиза от цикъла

	while(1) { // break веднага излиза от цикъла, а continue веднага отива на 1вия ред на цикъла
		scanf("%d", &i);
		if(i == 0)
			continue; //отива на 27 ред...не проверява
		else {
			printf("i is not 0 and is %d", i);
			break;
		}
	}

	return 0;
}

//Бачков®