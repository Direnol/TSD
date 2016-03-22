#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../src/disk.h"
#include "../src/struct.h"

int main()
{
	FILE *file;
	char *file_name = "test_d.txt";
	char input[30];
	char output[2][10] =
	{
	"test pass",
	"test fail"
	};

    file = fopen( file_name, "input_test" );

	fgets(input, 30, file);

	radix data;
	int rez;
	data.a = atoi(&(input[0]));
	data.b = atoi(&(input[3]));
	data.c = atoi(&(input[6]));
	rez = atoi(&(input[9]));

	disk(data);

	int i;
    // something
	 FILE *out;
    out = fopen("rez_d.txt", "a");
    fprintf(out, "a= %d  b= %d c= %d rez= %d %s\n", data.a, data.b, data.c, rez, output[i]);
    printf ("\n");

	return 0;
}
