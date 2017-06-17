#include<iostream>

using namespace std;

//with pointer
//class Singleton {
    
    //public:
    //static Singleton* Instance(){
        
        //static Singleton instance;
        //cout << "returning instance with address " << &instance << endl;
        //return &instance;
    //}
    
    //protected:
    //Singleton(){cout << "constructor called" << endl;}
    
//};


// with reference
class Singleton {
    
    public:
    static Singleton& Instance(){
        
        static Singleton instance;
        cout << "returning instance with address " << &instance << endl;
        return instance;
    }
    
    protected:
    Singleton(){cout << "constructor called" << endl;}
    
};


int main(int argc, char** argv){
    
    Singleton s1 = Singleton::Instance(); 
    
    Singleton s2 = Singleton::Instance();
    
    //Singleton s3; as expected produces error
    
    return 0;
}
