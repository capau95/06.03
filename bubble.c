#include <stdio.h>

void printArray(int zahlen[20]) {

	int k;

	for(k=0; k<20; k++) {

		printf("%d ", zahlen[k]);

	}

	printf("\n");
}

int main() {

	int zahlen[] = {5, 12, 4, 2, 1, 20, 17, 13, 3, 18, 11, 14, 19, 7, 6, 16, 8, 15, 10, 9};
	int i, j, speicher;

	printArray(zahlen);
	for(i=0; i<20; i++) {

		for(j=0; j<(20 - i); j++) {

			if (zahlen[j] > zahlen[j+1]) {

				speicher = zahlen[j];
				zahlen[j] = zahlen[j+1];
				zahlen[j+1] = speicher;	
			}

		}


	}

	printArray(zahlen);

	return 0;

}

