CFLAGS=-Wall -Wextra -Werror -g

all: ex1 ex3 ex7 ex8 ex9 ex10
	echo "Making files...\nDone.\n"

clean:
	rm -f ex1 ex3 ex7 ex8 ex9 ex10
	echo "Deleting files...\nDeleted.\n"
