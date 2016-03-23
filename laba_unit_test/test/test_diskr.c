#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../src/disk.h"
#include "../src/struct.h"

int main(int argc, char *argv[])
{
	if (argc < 5) {
        printf ("Not enough information\n");
        return EXIT_FAILURE;
	}
	
	char output[2][10] =
	{
	"test pass",
	"test fail"
	};

	radix *data;
	data = (radix *) malloc(sizeof(radix));
	
	data->a = atoi(argv[1]);
	data->b = atoi(argv[2]);
	data->c = atoi(argv[3]);
	int rezult = atoi(argv[4]);

	int diskr = disk(data);
	int i;
	
	if (diskr == rezult)
		i = 0;
	else 
		i = 1;
		
	 FILE *out;
    out = fopen("rez_d.txt", "a");
    fprintf(out, "a= %d  b= %d c= %d rezult= %d real = %d %s\n", data->a, data->b, data->c, rezult, diskr, output[i]);
    printf ("\n");
    free(data);
    fclose(out);

	return 0;
}
