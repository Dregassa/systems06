struct node {
	int data; 
	struct node* next;
};

void print_list(struct node* begin);
struct node* insert_front(struct node* oldfront, int newdata);
struct node* free_list(struct node* begin);
