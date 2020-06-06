// C++ program for linked list implementation of stack
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

// A structure to represent a stack
class StackNode {
public:
    int data;
    StackNode* next;
};

StackNode* newNode(int data)
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

void push(StackNode** root, int data)
{
    StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    //cout << data << " pushed to stack\n";
}

int pop(StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(StackNode* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main()
{
    StackNode* root = NULL;
    int t,l;
    int count=1;
    cin>>t;

    for(l=0;l<t;l++){
           root = NULL;
           count=1;

    char p[100000];
    cin>>p;
    int l= strlen(p);

    for(int i=0;i<l;i++)
    {
        if(p[i]=='[')
        {
            push(&root,3);


        }
        else if(p[i]=='{')
        {
            push(&root,2);


        }
        else if(p[i]=='(')
        {
            push(&root,1);


        }
        else if(!isEmpty(root)&&peek(root)==3&&p[i]==']')
        {
            pop(&root);



        }
        else if(!isEmpty(root)&&peek(root)==2&&p[i]=='}')
        {
            pop(&root);

        }
        else if(!isEmpty(root)&&peek(root)==1&&p[i]==')')
        {
            pop(&root);


        }
        else
        {
            count=0;
        }

    }




    //isEmpty();
    //cout<<pop(&root);

    if(isEmpty(root)&&count==1)
    {
        cout<<"balanced"<<endl;
    }
    else
    {
        cout<<"not balanced"<<endl;
    }}

    /*push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is " << peek(root) << endl; */

    return 0;
}
