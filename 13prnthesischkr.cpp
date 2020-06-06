/* C++ program to implement basic stack
   operations */
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Driver program to test above functions
int main()
{
    class Stack s;
    char p[100000];
    cin>>p;
    int l= strlen(p);

    for(int i=0;i<l;i++)
    {
        if(p[i]=='[')
        {
            s.push(3);
        }
        else if(p[i]=='{')
        {
            s.push(2);
        }
        else if(p[i]=='(')
        {
            s.push(1);
        }
        else if(p[i]==']')
        {
            s.pop();
        }
        else if(p[i]=='}')
        {
            s.pop();
        }
        else if(p[i]==')')
        {
            s.pop();
        }
    }
    isEmpty();

    /*if(isEmpty())
    {
        cout<<"balanced"<<endl;
    }
    else
    {
        cout<<"not balanced"<<endl;
    }


    /*s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n"; */

    return 0;
}
