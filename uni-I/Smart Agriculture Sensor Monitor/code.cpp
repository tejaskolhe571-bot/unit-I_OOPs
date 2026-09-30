#include<iostream>              // Includes the input/output stream library
#include<string>                  // Includes the string library
#include<vector>                 // Includes the vector library
using namespace std;            // Allows us to use standard library names without std::

class SoilSensor{              // Defines a class named SoilSensor
    private:                     // Starts the private section of the class
    string sensorID;            // Stores the unique ID of the sensor
    double moisturelevel;       // Stores the moisture level detected by the sensor
    string timestamp;           // Stores the time of the sensor reading

    public:                         // Starts the public section of the class
    SoilSensor(string ID,double  moisture,string time)
     :sensorID(ID),moisturelevel(moisture),timestamp(time){} // Constructor initializes the sensor data

    void readSensor(double newMoisture,string newTime){      // Function to update sensor readings
        moisturelevel=newMoisture;                           // Updates the moisture level
        timestamp=newTime;                                   // Updates the timestamp
    }
   void displayData() const{                                 // Function to display sensor data
    cout<<"Sensor:"<<sensorID<<"|Moisture:"<<moisturelevel<<"%"<<"|Time:"<<timestamp<<endl; // Displays sensor ID, moisture and time
   }
};

int main(){                                                  // Main function where program execution starts
    vector<SoilSensor>farmSensor;                            // Creates a vector to store SoilSensor objects
    farmSensor.emplace_back("S001",45.2,"08:00");            // Adds the first sensor with its ID, moisture and time
    farmSensor.emplace_back("S002",52.8,"08:00");            // Adds the second sensor with its ID, moisture and time
    farmSensor.emplace_back("S003",38.5,"08:00");            // Adds the third sensor with its ID, moisture and time

    cout<<"== Morning Sensor Readings=="<<endl;              // Prints the heading for morning readings
    for (const auto& sensor: farmSensor){                     // Loops through each sensor in the vector
        sensor.displayData();                                // Displays the data of the current sensor
    }

    farmSensor[0].readSensor(47.5,"09:00");                  // Updates the first sensor's moisture and time
    cout<<"\n=== Updated Readings==="<<endl;                  // Prints the heading for updated readings
    farmSensor[0].displayData();                             // Displays the updated data of the first sensor
}

