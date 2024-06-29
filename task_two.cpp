#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome to simple algebraic calculator \n";
    cout<<"enter the operands \n";
    int a,b;
    cin>>a>>b;
    cout<<"enter the operation you want to do \n";
    cout<<"1- Addition \n2- Substraction \n3- Multiplication \n4- Division \n";
    int c;
    cin>>c;
    int result;
    if(c==1)
    {
        result = a+b;
    }
    else if(c==2)
    {
        result =a-b;
    }
    else if(c==3)
    {
        result =a*b;
    }
    else if(c==4)
    {
        result = a/b;
    }
    else
    {
        cout<<"enter valid operation";
    }
    cout<<result;
    return 0;
}
