#include <iostream>
#include "LinkedStack.h"
using namespace std;

void printStack(LinkedStack& stack);

int main()
{
	LinkedStack stack;
	LinkedStack stack2;

	stack.push(100);
	stack.push(150);
	stack.push(222);
	stack.push(71);
	stack.push(53);
	stack.push(125);

	cout << stack.peek() << endl;

	/*while (!stack.isEmpty())
	{
		cout << stack.pop() << endl;
	}*/

	printStack(stack);
	cout << endl;
	printStack(stack);

	return 0;
}

void printStack(LinkedStack& stack)
{
	LinkedStack tempHolder;
	int data;

	while (!stack.isEmpty())
	{
		data = stack.pop();
		cout << data << endl;
		tempHolder.push(data);
	}

	// put back in original stack
	while (!tempHolder.isEmpty())
	{
		stack.push(tempHolder.pop());
	}
}