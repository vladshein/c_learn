#include <stdio.h>

void shellsort(int * v, int n);

int main() { 

	int v[8] = {10, 5, 15, 7, 11, 2, 99, 6};
	shellsort(v, 8);

	for(int i = 0; i < 8; i++)
		printf("[%d]\n", v[i]);
	
	return 0;
}

void shellsort(int * v, int n) {
	int gap, i, j, temp;
	for (gap = n/2; gap > 0; gap /= 2)
		for (i = gap; i < n; i++)
			for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
				printf("j is [%d]\n"
					   "i is [%d]\n" 
					   "gap is [%d]\n",	j, i, gap);
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}

}
