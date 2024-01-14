#include <unistd.h>
#include <stdlib.h>

void    rush(int x, int y);

int     main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Usage: ./program_name <x> <y>\n", 30);
		return 1;
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	
        rush(x, y);
        return (0);
}