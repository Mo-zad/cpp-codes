
#include "include/list.h"

float list::calc_area(float width, float length){
    float area {0};
    area=width*length;
    return area;
}
float list::calc_perimeter(float width, float length){
    float perimeter {0};
    perimeter=2*(width+length);
    return perimeter;
}