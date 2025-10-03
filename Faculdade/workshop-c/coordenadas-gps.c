#include <stdio.h>
#include <math.h>

int main(){

	int x1, y1, x2, y2;
	float d;

	scanf("%d", &x1);
	scanf("%d", &y1);
	scanf("%d", &x2);
	scanf("%d", &y2);

	d = (float)sqrt( pow((x1 - y1), 2) + pow((x2 - y2), 2));

	if( d < 5 ){

		printf("Muito perto\n");

	} else if (5 <= d && d <= 20){

		printf("Distancia media\n");

	} else {

		printf("Muito longe\n");

	} 


	return 0;
}