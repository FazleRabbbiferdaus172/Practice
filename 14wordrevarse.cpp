// C++ program for linked list implementation of stack
#include <bits/stdc++.h>
#include <cstring>
#include<string>
using namespace std;

// A structure to represent a stack
class StackNode {
public:
    char data;
    StackNode* next;
};

StackNode* newNode(char data)
{
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(StackNode* root)
{
    return !root;
}

void push(StackNode** root, char data)
{
    StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    //cout << data << " pushed to stack\n";
}

char pop(StackNode** root)
{
    if (isEmpty(*root))
        return NULL;
    StackNode* temp = *root;
    *root = (*root)->next;
    char popped = temp->data;
    free(temp);

    return popped;
}

char peek(StackNode* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main()
{
    StackNode* root = NULL;

    int t,l;
    cin>>t;
    string c[1000];

    for(l=0;l<t;l++){
    char s[2001],rs[2001];
    cin>>s;
    int i;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
       push(&root,s[i]);
    }
    i=0;

    while(!isEmpty(root))
    {
        if(pop(&root)=='.')
        {

        }
    }




    /*push(&root, 'a');
    push(&root, 'b');
    push(&root, 'c');

    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is " << peek(root) << endl;*/

    return 0;
}
