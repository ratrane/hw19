// HW_19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Animal
{

public:

        virtual void voice()
        {
            cout << "String with text";
        };

};

class dog : public Animal 
{

public:

    void voice() override
    {
        cout << "Woof"<< endl;
    }

};

class cat : public Animal
{

public:

    void voice() override
    {
        cout << "Meow"<< endl;
    }

};

class me : public Animal
{

public:

    void voice() override
    {
        cout << "Where is my beer?"<< endl;
    }

};


int main()
{
    Animal* v1 = new dog();
    Animal* v2 = new cat();
    Animal* v3 = new me();

    int i = 0;

    for (int i = 0; i < 6; i++)
    {
        v1->voice();
        v2->voice();
        v3->voice();
    }

}

