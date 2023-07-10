#include <iostream>
#include <string>
using namespace std;
// Base class
class Movie
{
protected:
    string Rating;
    int ID_No;
    string Title;

public:
    // default constructor
    Movie(){};
    // Constructor
    Movie(string rating, int id_no, string title)
        : Rating(rating), ID_No(id_no), Title(title) {}

    // Setter Methods for rating
    void setRating(string rating)
    {
        Rating = rating;
    }
    // getter method for rating
    string getRating()
    {
        return Rating;
    }
    // setter method for id
    void setID(int id_no)
    {
        ID_No = id_no;
    }
    // getter method for id
    int getID()
    {
        return ID_No;
    }
    // setter method for title
    void setTitle(string title)
    {
        Title = title;
    }
    // getter method for title
    string getTitle()
    {
        return Title;
    }

    // Equals method  by operator overloading
    bool operator==(const Movie &obj) const
    {
        return this->ID_No == obj.ID_No;
    }

    // Late fee calculation method
    virtual float calcLateFees(int days_late)
    {
        return 2 * days_late;
    }
};
// Action class chaild of Movie
class Action : public Movie
{
public:
    // Late fee calculation method for Action movies
    float calcLateFees(int days_late)
    {
        return 3 * days_late;
    }
};
// Comedy class child of Movie
class Comedy : public Movie
{
public:
    // Late fee calculation method for Comedy movies
    float calcLateFees(int days_late)
    {
        return 2.5 * days_late;
    }
};
// Drama class child of Movie
class Drama : public Movie
{
public:
    // Late fee calculation method for Drama movies
    float calcLateFees(int days_late)
    {
        return 2 * days_late;
    }
};

// Test the classes
int main()
{
    // Create Movie objects
    Movie Movie1, Movie2, Movie3;
    // declaring variables for Movie 1
    string movie1_rating;
    int movie1_id;
    string movie1_title;
    // declaring variables for Movie 2
    string movie2_rating;
    int movie2_id;
    string movie2_title;
    // declaring  variables for Movie 3
    string movie3_rating;
    int movie3_id;
    string movie3_title;

    cout << "\n\n-----Enter Movie 1 Details-----";
    cout << "\n\n\tEnter Title : ";
    getline(cin, movie1_title);
    Movie1.setTitle(movie1_title);
    cout << "\n\tEnter ID NO : ";
    cin >> movie1_id;
    Movie1.setID(movie1_id);
    cin.ignore();
    cout << "\n\tRating : ";
    getline(cin, movie1_rating);
    Movie1.setRating(movie1_rating);
    cout << "\n\n-----Enter Movie 2 Details--------";
    cout << "\n\n\tEnter Title : ";
    getline(cin, movie2_title);
    Movie2.setTitle(movie2_title);
    cout << "\n\tEnter ID NO : ";
    cin >> movie2_id;
    Movie2.setID(movie2_id);
    cout << "\n\tRating : ";
    cin.ignore();
    getline(cin, movie2_rating);
    Movie2.setRating(movie2_rating);
    cout << "\n\n------Enter Movie 3 Details---------";
    cout << "\n\n\tEnter Title : ";
    getline(cin, movie3_title);
    Movie3.setTitle(movie3_title);
    cout << "\n\tEnter ID NO : ";
    cin >> movie3_id;
    Movie3.setID(movie3_id);
    cout << "\n\tRating : ";
    cin.ignore();
    getline(cin, movie3_rating);
    Movie3.setRating(movie3_rating);
    cout << "\n\n------Details for Movie 1 -------";
    cout << "\n\tTitle  :  " << Movie1.getTitle();
    cout << "\n\tRating :  " << Movie1.getRating();
    cout << "\n\tID No  :  " << Movie1.getID();
    // Testing equals method
    cout << "\n\tIs Movie 1 equal to Movie 2 ? " << (Movie1 == Movie2 ? "Yes" : "No");
    cout << "\n\tIs Movie 1 equal to Movie 3 ? " << (Movie1 == Movie3 ? "Yes" : "No");
    // Test late fee calculation method
    cout << "\n\tLate fee : " << Movie1.calcLateFees(3);
    cout << "\n\n-------Details for Movie 2 --------";
    cout << "\n\n\tTitle  :  " << Movie2.getTitle();
    cout << "\n\tRating :  " << Movie2.getRating();
    cout << "\n\tID No  :  " << Movie2.getID();
    // Testing equals method

    cout << "\n\tIs Movie 2 equal to Movie 1? " << (Movie2 == Movie1 ? "Yes" : "No");
    cout << "\n\tIs Movie 3 equal to Movie 3? " << (Movie2 == Movie3 ? "Yes" : "No");
    // Test late fee calculation method
    cout << "\n\tLate fee " << Movie1.calcLateFees(2.50);

    cout << "\n\n-------Details for Movie 3 ------------";
    cout << "\n\n\tTitle  :  " << Movie3.getTitle();
    cout << "\n\tRating   :  " << Movie3.getRating();
    cout << "\n\tID No    :  " << Movie3.getID();
    // Testing equals method
    cout << "\n\tIs Movie 3 equal to Movie 1? " << (Movie3 == Movie1 ? "Yes" : "No");
    cout << "\n\tIs Movie 3 equal to Movie 2? " << (Movie3 == Movie2 ? "Yes" : "No");
    // Test late fee calculation method
    cout << "\n\tLate fee for Movie 3" << Movie1.calcLateFees(2);
}