#include<iostream>
using namespace std;
//Calculator

void calculator(int x, int y, string z){
    if (z=="+")
    {
        cout<<x+y;
    }
    else if (z == "-")
    {
        cout<<x-y;
    }
    else if (z == "*")
    {
        cout<<x*y;
    }
    else 
    cout<<x/y;
}

int main(){
    cout<<"Please enter the numbers:"<<endl;
    cout<<"Number 1:"<<" ";
    int a,b;
    cin>>a;
    cout<<"Number 2:"<<" ";
    cin>>b;

    cout<<"Please enter the opertion you want to perform:(+ , - , * , /)"<<endl;
    string c;
    cin>>c;

    calculator(a,b,c);

    return 0;
}