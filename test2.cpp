#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;


void funcOne(int n)
{
    n = 240;
}
void funcTwo(int *n)
{
    *n = 120;

}
int main()
{
    
    int i = 10;
    int i2 = 20;
    
    int*    p = &i;
    int*   pi2 = &i2;
    //int** pp  = &p;
    //int*** ppp = &pp;
    
    //int arr[] = {1,2,3};
    
    
    int *&p2 = p;  //  p2 is a reference to a pointer   to an int.
    
    
    const int *cp = &i;
    
    i = 11;
    
    *cp = 11;
    
    
    
    
    cout << *p << endl;
    
    return 0;
}

