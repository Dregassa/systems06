#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//struct node{int data; struct node* next};
// linked lists should be null terminated

void print_list(struct node* begin){
	while (begin){
		printf("%d ", begin->data);
		begin = begin->next;
	}
		
}


struct node* insert_front(struct node* oldfront, int newdata){
	struct node* newfront = (struct node*) malloc(sizeof(struct node));
	newfront->data=newdata;
	newfront->next=oldfront;
	return newfront;
}

/* Epic fail at recursion
struct node* free_list(struct node* begin){
	if (begin->next){ //if the next node is not null
		//printf("%d\n", begin->data);
		free_list(begin->next);
		begin = 0;
		free(begin);
	}

	else{ //single element LL
		begin = 0;
		free(begin);
		
	}
	printf("%p",begin);
	return begin;
}
*/

struct node* free_list(struct node* begin){
	struct node* prev;
	while(begin){
		prev = begin;
		begin = begin->next;	
		free(prev);
	//	prev = 0;
	}
	//printf("\nbegin: %p", begin);
	return begin;
}


