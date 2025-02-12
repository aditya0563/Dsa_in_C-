#include <iostream>
using namespace std;

int printhello(){
    cout<<"hello\n";
    return 5;
}

int sum(int a, int b){
    return a+b;
}

int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int sumrange(int a,int b){
    if(a==b){
        return b;
    }
    return a + sumrange(a+1,b); 
}

int factorial(int a){
    if(a==1){
        return 1;
    }
    return a*factorial(a-1); 
}

int digitssum(int a){
    int sum=0;
    while(a>0){
        int last = a%10;
        a =a/10;
        sum += last;
    }
    return sum;
}

double binomial(double a,double b){
    return (factorial(a)/(factorial(b)*factorial(a-b)));
}

int main(){
    int value =printhello();
    cout<<"value is "<<value<<endl;
    cout<<printhello()<<endl;

    cout<<sum(4,5)<<endl;

    int a,b;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    cout<<"minimum number is "<<min(a,b)<<endl; 

    cout<<"enter the lower range: ";
    cin>>a;
    cout<<"enter the upper range: ";
    cin>>b;
    cout<<"sum of numbers in the range is "<<sumrange(a,b)<<endl;


    cout<<"enter the factorial to be calculated : ";
    cin>>a;
    cout<<"factorial of a number is  "<<factorial(a)<<endl;

    cout<<"enter the number : ";
    cin>>a;
    cout<<"sum of digits of a number is "<<digitssum(a)<<endl;

    cout<<"enter the n : ";
    cin>>a;
    cout<<"enter the r: ";
    cin>>b;
    cout<<"binomial coffiecent of n and r is "<<binomial(a,b)<<endl;

    

    return 0;
}