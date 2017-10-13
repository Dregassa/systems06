#include <stdio.h>

struct node{int i; struct node* next};

void print_list(struct node* begin){
	while (*begin){
		printf("%d ", *begin);
	}
	printf('\n');
}

struct node* insert_front(struct node* newfront, int newdata){

}

int main(){


}
