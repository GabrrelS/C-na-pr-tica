// Matriz

#include <stdio.h>

int main(){
	int L, C, t[3][3];
	
	for (L=0; L<3; L++){
		for (C=0; C<3; C++){
			printf("linha: %d e coluna: %d\n", L, C);	
			scanf("%d", &t[3][3]);
		}
	}
	
	for (L=0; L<3; L++){
		for (C=0; C<3; C++){
			printf("[%d]\n", t[L][C]);
		}
	}
	return 0;
}