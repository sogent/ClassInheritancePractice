//
// Created by Sarah Ogent on 10/31/21.
//
#include <iostream>
using namespace std;
//RECALL: this is the .h file, so only the function DECLARATIONS go here

#ifndef CLASSINHERITANCEPRACTICE_GENERICINVENTORYITEM_H
#define CLASSINHERITANCEPRACTICE_GENERICINVENTORYITEM_H

//base class
class GenericInventoryItem{
public:
    //constructor
    GenericInventoryItem();
    //destructor
    ~GenericInventoryItem();
    //copy constructor
    GenericInventoryItem(const GenericInventoryItem& origObject);
    void SetName(string newName);
    void SetQuantity(int newQty);
    void SetColor(string newColor);

    string GetName();
    int GetQuantity();

    virtual void PrintItemAll();
    void GetOutput();

//while these are private, the ability to modify these
//data members is public
private:
    string itemName;
    int itemQuantity;

    //this is protected, which simply means that I can access the data member from
    //derived classes
    //I inherit all members (function and data) from a base class
    //getting access to them is a different story. For example, if I tried to
    //write a function in ProduceInventoryItem that had the itemName and itemQuantity
    //private members directly involved, it would throw an error

    //However, if I
protected:
    string itemColor;
};



//derived class, inherits from GenericInventoryItem
class ProduceInventoryItem: public GenericInventoryItem{
public:
    //constructor
    ProduceInventoryItem();
    //destructor
    ~ProduceInventoryItem();
    void SetExpiration(string newDate);
    string GetExpiration();

    void PrintItemAll() override;

private:
    string expirationDate;
};


//derived class, inherits from GenericInventoryItem
//why, when defining a new derived class do we put
//the derived class' name then "public BaseClassName"?
//because the derived class' objects have access to
//not only all of its own public members, but also
//the public members of the base class
class ClothingInventoryItem: public GenericInventoryItem{
public:
    //constructor
    ClothingInventoryItem();
    //destructor
    ~ClothingInventoryItem();
    void SetBrand(string newBrand);
    string GetBrand();
    void PrintColor();
    void PrintItemAll() override;


private:
    string brandName;

};





#endif //CLASSINHERITANCEPRACTICE_GENERICINVENTORYITEM_H
