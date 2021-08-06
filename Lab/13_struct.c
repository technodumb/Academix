#include <stdio.h>
#include <math.h>

struct point {
	float x;
	float y;
} ;


float distance(struct point a,struct point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(void) {
	struct point a, b;
    printf("\n\n\n");
    printf("Enter the first point (x1 y1): ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter the second point (x2 y2): ");
    scanf("%f %f", &b.x, &b.y);
	printf("The distance between the two points is %.2f units.\n", distance(a, b));
	return 0;
}
