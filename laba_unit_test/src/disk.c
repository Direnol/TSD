#include "disk.h"
#include "struct.h"
#include <math.h>

float disk(radix *data)
{
	float d = data->b * data->b - 4 * data->a * data->c;
	if (d < 0) {
		return -1;
	}
	return d;
}
