#include <iostream>
using namespace std;

class rect {
    public:
    int width;
    int length;
    int area(int width,int length);
    rect(){
        width=10;
        length=11;
    }
    ~rect(){
        cout << "Rect class destructed";
    }
};