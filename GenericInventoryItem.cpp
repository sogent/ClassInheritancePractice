//
// Created by Sarah Ogent on 10/31/21.
//

#include "GenericInventoryItem.h"
#include <iostream>
using namespace std;
//RECALL: this is the .cpp file, so the class FUNCTION DEFINITIONS go here

//base class function definitions
void GenericInventoryItem::SetName(string newName){
    itemName=newName;
}
void GenericInventoryItem::SetQuantity(int newQty) {
    itemQuantity = newQty;
}
void GenericInventoryItem::SetColor(string newColor) {
    itemColor=newColor;
}

string GenericInventoryItem::GetName() {
    return itemName;
}
int GenericInventoryItem::GetQuantity() {
    return itemQuantity;
}

void GenericInventoryItem::PrintItemAll(){
    cout<<"Item: "<<itemName<<endl;
    cout<<"Quantity: "<<itemQuantity<<endl;
    //cout<<"Color: "<<itemColor<<endl;
}
void GenericInventoryItem::GetOutput() {
    cout<<itemName<<endl;
    cout<<itemQuantity<<endl;
}
//constructor
GenericInventoryItem::GenericInventoryItem() {
   itemName="";
   itemQuantity=0;
   itemColor="";
}
//destructor
GenericInventoryItem::~GenericInventoryItem(){
        cout<<"Destroying GenericInventoryItem"<<endl;
}

//copy constructor
GenericInventoryItem::GenericInventoryItem(const GenericInventoryItem& origObject){
    cout<<"Copy constructor is called"<<endl;
    itemName=origObject.itemName;
    itemQuantity=origObject.itemQuantity;
    itemColor=origObject.itemColor;
}




//derived class 1 function definitions

//constructor
ProduceInventoryItem::ProduceInventoryItem(){
    expirationDate="";
}

//destructor
ProduceInventoryItem::~ProduceInventoryItem(){
    cout<<"Destroying ProduceInventoryItem"<<endl;
}

void ProduceInventoryItem::SetExpiration(string newDate){
    expirationDate=newDate;

}
string ProduceInventoryItem::GetExpiration() {
    return expirationDate;
}

//Also, in order to modify a function from a base class
//(in this case, the base class function PrintItem involves
//members from the base class (under private)), you need to
//OVERRIDE the function in the derived class
//you do this by including the declaration in the derived class
//member functions (dataType functionName(parameters) override)
//then the key in defining the function is defining it like normal in
//the .cpp file, but then also including baseClassName::functionName(parameters);
//in the braces of the derived function which is overriding the respective
//base class function
void ProduceInventoryItem::PrintItemAll() {
    GenericInventoryItem::PrintItemAll();
    cout<<"Expiration: ";
    cout<<expirationDate;
}




//derived class 2 function definitions
//constructor
ClothingInventoryItem::ClothingInventoryItem() {
    brandName="";
}
//destructor
ClothingInventoryItem::~ClothingInventoryItem(){
    cout<<"Destroying ClothingInventoryItem"<<endl;
}
void ClothingInventoryItem::SetBrand(string newBrand) {
    brandName=newBrand;

}
string ClothingInventoryItem::GetBrand() {
    return brandName;
}

void ClothingInventoryItem::PrintItemAll() {
    GenericInventoryItem::PrintItemAll();
    cout<<"Brand: ";
    cout<<brandName;
}
void ClothingInventoryItem::PrintColor() {
    cout<<"Color: "<<itemColor;

    //cout<<itemName;
    //line 88 is illegal because
    //itemName is a private class member under the base class
}