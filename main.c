#include <fcntl.h>
#include "libft.h"
#include "fillet.h"

int	main(int ac, char** av)
{
	char 	*p;
	cursor 	c;

tetri gg, dd;
gg = (tetri){(tpc){0,0},(tpc){0,1},(tpc){0,2},(tpc){0,3}};
dd = (tetri){(tpc){0,0},(tpc){0,1},(tpc){0,2},(tpc){0,3}};

	c.x = 0;
	c.y = 0;
	if (!(p = malloc(100)))
	return 0;
	read(open("1", O_RDONLY), p, 100);
	ft_putstr(p);
	ft_putstr(ft_itoa(sizeof(gg)));
	ft_putchar('\n');
	ft_putstr(ft_itoa(gg.d.y));
	ft_putstr(ft_itoa(ft_memcmp(gg, dd, 40)));

return 0;
}
