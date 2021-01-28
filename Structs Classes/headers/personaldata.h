#ifndef PERSONAL_DATA_INCLUDED_H
#define PERSONAL_DATA_INCLUDED_H
// Classes
class PersonalData
{
    // allows inheriting classes to access protected attributes.
protected:
    double weight;

public:
    PersonalData();  // construtor
    ~PersonalData(); //destructor
    void setAge(int value);
    short getAge(); // Add a trailing const keyword to allow the usage of this method when the instance is constant.
    int getID() const { return ID; };
    static int getCounter() { return counter; }; // static methods can be called using the class without an instance.
    friend void incrementAge();                  // the friend keyword says that this method can be defined outside the class and still access private attributes.
    friend class A;                              // You can also define a friend class which can access private attributes of this class.
    virtual void inheritedFunc(); // Virtual means check if the variable is using polymorphism (Base b = new Subclass;) sub-class has overriding their own version of this method before calling this one.
    PersonalData operator+(PersonalData pd); // Operator overloading for the +

private:
    short age;
    int ID;
    static int counter; //shared between all instances of class
};

// Inheritance

class Second : public PersonalData
{
    char name[12];

public:
    char surname[12];
    double getWeight() { return this->weight; };
};
#endif