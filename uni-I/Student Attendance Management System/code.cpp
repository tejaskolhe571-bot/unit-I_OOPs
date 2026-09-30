#include <iostream>                 // Includes the input/output stream library
#include<string>                     // Includes the string library
using namespace std;                  // Allows use of standard library names without std::

class Student{                      // Defines a class named Student
    private:                        // Starts the private section of the class
    int rollNo;                     // Stores the roll number of the student
    string name;                    // Stores the name of the student
    int totalDays;                  // Stores the total number of attendance days
    int presentDays;                // Stores the number of days the student was present

    public:                         // Starts the public section of the class
    Student(int r,string n)         // Constructor that accepts roll number and name
    :rollNo(r),name(n),totalDays(0),presentDays(0){}          // Initializes student details and attendance counts

    void markAttendance(bool isPresent){             // Function to mark the student's attendance
    totalDays++;                    // Increases the total number of days by 1
    if(isPresent){                  // Checks whether the student is present
        presentDays++;              // Increases present days if the student is present
    }
    }
     double getAttendancePercentage() const {           // Function to calculate attendance percentage
        if(totalDays==0){                             // Checks if there are no attendance records
            return 0.0;                            // Returns 0 if no attendance has been recorded
        }
        return(presentDays*100.0)/totalDays;           // Calculates and returns attendance percentage
    }

    void display()const{            // Function to display student attendance details
        cout<<"Roll:"<<rollNo<<"|Name:"<<name<<"|Attendance:"<<getAttendancePercentage()<<"%"<<endl; // Displays roll number, name and attendance percentage

    }

};

int main(){                          // Main function where program execution starts
    Student s1(101,"Rahul");         // Creates Student object s1 
    Student s2(102,"Priya");         // Creates Student object s2 
    Student s3(103,"Piyush");        // Creates Student object s3 
    Student s4(104,"Omkar");         // Creates Student object s4 

    s1.markAttendance(true);         // Marks s1 as present
    s1.markAttendance(true);         // Marks s1 as present
    s1.markAttendance(false);        // Marks s1 as absent

    s2.markAttendance(true);         // Marks s2 as present
    s2.markAttendance(true);         // Marks s2 as present
    s2.markAttendance(true);         // Marks s2 as present

    s3.markAttendance(true);         // Marks s3 as present
    s3.markAttendance(true);         // Marks s3 as present
    s3.markAttendance(true);         // Marks s3 as present

    s4.markAttendance(true);         // Marks s4 as present
    s4.markAttendance(false);        // Marks s4 as absent
    s4.markAttendance(false);        // Marks s4 as absent

    cout<<"===Attendance Report==="<<endl; 
    s1.display();                     // Displays Rahul's attendance details
    s2.display();                     // Displays Priya's attendance details
    s3.display();                     // Displays Piyush's attendance details
    s4.display();                     // Displays Omkar's attendance details

}

