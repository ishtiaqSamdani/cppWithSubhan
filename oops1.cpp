// class
// objects
// data members
// member functions

// encapsulation
// security
// public,private,protected


// inheritance



// polymorphism//function overloading

//carbon 
// graphite

// c4

// c02

//str(nme) int(mrk)

#include<bits/stdc++.h>
using namespace std;

class A{
    int power;
    public:
    //constructor
    //constructor overloading
    A(){//at the time of object
       cout<<"defult constructor"<<endl;
    }
    A(int n){//at the time of object
       cout<<"parametrized const"<<endl;
    }

    A(A &obj){//at the time of object
       cout<<"copy const"<<endl;
    }

    void show(){
        cout<<"power "<<power;
    }
    
};
int main(){

    A obj1,obj2(50),obj3(obj1);

}
