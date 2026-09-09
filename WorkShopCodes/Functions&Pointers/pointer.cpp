#include<iostream>
using namespace std;

int main(){

    int x = 2;

    int* p1 = &x;

    cout<<x<<'\n';
    cout<<&x<<'\n';
    
    cout<<p1<<'\n';
    cout<<&p1<<'\n';
    cout<<*p1<<'\n';
    

    return 0;
}