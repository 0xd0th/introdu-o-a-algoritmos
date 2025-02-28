
#include <stdio.h>
#include <stdlib.h>


void insert_sort( int* array, size_t size ) {
	
	int itr = 0;
	int key = 0;

	for ( int i = 1 ; i < size ; i ++ ) {
		
		key = array[i];
		itr = i - 1;

		while ( itr >= 0 && array[itr] > key ) {
			
			array[itr+1] = array[itr];
			--itr;
		}

		array[itr+1] = key;


	}
	

}


int main (void) {
	
	size_t size = 6;
	int array[] = {5, 2, 4, 6, 1, 3};
	insert_sort(array, size);	

	for ( int i = 0 ; i < size ; i ++ ) printf("%d\n", array[i]);
	
	return 0;

}

