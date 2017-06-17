#include <iostream>

using namespace std;

class Test
{
private:
    static int count;
    int nonStatCount;

public:
    static int GetTestCount()
    {   
        
        return count;
    };

    Test():nonStatCount(100)
    {
        cout << this << "Created an instance of Test" << endl;
        count++;
        cout << nonStatCount << endl;
    }

    ~Test()
    {
        cout << this << "Destroyed an instance of Test" << endl;
        count--;
    }
};
    
int Test::count = 0;

int main(){
    
   Test i1;
   cout << &i1 << endl;
   cout << i1.GetTestCount() << endl;
   Test i2;
   cout << i1.GetTestCount() << endl;
   
   Test* i3 = new Test();
   delete i3;
    
    
    
    return 0;
    }
