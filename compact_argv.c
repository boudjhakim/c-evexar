#include"compact_argv.h"

char* compact(int argc, char **argv, int *longueur) {
	char *expr;
	int n = 0, k = 0, i, j;

	for(i = 1; i < argc; i++)
		n += strlen(argv[i]);

	expr = (char*)malloc(n * sizeof(char) + 1);

	if(expr == NULL) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	k = 0;
	for(i = 1; i < argc; i++) {
		j = 0;
		while(argv[i][j] != '\0')
			if(argv[i][j] != ' ')
				expr[k++] = argv[i][j++];
			else j++;
	}

	expr[k] = '\0';
	*longueur = k;

	return expr;
}