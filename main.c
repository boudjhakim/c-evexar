#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

#include"compact_argv.h"

int main(int argc, char **argv) {
	char *expr;
	int longueur = 0;

	if(argc == 1) {
		fprintf(stderr, "Usage:\n\t%s \"<expr_arith>\"\n", argv[0]);
		return EXIT_SUCCESS;
	}

	expr = compact(argc, argv, &longueur);

	printf("Expression: (%s, %d)\n", expr, longueur);

	return EXIT_SUCCESS;
}
