#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sec;
	
	printf("Input the second : ");
	scanf("%i", &sec);
	
	printf("The time for %i second is %i : %i : %i\n", 
						sec,
						sec/3600,
						(sec%3600)/60,
						sec%60
						);

	return 0;
}