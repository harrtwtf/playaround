#include <iostream>

using namespace std;

int* doNothing() {
    static int i = 9;
    i++;
    cout << i << endl;
    int* pi = &i;
    return pi;
    
    }
    
    
int main(){
    
    int j = 10;
    int* p = doNothing();
    doNothing();
    
    *p = 99;
    doNothing();
    
    int i = 4;
    
    
    // test
    // test2
    
    return 0;
    }
