#include <stdio.h>
#include <stdint.h>

#define IN  1  /* inside of a word */   
#define OUT 0  /* outside of a word */

/* in order to stop execution and see result - press ctrl + d */ 

int main() { 
	int32_t c, nl, nw, nc, state;
	
	state = OUT; 
	nl = nw = nc = 0; 
	while ((c = getchar()) != EOF ) {
		++nc;
		if( c == '\n')
			++nl; 
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT; 
		else if (state == OUT) { 
			state = IN; 
			++nw;
		}
	}

	printf("%d %d %d\n", nl, nw, nc);

	return 0;
}
