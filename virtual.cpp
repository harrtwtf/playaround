#include <iostream>

using std::cout;
using std::endl;

class ober {
    
    public:
    void tut() {cout << "ober" << endl;}
    
};

class unter: public ober {
    
    public:
    void tut() {cout << "unter" << endl;}
    int i;
};

void tute(ober* o){o->tut();}


int main() {
    
    ober o;
    o.tut();
    
    unter u;
    u.tut();
    
    tute(&u);
}
