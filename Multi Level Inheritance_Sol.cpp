#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
   public:
      void triangle(){
         cout<<"I am a triangle\n";
      }
};

class Isosceles : public Triangle{
     public:
        void isosceles(){
          cout<<"I am an isosceles triangle\n";
        }
};

/*
Now create a class called Equilateral which inherits from Isosceles and should have a function such that the output is as given below.
*/
class Equilateral : public Isosceles {
    public:
        void equilateral() {
            cout << "I am an equilateral triangle\n";
        }
};

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
