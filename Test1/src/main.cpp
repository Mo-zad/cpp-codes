#include "include/list.h"

int main(){
    list mo_class;
    cout << "select a choice" << endl 
         << "1: calculate area:" << endl 
         << "2: calculate premiameter" 
            << endl;
    int your_choice {0};
    float width {0};
    float lenght {0};
    float area {0};
    float perimeter {0};

    cin >> your_choice;
    cout << "type the width" << endl;
    cin >> width;
    cout << "type the length" << endl;
    cin >> lenght;
    if (your_choice==1) {
        area=mo_class.calc_area(width,lenght);
        cout << "area is equal to" << area << endl;

    } else if (your_choice==2){
         perimeter=mo_class.calc_perimeter(width,lenght);
         cout <<" perimeter is equal to :  " << perimeter << endl;
    } else {
        cout << "your choice is wrong" << endl;


    }

    return 0;
}

