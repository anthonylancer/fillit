#include "f2.h"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		printf("error\n");
		return (0);
	}
	init();
	read(open(av[1], O_RDONLY), p, 560);
	if (*p != '.' && *p != '#')
		printf("error\n");
	else if (!process())
		printf("error\n");
	return 0;
}
