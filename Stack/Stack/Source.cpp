#include <iostream>
#include <conio.h>
using namespace std;

class Stack {
private:
	int sizee, top;
	int * arr;
public:
	
	Stack();
	Stack(int array_size);
	//Stack(int num, string file_name);
	bool isEmpty();
	bool isFull();
	int size();
	int max_size();
	void display();
	void push(int num);
	void pop();
	int topval();
};
Stack::Stack(){
	sizee = 10;
	top = -1;
	arr = new int[sizee];
}
Stack::Stack(int array_size){
	sizee = array_size;
	top = -1;
	arr = new int[sizee];
}
bool Stack::isEmpty(){
	return top == -1;
}
bool Stack::isFull(){
	return top == sizee - 1;
}
int Stack::size(){
	return top + 1;
}
int Stack::max_size(){
	return sizee;
}
void Stack::display(){
	if (isEmpty())
		cout << "Stach is Empty!\n";
	else {
		for (int i = top; i >= 0; i--)
			cout << " | " << arr[i] << " |\n";
		cout << "-------\n";
	}
}
int Stack::topval(){
	if (!isEmpty())
		return arr[top];
	cout << "Stack is Empty!\n";
	return NULL;
}
void Stack::push(int num){
	if (isFull())
		cout << "Error! Over Flow!" << endl;
	else {
		top++;
		arr[top] = num;
	}
}
void Stack::pop(){
	if (isEmpty())
		cout << "Error! UnderFlow!\n";
	else {
		cout << arr[top] << ": is poped\n";
		top--;
	}
}
void main()
{
	Stack st(5);
	st.display();
	_getch();
	st.push(5);
	st.display();
	_getch();
	st.push(2);
	st.display();
	_getch();
	st.push(3);
	st.display();
	_getch();
	st.push(7);
	st.display();
	_getch();
	st.push(1);
	st.display();
	_getch();
	st.push(3);
	st.display();
	_getch();
	cout << "\npop 1st time\n";
	st.pop();
	cout << "Top Val:" << st.topval() << endl;
	st.display();
	_getch();
	cout << "\npop 2nd time\n";
	st.pop();
	cout << "Top Val:" << st.topval() << endl;
	st.display();
	_getch();
	cout << "\npop 3rd time\n";
	st.pop();
	cout << "Top Val:" << st.topval() << endl;
	st.display();
	_getch();
	cout << "\npop 4the time\n";
	st.pop();
	cout << "Top Val:" << st.topval() << endl;
	st.display();
	_getch();
	cout << "\npop 5th time\n";
	st.pop();
	cout << "\nTop Val:" << st.topval() << endl;
	st.display();
	_getch();
	cout << "\npop 6th time\n";
	st.pop();
	cout << "Top Val:" << st.topval() << endl;
	st.display();
	_getch();
	cout << "\npop 7th time\n";
	st.pop();
	cout << "Top Val:" << st.topval() << endl;
	st.display();
	system("pause");
}