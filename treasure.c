#include <stdio.h>

void swap_treasures(int *map1_func, int *map2_func);

void swap_treasures(int *map1_func, int *map2_func) {
	int tmp;
	
	tmp = *map1_func;
	*map1_func = *map2_func;
	*map2_func = tmp;
}

int main() {
	int treasure1 = 100;
	int treasure2 = 5;
	int *map1 = &treasure1;
	int *map2 = &treasure2;
	
	printf("Before swap treasure1 %d\n", treasure1);
	printf("Before swap treasure2 %d\n", treasure2);
	swap_treasures(map1, map2);
	printf("After swap treasure1 %d\n", treasure1);
	printf("After swap treasure2 %d\n", treasure2);
	
	swap_treasures(&treasure1, &treasure2);
	printf("After second swap treasure1 %d\n", treasure1);
	printf("After second swap treasure2 %d\n", treasure2);

	return 0;
}
