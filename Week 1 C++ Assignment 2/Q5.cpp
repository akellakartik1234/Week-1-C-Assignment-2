#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    cout<<"Enter first character: ";
    cin>>ch1;
    cout<<"Enter second character: ";
    cin>>ch2;
    int difference=((int)ch1-(int)ch2);
    if(difference<0) difference=(-1*difference);
    cout<<"The ASCII value of '"<<ch1<<"' is: "<<(int)ch1<<endl;
    cout<<"The ASCII value of '"<<ch2<<"' is: "<<(int)ch2<<endl;
    cout<<"Their difference is: "<<difference;

}