#include <stdio.h>

struct car
{
	int *reg;
	char *ty;
	struct car *link;
};

int main()
{
	struct car c1,c2;
	c1.link=NULL;
	c1.reg=1661;
	c1.ty='c';
	printf("%d",c1.next.reg);
}
