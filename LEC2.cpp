#include <iostream>
using namespace std;

int sum(int a,int b);
int main(){
    cout <<"hello"<<endl;
    cout <<"hello"<<"\n";
    cout <<"hello \nhi namaste"<<endl;
    cout <<"hello "<<"aditya"<<endl;
// this is a comment.
    int age = 20;
    cout<<age<<endl;
    cout<<sizeof(age)<<endl;
    char grade = 'A';
    float pi = 3.14f;// f\F is written to tell compiler it is float value.
    int value = grade; //implict conversion [small --> big ]
    cout<<value<<endl;
    int newpi = int(pi); // explict conversion [big --> small ] 
    cout<<newpi<<endl;
    int input;
    cout<<"give a number input: ";
    cin >> input;
    cout<<"entered number is "<<input<<endl;
    int a=1,b=2,c=3;
    cout<<"sum ="<<(a+b+c)<<endl;
    cout<<"diff ="<<(a-b-c)<<endl;
    cout<<"multiply ="<<(a*b*c)<<endl;
    cout<<"divide ="<<a/b<<endl;
    cout<<"modulo ="<<(c%b)<<endl;
    cout<<"implicting the divide(5/2) ="<<(5/(double)2)<<endl;
    cout<<(3<5)<<endl;
    cout<<(3>5)<<endl;
    cout<<(3<=3)<<endl;
    cout<<(3>=5)<<endl;
    cout<<(3!=5)<<endl;
    cout<<(3==5)<<endl;
    cout<<((3<5)||(3==5))<<endl;
    cout<<((3<5)&&(3==5))<<endl;
    cout<<"give first number input: ";
    cin >> a;
    cout<<"give second number input: ";
    cin >> b;
    cout<<"addition of two numbers is "<<sum(a,b)<<endl;
    a++;//increment
    cout<<"a value is "<<a<<endl;
    a--;//decrement
    cout<<"a value is "<<a<<endl;
    return 0;
}
int sum(int a,int b){
    return a+b;
}