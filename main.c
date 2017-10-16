#include <stdio.h>
#include "linked_list.h"

int main(){
	int i = 4;
	struct node* linked_list = NULL;	
	printf("Value of linked_list: %p\n\n", linked_list);

	for(;i>-1;i--){ // 0 1 2 3 4 is contents of LL
		linked_list = insert_front(linked_list, i);
	}

	printf("Values in linked_list after insertion:\n");
	printf("[");
	print_list(linked_list);
	printf("]\n");


	printf("\nValue of linked_list right before free: %p", linked_list);
	linked_list = free_list(linked_list);
	printf("\nValue of linked_list after free: %p\n", linked_list);
	
	printf("Trying to dereference linked_list: [");
	print_list(linked_list);
	printf("]\n");

	/* Test on usage of free()
	char* ptr = (char*)malloc(sizeof(char));
	*ptr = 'c';
	free(ptr);
	printf("[%p]\n",ptr);
	printf("[%s]\n",ptr);
	*/


	return 0;
}
