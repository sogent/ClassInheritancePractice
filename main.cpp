#include <iostream>
#include <vector>
#include "GenericInventoryItem.h"

using namespace std;

int main() {
    //how to declare an object pointer?
    GenericInventoryItem* ItemPtr1= new GenericInventoryItem;

    //manually initializing a pointer
    //which I then make point to a class object
    ProduceInventoryItem* ProducePtr1=nullptr;

    //allocating memory for the given type and then
    //returning a pointer to the allocated memory
    //if the type is a class, the new operator calls the class's constructor
    //after allocating memory for the class's member variables
    auto *ClothingPtr1= new ClothingInventoryItem;

    //initializing a vector of GenericInventoryItem object pointers
    vector<GenericInventoryItem*> allPtrItems;
    allPtrItems.push_back(ItemPtr1);
    allPtrItems.push_back(ClothingPtr1);

    vector<GenericInventoryItem> allItems;

    ItemPtr1->SetName("Digital TV");
    ItemPtr1->SetQuantity(5);
    ItemPtr1->PrintItemAll();
    cout<<"\n\n";
    //delete ItemPtr;
    ItemPtr1->PrintItemAll();
    cout<<"\n\n";



    ClothingPtr1->SetName("Skirt");
    ClothingPtr1->SetQuantity(14);
    ClothingPtr1->SetBrand("GAP");


    ClothingPtr1->PrintItemAll();
    cout<<"\n\n";

    //example of how if the pointer is pointing to a class type of allocated memory via new,
    //if the data members of the class are yet to be initialized, the class's constructor is then called
    ClothingInventoryItem *ClothingPtr2=new ClothingInventoryItem;
    //should provide constructor values
    ClothingPtr2->PrintItemAll();
    cout<<"\n\n";


    ClothingPtr2->SetName("sweater");
    ClothingPtr2->SetQuantity(4);
    ClothingPtr2->SetBrand("Forever 21");
    ClothingPtr2->PrintItemAll();
    cout<<"\n\n";
    //delete ClothingPtr2;
    cout<<endl;
    //why is this still producing output
    //i think because the pointer itself it is still pointing to something, the memory is just blank?
    ClothingPtr2->PrintItemAll();
    cout<<"\n\n";


    ProduceInventoryItem Produce1;

    ClothingInventoryItem Clothing1;
    ClothingInventoryItem Clothing2;


    //Making the pointer variable ProducePtr of type ProduceInventoryItem point
    //to Produce1
    ProducePtr1= &Produce1;


    Clothing1.SetName("T-shirt");
    Clothing1.SetQuantity(15);
    Clothing1.SetBrand("Tommy Hilfigure");

    Clothing2.SetName("Jeans");
    Clothing2.SetQuantity(12);
    Clothing2.SetBrand("Levi");

    Produce1.SetName("Apple");
    Produce1.SetQuantity(10);
    Produce1.SetExpiration("01/12/2022");
    Produce1.SetColor("Granny Smith Green");

    cout<<"Produce1 variable output: "<<endl;
    Produce1.PrintItemAll();
    cout<<endl;
    cout<<endl;
    cout<<"Produce1 pointer output: "<<endl;
    ProducePtr1->PrintItemAll();
    cout<<endl;
    cout<<endl;

    ProducePtr1->PrintItemAll();
    cout<<endl;
    cout<<endl;

    Clothing1.PrintItemAll();
    cout<<endl;
    cout<<endl;


    //GetOutPut is NOT overridden, but is a base class function
    Clothing2.GetOutput();
    cout<<endl;
    cout<<endl;

    //PrintItemAll IS an overridden function from the base class
    //this means it outputs what the original function outputs
    //plus the output that is defined to be printed in the overridden
    //function, located in the derived class function definitions/declarations
    Clothing2.PrintItemAll();
    cout<<endl;
    Clothing2.SetColor("Acid washed");
    Clothing2.PrintColor();
    cout<<"\n\n";



    return 0;
}
