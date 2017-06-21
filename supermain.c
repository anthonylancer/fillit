#include <stdlib.h>

typedef struct
{
        unsigned short x;
        unsigned short y;
} curs;

void convert(unsigned short *t, curs c, unsigned short pos)
{
        *t = *t|c.x << ((3-pos)*4)+2;
        *t = *t|c.y << (3-pos)*4;
}

int main()
{
        char *p = malloc(560);
        curs c = {0,0};
        unsigned short tab[26];
        unsigned short tabi =0;
        unsigned short tpi =0;
        unsigned short nlc =0;
        tab[tabi]=0;
        p = "....\n.#..\n.###\n....\n\n....\n....\n###.\n#...\n\n.#..\n##..\n.#..\n....\n\n..#.\n..#.\n..#.\n..#.\n\n..#.\n..#.\n.##.\n....\n";
        while(*p++)
        {
                if (*p == '.')
                        c.x++;
                else if (*p == '#')
                {
                        convert(&tab[tabi], c, tpi);
                        tpi++;
                        c.x++;
                }
                else if (*p == '\n')
                {
                        if (nlc == 4)
                        {
                                tab[++tabi]=0;
                                c.y=0;
                                nlc=0;
                                tpi=0;
                                continue;
                        }
                        c.y++;
                        c.x = 0;
                        nlc++;
                }
        }
        return 0;
}

//read(open("gg", O_RDONLY), p, 560);

