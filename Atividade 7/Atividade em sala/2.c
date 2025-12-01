// Matriz

#include <stdio.h>
int main(){
	int t[3][3] = {
	{300, 5, 3},
	{4, 10, 337},
	{12, 2, 5}};
	
	printf("[%d][%d][%d]\n", t[0][0], t[0][1], t[0][2]);
	printf("[%d][%d][%d]\n", t[1][0], t[1][1], t[1][2]);
	printf("[%d][%d][%d]\n", t[2][0], t[2][1], t[2][2]);

	return 0;
}