#include <string.h>
#include "bool.h"

static int isDigit(char c){
	return (c >= '0' && c <= '9');
}

int evaluate(char *expression){
	
	int len = strlen(expression);
	/* Total */
	int tot = 0;
	/* Find the first number */
	int ptr = 0;
	while (ptr < len) { 
		char ch = expression[ptr];
		if (isDigit(ch)) {
			tot = ch - '0';
			ptr++;
			break;
		} else {
			ptr++;
		}
	}

	/* If no numbers found, return */
	if (ptr == len) return tot;

	/* Loop processing the rest */
	boolean num = false;
	char oper=' ';
	while (ptr < len) {
		/* Get the character */
		char ch = expression[ptr];

		/* Is it what we expect, if not - skip */
		if (num && !isDigit(ch)) {ptr++;continue;}
		if (!num && isDigit(ch)) {ptr++;continue;}

		/* Is it a number */
		if (num) { 
			switch (oper) {
				case '+' : { tot += (ch-'0'); break; }
				case '-' : { tot -= (ch-'0'); break; }
				case '*' : { tot *= (ch-'0'); break; }
				case '/' : { if (ch!='0') tot /= (ch-'0'); break; }
			}
		} else {
			oper = ch;
		}			

		/* Go to next character */
		ptr++;
		num = !num;
	}
	return tot;
}
