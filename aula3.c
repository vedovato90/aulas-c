#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y = 4,z;
	
	for(x=0;x<=10;x=x+1){
		z = x*y;
		printf("%i X %i = %i\n",x,y,z);	
	}
	
	return 0;
}
