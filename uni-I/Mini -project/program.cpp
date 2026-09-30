#include<iostream>                                      // Includes the input/output stream library
#include<string>                                        // Includes the string library
#include<vector>                                        // Includes the vector library
using namespace std;                                    // Allows use of standard library names without std::

class SmartDevice{                                      // Defines a class named SmartDevice
    private:                                            // Starts the private section of the class
    string deviceID;                                    // Stores the unique ID of the device
    string deviceType;                                  // Stores the type of the device
    string location;                                    // Stores the location of the device
    string status;                                      // Stores the current status of the device
    string lastUpdated;                                 // Stores the last updated time of the device

    public:                                             // Starts the public section of the class
    SmartDevice(string ID,string type,string loc,string stat,string time)           // Constructor to initialize device details
    :deviceID(ID),deviceType(type),location(loc),status(stat),lastUpdated(time){}     // Initializes all device data

    void switchOn(string time){                         // Function to switch the device ON
        status="ON";                                    // Changes the device status to ON
        lastUpdated=time;                               // Updates the last updated time
    }

    void switchOff(string time){                        // Function to switch the device OFF
        status="OFF";                                   // Changes the device status to OFF
        lastUpdated=time;                               // Updates the last updated time
    }

    void changeStatus(string newStatus,string time){    // Function to change the device status
        status=newStatus;                               // Assigns the new status to the device
        lastUpdated=time;                               // Updates the last updated time
    }

    void displayData() const{                           // Function to display device information
        cout<<"ID:"<<deviceID                             // Displays the device ID
            <<"|Type:"<<deviceType                     // Displays the device type
            <<"|Location:"<<location                    // Displays the device location
            <<"|Status:"<<status                        // Displays the current status
            <<"|Last Updated:"<<lastUpdated<<endl;      // Displays the last updated time
    }
};

int main(){                                             // Main function where program execution starts
    vector<SmartDevice>homeDevices;                     // Creates a vector to store SmartDevice objects

    homeDevices.emplace_back("D001","Light","Living Room","OFF","08:00"); // Adds a light device
    homeDevices.emplace_back("D002","Thermostat","Bedroom","ON","08:05"); // Adds a thermostat device
    homeDevices.emplace_back("D003","Camera","Main Door","ON","08:10");   // Adds a camera device
    homeDevices.emplace_back("D004","Door Lock","Main Door","LOCKED","08:15"); // Adds a door lock device

    cout<<"=== Smart Home Dashboard ==="<<endl;          // Prints the home dashboard heading

    for(const auto& device:homeDevices){                 // Loops through all devices in the vector
        device.displayData();                            // Displays the details of the current device
    }

    homeDevices[0].switchOn("09:00");                    // Switches the first device ON and updates its time
    homeDevices[3].changeStatus("UNLOCKED","09:05");     // Changes the door lock status to UNLOCKED

    cout<<"\n=== Updated Home Dashboard ==="<<endl;      // Prints the heading for updated dashboard

    for(const auto& device:homeDevices){                 // Loops through all devices again
        device.displayData();                            // Displays the updated details of each device
    }

    return 0;
