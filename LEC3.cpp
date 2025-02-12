#include <iostream>
using namespace std;

int main(){
    int n =10;
    if(n>0){
        cout<<"n is positive"<<endl;
    }else{
        cout<<"n is negative"<<endl;
    }
    int age;
    cout<<"enter the age:";
    cin>>age;
    if(age>18){
        cout<<"you can vote.\n";
    }else{
        cout<<"you cannot vote.\n";
    }
    if(age%2==0){
        cout<<"this is a even number.\n";
    }else{
        cout<<"this is a odd number.\n";
    }
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    if(marks>=90){
        cout<<'A'<<endl;
    }else if(marks<90 &&marks>=80){
        cout<<'B'<<endl;
    }
    else{
        cout<<'C'<<endl;
    }
    char charecter;
    cout<<"enter a character:";
    cin>>charecter;
    if(charecter>=97 && charecter<=122){//implict type conversion in this 
        cout<<"this is a lowercase character\n";
    }else if(charecter>=65 && charecter <=90){
        cout<<"this is a lowercase character\n";
    }else{
        cout<<"this is not a character";
    }
    cout<<(charecter>=97?"lowercase charaecter":"uppercase charecter")<<endl;//ternary operator
    //Loops
    //while loop
    int i=1;
    while(i<=n){
        cout<<"while loop "<<i<<endl;
        i++;
        if(i>5){
            break;
        }
    }
    //for loop
    cout<<"sum of numbers till n.\n";
    int sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of numbers is "<<sum<<endl;
    //do while
    i = 0;
    sum = 0;
    do {
        if (i % 2 != 0) {
            cout << i << "\t";
            sum += i;
        }
        i++;
    } while (i <= n);
    cout << "\nSum of odd numbers is " << sum << endl;
    cout<<"check the prime number:";
    int number;
    cin>>number;
    bool isprime =true;
    for(i=2;i*i<=number;i++){//optimisation 
        if(number%i==0){
            isprime =false;
            break;
        }else{
            isprime =true;
        }
    }
    cout<<(isprime==true?"this is a prime number":"this is nota prime number")<<endl;
    return 0;
    //nested loop 
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}