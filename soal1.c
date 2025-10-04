#include <stdio.h>
#include <limits.h>

//ngintip wkwk
int main(){
	int n = 0, count = 0;
	scanf("%d", &n);
	float x[1000], maks = INT_MIN, total = 0;
	
	for (int i = 0; i < n; i++){
		float a;
		scanf("%f", &a);
		total += a;
		if (a > maks){
			count = 1;
			maks = a;
		}
		else if (a == maks){
			count++;
		}
		x[i] = a;
	}
	printf("Max : %.0f\nCount : %d\ndays : ", maks, count);
	for (int i = 0; i < n; i++){
		if (x[i] == maks)
			printf("%d ", i+1);
	}
	printf("\nPercentage : %.3f\%%", ((float)(count * maks) / total) * 100);
	return 0;
}
