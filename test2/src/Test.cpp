#include "include/rect.h"
#include "include/circle.h"


int main(){
    cout<< "this is the test";
    cout << "Please enter the length";
    rect rect1;
    circ circ1;
    cin >> rect1.length;
    cout <<"\n";
    cout << "Please enter the width";
    cin >> rect1.width;
    cout <<"\n";
    cout << "the area is quall to: " << rect1.area(rect1.length,rect1.width) << endl;


}