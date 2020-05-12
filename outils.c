#include"outils.h"

int lireMot(char *expr, char *mot) {
	extern int pos;
	int i = 0;

	if(expr[pos] == '\0') return 0;

	while(expr[pos + i] >= '0' && expr[pos + i] <= '9') {
		mot[i] = expr[pos + i];
		i++;
	}

	if(i != 0) {
		mot[i] = '\0';
		pos += i;
	} else {
		if(expr[pos] == '+' || expr[pos] == '-' || expr[pos] == '*' || expr[pos] == '/' || expr[pos] == '^'
			|| expr[pos] == '(' || expr[pos] == ')') {
			mot[i++] = expr[pos++];
			mot[i] = '\0';
		}
	}

	return i;

}