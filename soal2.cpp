#include <stdio.h>

//makan dulu wok
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n; i++){
		for (int j = 0; j < n - 1 - i; j++)
			putchar(' ');
		for (int j = 0; j < 2*i - 1; j++)
			putchar('*');
		putchar('\n');
	}
	for (int j = 0; j < n - 2; j++)
			putchar(' ');
	putchar('*');
	return 0;
}
