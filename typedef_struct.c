//using struct
#include <stdio.h>

typedef struct 
{
	int x;
	int y;
}Point;
typedef struct 
{
	Point a;
	Point b;
}box;
Point Top = {20,13};
Point bottom;
box rect = {12,16,18,17};

int main(int argc, char const *argv[])
{
	bottom.x=3;
	bottom.y=8;
	fprintf(stdout, "Top.x = %d\n",Top.x );
	fprintf(stdout, "Top.y = %d\n",Top.y );
	fprintf(stdout, "bottom.x = %d\n",bottom.x );
	fprintf(stdout, "bottom.y = %d\n",bottom.y );
	fprintf(stdout, "rect.a.x = %d\n",rect.a.x );
	fprintf(stdout, "rect.a.y = %d\n",rect.a.y );
	fprintf(stdout, "rect.b.x = %d\n",rect.b.x );
	fprintf(stdout, "rect.b.y = %d\n",rect.b.y );

} 