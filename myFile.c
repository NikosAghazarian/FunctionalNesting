#include <stdio.h>

int main() {
	int addit(int a) {
		return a+5;	
	}
	int inpu;
	scanf("input value: %d", &inpu);
	inpu = addit(inpu);

	printf("%d\n", inpu);

	return 0;
}

