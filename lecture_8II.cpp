#include<iostream>
using namespace std;
void printstuff(){
    cout<<"writing my first function";
}

int sum(int ,int );

int main(){
    // printstuff();
    int a, b;
    int c;
    a= 3;
    b=5;
    cout<<a<<" "<<b<<endl;
    c=sum(a,b);
    cout<<c;
    cout<<a<<" "<<endl;
    return 0;
}
int sum(int a,int b){
    int c;
    c = a+b;
    // a= 10;
    // b=11;
    return c;
}