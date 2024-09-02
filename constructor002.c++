
// // /*
// // Create a class called Utils that has the following methods
// //   1. method named sum that has two paramenter for integer total
// //   2. method named square that has one paramenter for powering number
// //   3. method named khCurrencyExchange that has one paramenter for exchange cash from riel to dollar 
// //  */
// // //Create object of this class and called above methods

#include <iostream>
#include<string>
using namespace std;
class Utils {
  public:
    int sum(int a, int b) {
        return a + b;
    }
    int square(int a) {
        return a * a;
    }
    double khCurrencyExchange(double a) {
        return a /4000;
    }
    int mul(int a, int b,int c){
        return a * b * c;
    }
};

int main() {
    system("cls");
    Utils util;
    cout << "Sum: " << util.sum(90, -100) <<endl;           
    cout << "Square: " << util.square(2) <<endl;             
    cout << "cash in dollar: "<<util.khCurrencyExchange(10200)<<endl; 
    cout<<"mul: "<<util.mul(4,5,2)<<endl;
    return 0;
}


/*
Create a class called Pet that has the following data members
  1. the properties(id, name, color, type)
  2. two constructor with paramenters and withno paramenters 
  3. one method called getPetDerail() for printing pet details
*/
// Create onject of this class and called above methods - getPetDetail()

#include<iostream>
#include<string>

using namespace std;

class Pet {
private:
    int id;
    string name;
    string color;
    string type;
public:
    Pet(int id, string name, string color, string type){
        this->id=id;
        this->name=name;
        this->color=color;
        this->type=type;
    }
    Pet(){};

    void getPetDetail() const {
       cout << "Pet Details:" <<endl;
       cout << "ID: " << id << endl;
       cout << "Name: " << name <<endl;
       cout << "Color: " << color <<endl;
       cout << "Type: " << type <<endl;
    }
};

int main() {
    Pet pet(1,"coca","white","Dog");
    pet.getPetDetail();

    return 0;
}