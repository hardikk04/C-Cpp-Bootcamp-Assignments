// 14. Segregate even and odd nodes in a Linked List using Deque.
// CPP program to segregate even and
// odd nodes in a linked list using deque
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void push(struct Node** head_ref, char new_data)
{

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


	new_node->data = new_data;


	new_node->next = (*head_ref);


	(*head_ref) = new_node;
}


void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
				printf("%d ", temp->data);
		temp = temp->next;
	}
}

void evenOdd(struct Node* head)
{
	struct Node* temp = head;


	deque<int> d;


	while (temp != NULL) {


		if (temp->data % 2 == 0)
			d.push_front(temp->data);

		else
			d.push_back(temp->data);
		temp = temp->next;
	}

	temp = head;

	while (!d.empty()) {
		temp->data = d.front();
		d.pop_front();
		temp = temp->next;
	}
}


int main()
{
	struct Node* head = NULL;
	push(&head, 10);
	push(&head, 9);
	push(&head, 8);
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	cout << "Given linked list: ";
		printList(head);

	evenOdd(head);

	cout << "\nAfter rearrangement: ";
		printList(head);

	return 0;
}
