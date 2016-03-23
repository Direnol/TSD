#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "radical.h"
#include "struct.h"

int main (int argc, char *argv[])
{
	if (argc < 4) {
        printf ("Input a, b, c : (ax^2 + bx + c)\n");
        return EXIT_FAILURE;
	}

	int flg = 0;
    radix *data;
	data = (radix *) malloc(sizeof(radix));
	
    data->a = atoi(argv[1]);
	data->b = atoi(argv[2]);
	data->c = atoi(argv[3]);
	data->x1 = 0;
	data->x2 = 0;

    radical(data, &flg);

	if (flg != 0) {
		printf ("no solutions!\n");
		return EXIT_FAILURE;
	}

	printf ("x1 = %.2f x2 = %.2f\n", data->x1, data->x2);
	return EXIT_SUCCESS;
}
