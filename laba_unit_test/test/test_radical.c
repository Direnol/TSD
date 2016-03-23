#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../src/radical.h"
#include "../src/struct.h"

int main (int argc, char *argv[])
{
	if (argc < 6) {
        printf ("Not enough information\n");
        return EXIT_FAILURE;
	}

    radix *data;
    data = (radix *) malloc(sizeof(radix));
    
	int rez, tmp, i;
	data->a = atoi(argv[1]);
	data->b = atoi(argv[2]);
	data->c = atoi(argv[3]);
	data->x1 = atoi(argv[4]);
	data->x2 = atoi(argv[5]);
	// rez = atoi(argv[6]);
	int x1 = data->x1;
	int x2 = data->x2;
	char output[2][10] =
	{
	"test pass",
	"test fail"
	};
    
    radical(data, &tmp);
    if (((data->x1 == x1) && (data->x2 == x2)) || ((data->x1 == x2) && (data->x2 == x1)))
		i = 0;
	else
		i = 1;
	FILE *out;
    out = fopen("rez_r.txt", "a");
    fprintf(out, "a = %d  b = %d c = %d x1 = %d x2 = %d X1 = %.2f X2 = %.2f %s\n", data->a, data->b, data->c, x1, x2, data->x1, data->x2, output[i]);
    printf ("\n");

	return 0;
}
