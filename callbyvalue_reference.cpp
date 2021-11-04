#include<bits/stdc++.h>
using namespace std;

void func(int a){//7 //call by value
    cout<<"in fun";
    a=6;//6
    cout<<a;//6
}

int main(){
    int a=7;//7
    func(a);
    cout<<"out func in main";
    cout<<a;//7
}