#include <iostream>
using namespace std;

int factorial(int n);

int main(){
//q1
    int sum=0,number;
    cout<<"enter the upper range: ";
    cin>>number;
    for(int i=1;i<=number;i++){
        if(i%3==0){
            sum += i;
        }
    }
    cout<<"sum of number divisible by 3 is "<<sum<<endl;
//q2
    cout<<"enter number:";
    cin>>number;
    cout<<"factorial of a nuumber is "<<factorial(number)<<endl;
    return 0;
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}