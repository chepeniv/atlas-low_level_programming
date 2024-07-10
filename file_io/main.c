#include "main.h"

int main (int argc, char **argv)
{

	int error;

	error = create_file( argv[1],  argv[2]);

	return error;
}
