#include<iostream>

using namespace std;


template<class T , class C>
void print(T x, C x2){cout << x << x2 << endl;}

int main(){
    
    int i = 5;
    float f = 3.;
    
    print(i,i);
    print(f,i);
}
