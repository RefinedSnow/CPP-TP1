CC       = g++
LINKER   = g++ -o
rm       = del

SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin
INCDIR   = include

CFLAGS   = -W -Wall -I. -I$(INCDIR)
LFLAGS   = -W -Wall -I. -I$(INCDIR) -lm

all: $(BINDIR)/ex1 $(BINDIR)/ex2  $(BINDIR)/ex4 $(BINDIR)/ex5

$(BINDIR)/ex1: $(OBJDIR)/tableaux.o $(OBJDIR)/ex1.o
	$(CC) $(LDFLAGS) $^ -o $@

$(BINDIR)/ex2: $(OBJDIR)/tableaux.o $(OBJDIR)/ex2.o
	$(CC) $(LDFLAGS) $^ -o $@

$(BINDIR)/ex4: $(OBJDIR)/tableaux.o $(OBJDIR)/ex4.o
	$(CC) $(LDFLAGS) $^ -o $@

$(BINDIR)/ex5: $(OBJDIR)/bonus.o
	$(CC) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compile $< OK"

.PHONY: clean
clean:
	@$(rm) $(OBJDIR)/*
	@echo "cleaned $(OBJDIR)/"

.PHONY: distclean
distclean: clean
	@$(rm) $(BINDIR)/*
	@echo "cleaned $(BINDIR)/"
