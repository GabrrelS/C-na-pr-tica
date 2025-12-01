// Matriz

#include <stdio.h>

int main(){
	int L, C, t[3][3];
	t[0][0] = 300;
	t[0][1] = 5;
	t[0][2] = 3;
	t[1][0] = 4;
	t[1][1] = 10;
	t[1][2] = 337;
	t[2][0] = 12;
	t[2][1] = 2;
	t[2][2] = 5;
	
	for (L=0; L<3; L++){
		for (C=0; C<3; C++){
			printf("%d", t[L][C]);
		}
	}
	return 0;
}