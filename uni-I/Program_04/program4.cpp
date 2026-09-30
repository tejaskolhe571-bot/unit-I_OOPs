#include<iostream>
using namespace std;
int add(int,int);     //acts as a function
int main(){     //main starts execution
    int a=10,b=20;
    cout<<"Sum="<<add(a,b)<<endl;  //add(a,b) calls the function 
    return 0;
}
int add(int x,int y){       ///x and y recieves values
    return x+y;   //return gives output
}