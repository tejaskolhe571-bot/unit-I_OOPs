#include<iostream>            //<iostream is used for input and output
using namespace std;
class Student {               
    public:
    static int count;       //static count belongs to class
    Student(){
        count++;           //constructor increases count

    }
};
int Student::count=0;     //student::count defines shared count
int main(){
    Student s1,s2,s3;   //class name access static member
    cout<<Student::count;
    return 0;
}