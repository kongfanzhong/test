#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
class C {
  int someVal;
  int dependsOnSomeVal;
  
public:
  C(int val) : dependsOnSomeVal(someVal + 1), someVal(val) {cout << "goo2d" << endl;} 
};

int main(){
    {   
        C(1);
        int a = 0;
        cout << a << endl;
        {
            float a = 1.1;
            cout << a << endl;
        }
        cout << a << endl;
    }

    return 0;
}