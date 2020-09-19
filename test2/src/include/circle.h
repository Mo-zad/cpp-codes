#include <iostream>
using namespace std;

class circ {
    public:
    int radius;

    float area(int radius);
    circ(){
        radius=10;
    }
    ~circ(){
        cout << "circ class destructed";
    }
};

