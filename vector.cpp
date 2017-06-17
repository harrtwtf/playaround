#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int op_mult(int x){
    return 2 * x;
    } 


int main() {
    
    //vector<int> v1;
    //v1.push_back(1);
    //v1.push_back(2);
    //v1.push_back(3);
    
    //int* p = v1.data();
    
    //++p;
    //*p = 11;
    
    //for(vector<int>::iterator it=v1.begin(); it != v1.end(); ++it ){
        
        //cout << *it << " ";
    //}
    //cout << endl;
    
    
    list<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    //int* p = v1.data();
    
    //++p;
    //*p = 11;
    
    for(list<int>::iterator it=v1.begin(); it != v1.end(); ++it ){
        
        cout << *it << " ";
    }
    cout << endl;
    
    transform(v1.begin(),v1.end(),v1.begin(),op_mult);
    
    
     for(list<int>::iterator it=v1.begin(); it != v1.end(); ++it ){
        
        cout << *it << " ";
    }
    cout << endl;
    
    
    
    
    
    
    
}
