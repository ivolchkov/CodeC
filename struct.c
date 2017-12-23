//using struct
#include <stdio.h>

struct coords
{
	int x;
	int y;
}Point;
struct  coords Top;

 int main()
 {
 	Point.x=5;
 	Point.y=8;
 	Top.x=23;
 	Top.y=22;
 	fprintf(stdout, "Coords Point.x = %d\n",Point.x );
 	fprintf(stdout, "Coords Point.y = %d\n",Point.y );
 	fprintf(stdout, "Coords Top.x = %d\n",Top.x );
 	fprintf(stdout, "Coords Top.y = %d\n",Top.y );
 }