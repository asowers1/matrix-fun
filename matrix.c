#include <stdio.h>

#define len 4
#define height 4

void tap(int x, int y, int arr[len][height]) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < height; j++) {
			arr[i][j] = j == y ? 1 : i == x ? 1 : 0;		
		}
	}
}

void print(int arr[len][height]) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < height; j++) {
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char **argv) {
	int arr[len][height];
	tap(2,2,arr);
	print(arr);
	return 0;
}
