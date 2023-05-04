#include <stdio.h>
#include <math.h>

unsigned __int128 lim = pow(2, 8);
unsigned __int128 n;
unsigned __int128 cache[100000000];
long count;

int main() {
	for (unsigned __int128 i = 1; i < lim; i++) {
		n = i;
		count = 0;

		if (cache[n] != 0) {
			count = cache[n];
		}		

		while (n != 1) {
			count += 1;

			if (n % 2 == 0) {
				n /= 2;
			}
			else if (n % 2 != 0) {
				n = 3 * n + 1;
			}
			
			if (cache[n] != 0) {
				count += cache[n];
				break;
			}
		}
		cache[i] = count; printf("%d\n", count);
	}

	return 0;
}
