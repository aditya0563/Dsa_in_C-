#include <iostream>
using namespace std;

int choose(int a,int b);
int sum(int a,int b);
int diff(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
int modulo(int a,int b);

int main(){
    int a,b;
    cout<<"give first number input: ";
    cin >> a;
    cout<<"give second number input: ";
    cin >> b;
    choose(a,b);
}
int choose(int a, int b){
    int chosen;
    cout<<"choose the number: ";
    cin >> chosen;
    switch (chosen)
    {
    case 1:
        cout<<"sum is "<<sum(a,b)<<endl;
        break;
    case 2:
        cout<<"diff is "<<diff(a,b)<<endl;
        break;
    case 3:
        cout<<"multiply is "<<multiply(a,b)<<endl;
        break;
    case 4:
        cout<<"divide is "<<divide(a,b)<<endl;
        break;
    case 5:
        cout<<"modulo is "<<modulo(a,b)<<endl;
        break;
    default:
        break;
    }
}
int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
int modulo(int a,int b){
    return a%b;
}