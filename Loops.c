//loops (for, do while, while do)
#include<stdio.h>
int main(){
	int x,y;
	x = 15;
	y = 10;
	printf("X vale %d e y vale %d\n",x,y);
	y = x++;
	printf("(y = x++) X vale %d e y vale %d\n",x,y);
	x = 15;
	y = 10;
	y = ++x;
	printf("(y = ++x) X vale %d e y vale %d\n",x,y);
	x = 15;
	y = 10;
	y += x; // é o mesmo que y = y + x
	printf("(y += x) X vale %d e y vale %d\n",x,y);
	x = 15;
	y = 10;
	y =+ x; // é o mesmo que y = x
	printf("(y =+ x) X vale %d e y vale %d\n",x,y);
	return 0;
}
