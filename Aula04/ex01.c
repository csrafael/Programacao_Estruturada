#include <stdio.h>

int produto_interno (int x[], int y[], int n)
{
	int resp = 0;
	int i;
	
	for ( i = 0; i<n; i++ ) {
		resp += x[i]*y[i];
	}

	return resp;
}