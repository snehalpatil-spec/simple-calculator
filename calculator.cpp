#include<iostream>
using namespace std;
int main()
{
   float num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    char op;
    cout<<"Enter the operator: ";
    cin>>op;
    switch(op)
    {
       case '+' :
     cout<<num1+num2<<endl;
     break;

     case '-' :
     cout<<num1-num2<<endl;
     break;

     case '*' :
     cout<<num1*num2<<endl;
     break;

     case '/' :
     cout<<num1/num2<<endl;
     break;
    
     default:
     cout<<"Enter another operator"<<endl;
     break;
    }
   return 0;
}
