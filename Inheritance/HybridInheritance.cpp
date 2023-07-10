#include <iostream>
using namespace std;

// Animal Class -> Base class
class Animal
{
protected:
    string Specie;
    int Age;

public:
    // setting specie
    void setSpecie(string specie)
    {
        Specie = specie;
    }
    // setting age
    void setAge(int age)
    {
        Age = age;
    }
    // getting Specie
    string getSpecie()
    {
        return Specie;
    }
    // getting Age
    int getAge()
    {
        return Age;
    }
};

// Dog Class -> Child class of Animal

class Dog : public Animal
{
protected:
    string Breed;

public:
    // setting Breed
    void setBreed(string breed)
    {
        Breed = breed;
    }
    // getting Breed
    string getBreed()
    {
        return Breed;
    }
};

// Cat class -> Child Class of Animal
class Cat : public Animal
{
protected:
    string Color;

public:
    // setting color
    void setColor(string color)
    {
        Color = color;
    }

    // getting Color
    string getColor()
    {
        return Color;
    }
};

// Pet Class -> Child class of Dog and Cat
class Pet : public Dog, public Cat
{
    string Name;

public:
    // setting name
    void setName(string name)
    {
        Name = name;
    }
    // getting Name
    string getName()
    {
        return Name;
    }
    // Pet constructor
    Pet(string specie, string breed, string color, int age)
    {

        Dog::Breed = breed;
        Dog::Specie = specie;
        Cat::Color = color;
        Cat::Specie = specie;
        Cat::Age = age;
        Dog::Age = age;
    }
};

int main()
{
    // Declaring Dog's object
    Dog dog;
    string dog_breed, dog_color, dog_specie;
    float dog_age;
    cout << "\n\n====Enter Details for Dog=====";
    cout << "\n\n\tEnter Breed : ";
    cin >> dog_breed;
    // setting dog breed
    dog.setBreed(dog_breed);
    //    // declaring cat's object
    Cat cat;
    string cat_breed, cat_color, cat_specie;
    float cat_age;
    cout << "\n\n======Enter Details of Cat=======";
    cout << "\n\n\tEnter Color : ";
    cin >> cat_color;
    // setting cat color
    cat.setColor(cat_color);
    // ============================
    string name, specie;
    int age;
    cout << "\n\n==== Enter Details of Any of Pet ==== ";
    cout << "\n\n\tEnter Name : ";
    cin.ignore();
    getline(cin, name);
    cout << "\n\n\tEnter Specie : ";
    cin >> specie;
    cout << "\n\n\tEnter Age : ";
    cin >> age;
    // consturctor of puppi
    Pet pet(specie, cat_color, dog_breed, age);
    // setting name
    pet.setName(name);
    cout << "\n\n=====Your New pet is  =======";
    cout << "\n\n\tName is : " << pet.getName();
    cout << "\n\n\tBreed is : " << pet.Cat::getColor();
    cout << "\n\n\tSpecie is : " << pet.Cat::getSpecie();
    cout << "\n\n\tAge is : " << pet.Dog::getAge();
    cout << "\n\n\tColor is : " << pet.Dog::getBreed();
}