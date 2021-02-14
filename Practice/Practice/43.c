#include <stdio.h>

struct node {
	int data;
	struct node* link;
};

void main() {
	struct node n1, n2, n3;

	n1.data = 10;
	n1.link = &n2;

	n2.data = 20;
	n2.link = &n3;

	n3.data = 30;
	n3.link = &n1;

	printf("%d %d %d\n", n1.data, n2.data, n3.data);
	printf("%d %d %d\n", n1.link->data, n2.link->data, n3.link->data);
}