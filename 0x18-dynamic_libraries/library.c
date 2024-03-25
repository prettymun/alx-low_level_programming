#include <stdio.h>
#include <stdlib.h>

int _putchar(char c) {
	    return putchar(c);
}

int _islower(int c) {
	    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
	    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
	    return (n < 0) ? -n : n;
}

int _isupper(int c) {
	    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
	    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
	    int len = 0;
	        while (*s++) {
			        len++;
				    }
		    return len;
}
