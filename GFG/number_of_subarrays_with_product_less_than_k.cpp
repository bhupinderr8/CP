#include <stdlib.h>
#include<iostream>
int main() {
    unsigned int t, n, *arr, *p, numOfSubarray, i, j;
    unsigned long int k, temp, product;

    scanf("%d", &t);
    while (t-- > 0) {
        scanf("%d %lu", &n, &k);
        p = arr = (unsigned int *)calloc(n, sizeof(unsigned int));
        if (!arr)
            continue;

		for (i = 0 ; i < n ; i++, p++) {
			scanf("%d ", p);
		}

        numOfSubarray = 0;
        product = 1;

        for (i = 0, j = 0 ; i < n ; i++) {
			for (; j < n ; j++) {
				if (arr[j] < k) {
                    temp = (unsigned long int)arr[j];
                    temp *= product;
                    if (temp < k) {
                        product = temp;
                        numOfSubarray++;
                    }
                    else {
                        temp = (unsigned long int)arr[i];
                        product = product/temp;
                        numOfSubarray += ((j-1)-(i+1)+1);

                        break;
                    }
				}
				else {
					if (j > i) {
						for (i++ ; i < j ; i++) {
							numOfSubarray += (((j-1)-i)+1);
						}
					} 
					j++;

					product = 1;

					break;

				} 
			} 

			if (j == n) {
				for (i++ ; i < n ; i++) {
					numOfSubarray += (((n-1)-i)+1);
				} 
			} 
			
        } 

        printf("%d\n", numOfSubarray);
        free(arr);
    }

	return 0;
}