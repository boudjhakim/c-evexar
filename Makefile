CC=gcc # Compilateur
CFLAGS=-W # Options de compilation
LDFLAGS=  # Options de l'édition des liens
EXEC=evexar # Nom de l'exécutable
TARBALL=evexar.tar.gz # Nom du fichier tarball contenant le projet

SOURCES=main.c compact_argv.c
OBJETS=$(SOURCES:.c=.o)

all: $(EXEC)

evexar: $(OBJETS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -rf *.o

cleanall:
	@rm -rf *.o
	@rm -rf $(EXEC)
	@rm -rf $(TARBALL)

tarball: all
	@tar -zcvf $(TARBALL) *.c Makefile $(EXEC)