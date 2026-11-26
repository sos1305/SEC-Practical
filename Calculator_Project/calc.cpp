#include<iostream>
using namespace std;

int add(int m, int n)
{
    return m+n;
}

int subtract(int m, int n){
    return m-n;
}

int divide(int m, int n){
    return m/n;
}

int multiply(int m, int n){
    return m*n;
}

add square(int m){
    return m*m;
}

int main(){
    cout<<"This is a calculator, press 1 for addition, press 2 for subtraction, press 3 for division, press 4 for multiplication, press 5 for square: ";
    int x;
    cin>>x;
    int a;
    cout<<"Enter num1: ";
    cin>>a;
    int b;
    cout<<"Enter num2: ";
    cin>>b;
    switch(x){
        case 1:
        return add(a,b);
        break;

        case 2:
        return subtract(a,b);
        break;

        case 3:
        return divide(a,b);
        break;

        case 4:
        return multiply(a,b);
        break;

        case 5:
        return square(a);
        break;
    }
    return 0;
}
