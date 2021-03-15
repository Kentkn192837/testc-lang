#include <iostream>
using namespace std;

#define SIZE 10

class Stack {
    char stck[SIZE];
    int tos;
    char who;
public:
    Stack(char c);
    void push(char ch);
    char pop();
};

Stack::Stack(char c)
{
    tos = 0;
    who = c;
    cout << "Constructing Stack " << who << "\n";
}

void Stack::push(char ch)
{
    if(tos == SIZE) {
        cout << "Stack " << who << " is full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char Stack::pop()
{
    if(tos == 0) {
        cout << "Stack " << who << " is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    Stack s1('A'), s2('B');
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('x');
    s2.push('y');
    s2.push('z');

    for(i = 0; i < 5; i++) cout << "Pop s1: " << s1.pop() << "\n";
    for(i = 0; i < 5; i++) cout << "Pop s2: " << s2.pop() << "\n";

    return 0;
}
