#include <fcntl.h>
#include "libft.h"

typedef struct
{
	unsigned char x;
	unsigned char y;
}	cursor;

typedef	struct
{
	unsigned char x : 2;
	unsigned char y : 2;
}	tpc;

typedef struct
{
	tpc a;
	tpc b;
	tpc c;
	tpc d;
}	tetri;

tetri O;
tetri L1;
tetri L2;
tetri L3;
tetri L4;
tetri J1;
tetri J2;
tetri J3;
tetri J4;
tetri T1;
tetri T2;
tetri T3;
tetri T4;
tetri S1;
tetri S2;
tetri S3;
tetri S4;
tetri I1;
tetri I2;

O = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
L1 = (tetri){(tpc){0,0},(tpc){0,1},(tpc){0,2},(tpc){1,2}};
L2 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){0,2}};
L3 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){1,1},(tpc){1,2}};
L4 = (tetri){(tpc){1,0},(tpc){1,1},(tpc){1,2},(tpc){0,2}};
J1 = (tetri){(tpc){2,0},(tpc){0,1},(tpc){1,1},(tpc){2,1}};
J2 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
J3 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
J4 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
T1 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
T2 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
T3 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
T4 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
S1 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
S2 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
S3 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
S4 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
I1 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
I2 = (tetri){(tpc){0,0},(tpc){1,0},(tpc){0,1},(tpc){1,1}};
