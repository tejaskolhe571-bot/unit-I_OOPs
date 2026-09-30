#include<iostream>              
using namespace std;            

class Test{                     // Defines a class named Test

    private:                    // Starts the private section of the class
    int value;                  // Declares a private integer variable named value

    public:                     // Starts the public section of the class

    Test(int v){                 // Constructor that takes an integer parameter v
        value = v;               // Assigns the value of v to the private variable value
    }

    inline int getValue(){       // Inline function that returns the value of value
        return value;            // Returns the value stored in the variable value
    }

    friend void show(Test t);    // Declares show() as a friend function of the class
};                              // Ends the class definition


void show(Test t){               // Defines the friend function show()
    cout << t.value;             // Accesses and prints the private variable value
}


int main(){                      // Main function where program execution starts

    Test obj(50);                // Creates an object obj and passes 50 to the constructor

    cout << obj.getValue()       // Calls getValue() and prints the returned value
         << endl;                // Moves the cursor to the next line

    show(obj);                   // Calls the friend function show() and passes obj

    return 0;                    // Ends the program successfully
}