#include <iostream>
using namespace std;

//Given radius of a circle. A function to print the area and circumference of the circle.

float Area(float r){
    float ar=(22*r*r)/7;
    return ar;
}
float Circumference(float r){
    float cf=(2*22*r)/7;
    return cf;
}
int main(){
    float a, area, cirf;
    cout<<"enter the radius:-";
    cin>>a;
    area= Area(a);
    cirf= Circumference(a);
    cout<<"area:-"<<area<<endl;
    cout<<"cirf:-"<<cirf<<endl;
    return 0;
}