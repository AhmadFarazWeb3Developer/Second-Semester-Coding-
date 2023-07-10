#include <iostream>
using namespace std;

// Base Class
class Animal
{
    string Specie;
    int Age;

public:
    // Setter method for Specie
    void SetSpecie(string specie)
    {
        Specie = specie;
    }
    // Getter Method for Specie
    string GetSpecie()
    {
        return Specie;
    }

    // Setter method for Age
    void setAge(int age)
    {
        Age = age;
    }
    // Getter Method for Age
    int getAge()
    {
        return Age;
    }
};
// Inharited CLass of Animal for Dog
class Dog : public Animal
{
    string Breed;

public:
    // Setting Breed
    void setBreed(string breed)
    {
        Breed = breed;
    }
    // Getting Breed
    string getBreed()
    {
        return Breed;
    }
};
int main()
{
    Dog dog;
    string breed, specie;
    int age;
    cout << "\n\n------Enter Details of Animals-----";
    cout << "\n\tEnter Specie  :  ";
    cin >> specie;
    // setting Specie
    dog.SetSpecie(specie);

    cout << "\tEnter Breed  :  ";
    cin.ignore(); // clearing buffer
    getline(cin, breed);
    // setting breed
    dog.setBreed(breed);

    cout << "\tEnter Age  :  ";
    cin >> age;
    // setting Age
    dog.setAge(age);
    // Entered Details output
    cout << "\n\n------ Entered Details Are Here ----" << endl;
    cout << "\n\tSpecie is  :  " << dog.GetSpecie();
    cout << "\n\tBreed  is  :  " << dog.getBreed();
    cout << "\n\tAge    is  :  " << dog.getAge() << " ys";
}