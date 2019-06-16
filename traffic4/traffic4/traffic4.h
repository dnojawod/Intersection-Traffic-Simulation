#include<iostream>
using namespace std;
class traffic
{
private:
	struct Node
	{
		int info;
		Node * next;
	};
	Node * front = NULL;
	Node * front1 = NULL;
	Node * rear = NULL;
	Node *rear1 = NULL;
public:
	void enqueue(int x, int y)
	{
		struct Node * temp = new Node;
		if (y == 0)
			front = NULL;
		temp->info = x;
		temp->next = NULL;
		if (front == NULL)
		{
			front = temp;
		}
		else
		{
			rear->next = temp;
		}
		rear = temp;
	}
	void enqueue1(int x, int y)
	{
		struct Node * temp = new Node;
		if (y == 0)
			front1 = NULL;
		temp->info = x;
		temp->next = NULL;
		if (front1 == NULL)
		{
			front1 = temp;
		}
		else
		{
			rear1->next = temp;
		}
		rear1 = temp;
	}
	int dequeue(int x, int y)
	{
		struct Node * temp = front;
		if (front == NULL)
			return y;
		else if (x == 0)
		{
			while (temp != NULL)
			{
				y = temp->info + y;
				temp = temp->next;
			}
			y--;
			return y;
		}
		else
		{
			if (y != 0)
				y--;
			return y;
		}
	}
	int dequeue1(int x, int y)
	{
		struct Node * temp = front1;
		if (front1 == NULL)
		{
			return y;
		}

		else if (x == 0)
		{
			while (temp != NULL)
			{
				y = temp->info + y;
				temp = temp->next;
			}
			y--;
			return y;
		}
		else
		{
			if (y != 0)
				y--;
			return y;
		}
	}
	int display()
	{
		int x = 0;
		struct Node *temp = new Node;
		temp = front;
		if (front == NULL)
			return x;
		else
		{

			while (temp != NULL)
			{
				x = temp->info + x;
				temp = temp->next;
			}
			return x;
		}
	}
	int display1()
	{
		int x = 0;
		struct Node *temp = new Node;
		temp = front1;
		if (front1 == NULL)
			return x;
		else
		{
			while (temp != NULL)
			{
				x = temp->info + x;
				temp = temp->next;
			}
			return x;
		}
	}
};
