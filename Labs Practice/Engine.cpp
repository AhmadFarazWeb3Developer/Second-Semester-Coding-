#include <iostream>
using namespace std;

// Sensor class
class Sensor
{
private:
    // date members
    string Temperature;
    string Pressure;
    string Oxygen;

public:
    // Sesor constructor
    Sensor(string temprature = "Normal", string pressure = "Normal")
    {
        Temperature = temprature;
        Pressure = pressure;
    }
    // Setter method for Temprature
    void set_Temp()
    {
        cout << "\n->\t";
        cout << "Temprature      :  ";
        getline(cin, Temperature);
    }
    // Getter Mehtod for Temprature
    string get_Temp()
    {
        return Temperature;
    }

    // Setter Method Pressure
    void set_Pressure()
    {
        cout << "\n->\t";
        cout << "Pressure        :  ";
        getline(cin, Pressure);
    }
    // Getter Method for Pressure
    string get_Pressure()
    {
        return Pressure;
    }

    // Setter Method for Oxygen
    void set_Oxygen()
    {
        cout << "\n->\t";
        cout << "Oxygen          :  ";
        getline(cin, Oxygen);
    }
    // Getter Method for Oxygen
    string get_Oxygen()
    {
        return Oxygen;
    }
};

// ++++++++++++++++++++++++++++++++++++++++++++++++++

// Engine CLass
class Engine
{
private:
    // Data members
    string Engin_Type;

    // Object of Sensor class
    Sensor sensor;

public:
    // Constructor of Engine class
    Engine(string engin_type = "No Type")
    {
        Engin_Type = engin_type;
    }
    // Setter Method for Engine type
    void set_Eng_Type()
    {
        cout << "\n->\t";
        cout << "Type            :  ";
        getline(cin, Engin_Type);
    }
    // Getter Method for Engine type
    string get_Engine_Type()
    {
        return Engin_Type;
    }
};

// ++++++++++++++++++++++++++++++++++++++++++++

// Processor class
class Processor
{
private:
    // data member
    string Detected_Issue;

public:
    // constructor for Processor
    Processor(string issue = "")
    {
        Detected_Issue = issue;
    }
    // Setter Method for detecting processor issue
    void set_processor_detected_issue()
    {
        cout << "\n->\t";
        cout << "Detected Issue  :  ";
        getline(cin, Detected_Issue);
    }
    // Getter Method for printing processor issue
    string get_processor_detected_issue()
    {
        return Detected_Issue;
    }
};

// ++++++++++++++++++++++++++++++++++++++++++++++++++++

// UserInterface class
class UserInterface
{
private:
    // data members
    string Engine_Performance;
    string Issue_Alert;
    // Engine class object
    Engine engine;
    // Sensor class object
    Sensor sensor;
    // Processor class object
    Processor Processor;

public:
    // UserInterface Constructor
    UserInterface(string engine_Performance = "Normal", string issue_alert = "Normal")
    {
        Engine_Performance = engine_Performance;
        Issue_Alert = issue_alert;
    }
    // Setting Engine Performance
    void set_Engine_Performance()
    {

        cout << "\n->\t";
        cout << "Performance     :  ";
        getline(cin, Engine_Performance);
    }
    // Getting Engine Performance
    string get_Engine_Performance()
    {

        return Engine_Performance;
    }
    // Setting Issue Alert
    void set_Issue_Alert()
    {
        cout << "\n->\t";
        cout << "Any Issue ?    :  ";
        getline(cin, Issue_Alert);
    }
    // Getting Issue Alert
    string get_Issue_Alert()
    {
        return Issue_Alert;
    }
    // Getting Engine type by his object and getter Method
    void Engine_Type()
    {
        engine.get_Engine_Type();
    }
    // DGetting processor issue by his object and Getter Method
    void Processor_Issue()
    {
        Processor.get_processor_detected_issue();
    }
    // Getting Sensor temprature by his object and Getter Method
    void Temprature()
    {
        cout << "\n\n.\t";
        sensor.get_Temp();
    }

    // Getting Sensor pressure by his object and Getter Method
    void Pressure()
    {
        cout << "\n\n.\t";
        cout << "Pressure is    : " << sensor.get_Pressure();
    }
    // Getting Oxygen Level by his object and Getter Method
    void Oxygen()
    {
        cout << "\n\n.\t";
        cout << "Oxygen is      : " << sensor.get_Oxygen();
    }
    // Setting All Method valus through UserInterface and respective objects of class
    // because UserInteface is the only source used for setting the values
    void set_All_UI_Details()
    {

        cout << "\n\n-------- Enter Engine Details -----------" << endl;
        engine.set_Eng_Type();
        set_Engine_Performance();
        sensor.set_Temp();
        sensor.set_Pressure();
        sensor.set_Oxygen();
        set_Issue_Alert();
        Processor.set_processor_detected_issue();
    }
    // Getting All Method return values by UserInterface
    //  because Userinterface is the only source to see the results
    void get_ALL_UI_Details()
    {

        cout << "\n\n-------- Get Engine Detils ---------" << endl;
        cout << "\n.\t";
        get_Engine_Performance();
        cout << "Type is        : " << engine.get_Engine_Type();
        cout << "\n\n.\t";
        cout << "Performance is : " << get_Engine_Performance();
        cout << "\n\n.\t";
        cout << "Issue Alert is : " << get_Issue_Alert();
        cout << "\n\n.\t";
        cout << "Issue is       : " << Processor.get_processor_detected_issue();
        cout << "\n\n.\t";
        cout << "Temprature is  : " << sensor.get_Temp();
        cout << "\n\n.\t";
        cout << "Pressure is    : " << sensor.get_Pressure();
        cout << "\n\n.\t";
        cout << "Oxygen is      : " << sensor.get_Oxygen();
    }
};

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main()
{
    // object of UserInterface class
    UserInterface UI;
    char ch;
    int num;
    // setting all details through userInterface class object
    UI.set_All_UI_Details();
    cout << "\n\nDo you want to check all details ? Y/N : ";
    cin >> ch;

    ch = toupper(ch);

    // condition: To display all details
    if (ch == 'Y')
    {

        UI.get_ALL_UI_Details();
    }

    // condition: To display desired one output
    else
    {
        cout << "n\\nSelect the desired detail from it ";
        cout << "\n\n->\t";
        cout << "1. Engine Type : ";
        cout << "\n\n->\t";
        cout << "2. Engine Performance : ";
        cout << "\n\n->\t";
        cout << "3. Engine Temprature : ";
        cout << "\n\n->\t";
        cout << "4. Engine Pressure : ";
        cout << "\n\n->\t";
        cout << "5. Engine Oxygen: ";
        cout << "\n\n->\t";
        cout << "6. Engine Issue Alert: ";
        cout << "\n\n->\t";
        cout << "7. Engine Issue is  : ";
        cout << "\n\n->\t";
        cout << "Press desired number : ";
        cin >> num;
        if (num == 1)
        {
            UI.Engine_Type();
        }
        else if (num == 2)
        {
            UI.get_Engine_Performance();
        }
        else if (num == 3)
        {
            UI.Temprature();
        }
        else if (num == 4)
        {
            UI.Pressure();
        }
        else if (num == 5)
        {
            UI.Oxygen();
        }
        else if (num == 6)
        {
            UI.get_Issue_Alert();
        }
        else if (num == 7)
        {
            UI.Processor_Issue();
        }
    }
}
