#include <iostream>
using namespace std;
class Demo{           //Demo is a onstructor-runs when object is created
    public:
    Demo(){        //~Demo is a destructor-runs when object ends
        cout<<"constructor called"<<endl;
    }
    ~Demo(){
        cout<<"Destructor called"<<endl;
    }

};
int main(){
    Demo d;     //Message show execution order
    return 0;
}