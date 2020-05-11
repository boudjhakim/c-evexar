#ifndef OUTILS_H
	#define OUTILS_H

	enum {VIDE = 0, OPERANDE, OPERATEUR, PARENTHESE_OUVRANTE, PARENTHESE_FERMANTE};

	int pos = 0;
	int etatPrecedent = VIDE;

#endif