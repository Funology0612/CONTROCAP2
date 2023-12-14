#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int *p;
	int size;
} array;

array ptr;

int main(){
	
	printf("Nhap so luong phan tu: ");
	scanf("%d", &ptr.size);
	
	// Cap phat dong cho con tro cap 1 (ptr.p)
	ptr.p = (int*)malloc(ptr.size * sizeof(int));
	
	// Cap phat dong cho con tro cap 2
	int **p_to_p = &ptr.p;
	
	// Nhap phan tu cho mang con tro cap 1 
	for(int i = 0; i < ptr.size; i++){
		scanf("%d", &ptr.p[i]);
	}
	
	printf("Cac gia tri cua con tro cap 1: ");
	for(int i = 0; i < ptr.size; i++){
		printf("%d ", *(ptr.p + i));
	}
	printf("\n");
	for(int i = 0; i < ptr.size; i++){
		printf("%d ", ptr.p[i]);
	}
	free(ptr.p);
	return 0;
}
