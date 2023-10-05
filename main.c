#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// #4 ¹ø ¹®Á¦ 
int main(int argc, char *argv[]) 
{
	int input, sec, min;
	
	printf("input the second: ");
	scanf("%d", &input);
	
	min=(input%3600)/60;
	
	printf("The time is %d : %d\n", min, sec);
	
	return 0;
}
