#include <iostream>

using namespace std;

class Animal                    //create main class
{

private:
    string text;                //create string variable

public:

    
        virtual void Voice()    //method, which display text from child class
        {
            cout << text;       //outout string variable
        };

};

class Dog : public Animal    //create 1st child class   
{

public:

    void Voice() override   //using method from main class and fill it
    {
        string text = "Woof";   //set text for dog
        cout << text<< endl;    //and output it
    }

};

class Cat : public Animal   //create 2nd child class  
{

public:

    void Voice() override   //using method from main class and fill it
    {
        string text = "Meow";   //set text for cat
        cout << text<< endl;    //and output it
    }

};

class Me : public Animal    //create 3rd child class  
{

public:

    void Voice() override   //using method from main class and fill it
    {
        string text = "Where is my beer?!";     //set text for me :-)
        cout << text<< endl;                    //and output it
    }

};

int main()
{
    Animal* v1 = new Dog();  //creating pointer for method
    Animal* v2 = new Cat();  //creating pointer for method
    Animal* v3 = new Me();   //creating pointer for method

    
    Animal* array[] = {v1, v2, v3}; //filling array 

    for (Animal* i:array)   //calling elements of array
    {
        i->Voice();         //dereference elements
    };

}

