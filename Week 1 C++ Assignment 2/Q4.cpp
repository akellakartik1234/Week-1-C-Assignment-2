#include<iostream>
using namespace std;
int main(){
    float radius,height,pi=(float(22)/float(7));
    cout<<"Enter Radius of the cylinder: ";
    cin>>radius;
    cout<<"Enter Height of the cylinder: ";
    cin>>height;
    float volume=(pi*radius*radius*height);
    cout<<"The Volume of the cylinder is: "<<volume;
    return 0;
}