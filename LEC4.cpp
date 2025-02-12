#include <iostream>
using namespace std;

int main(){
//q1
    int n,m,o;
    n=4;//<---------
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
// q2
    n=4;
    for(int i=0;i<=n;i++){
        char alpha = 'A';
        for(int j=1;j<=n;j++){
            cout<<alpha<<"\t";
            alpha++;
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
// q3
    n=3;//<---------
    m=1;//<---------
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<m<<"\t";
            m++;
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
// q4
    n=4;
    char alpha = 'A';
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<alpha<<"\t";
            alpha++;
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
// q5
    n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
//q6
    m =1;
    n =4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<m<<"\t";
        }
        m++;
        cout<<"\n";
    }
    cout<<"------------"<<endl;
//q7
    alpha = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<alpha<<"\t";
        }
        alpha++;
        cout<<"\n";
    }
    cout<<"------------"<<endl;
//q8
    n =4;
    for(int i=1;i<=n;i++){
        m =1;
        for(int j=1;j<=i;j++){
            cout<<m<<"\t";
            m++;
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
//q10
    n =4;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
// q11
    n =4;
    m=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<m<<"\t";
            m++;
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl; 
// q12
    n =4;
    for(int i=1;i<=n;i++){
        alpha ='A';
        for(int j=i;j>0;j--){
            cout<<alpha<<"\t";
            alpha++;
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl;
// q13
    n =4;
    m=1;
    alpha ='A';
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<alpha<<"\t";
            alpha++;
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl; 
// q14
    n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"\t";
        }
        for(int j=0;j<n-i;j++){
            cout<<i+1<<"\t";
        }
        cout<<"\n";
    }
    cout<<"------------"<<endl; 
// q15
    n=4;
    for(int i=0;i<n;i++){
        alpha ='A';
        for(int j=0;j<i;j++){
            cout<<"\t";
        }
        for(int j=0;j<n-i;j++){
            cout<<alpha<<"\t";
            alpha++;
        }
        cout<<"\n";
    }
cout<<"------------"<<endl; 
//q16
    n=4;
    for(int i=0;i<n;i++){
        m=1;
        for(int j=0;j<n-i;j++){
            cout<<"\t";
        }
        for(int k=0;k<i+1;k++){
            cout<<m<<"\t";
            m++;
        }
        m--;
        for(int l=0;l<i;l++){
            m--;
            cout<<m<<"\t";
        }
    cout<<"\n";
    }
cout<<"------------"<<endl; 
//q17
    n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"\t";
        }
        cout<<"*";
        for(int j=0;j<i;j++){
            cout<<"\t";
        }
        if(i!=0){
        for(int l=0;l<i;l++){
            cout<<"\t";
        }
        cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<"\t";
        }
        cout<<"*";
        for(int j=0;j<i;j++){
            cout<<"\t";
        }
        if(i!=n-1){
        for(int j=0;j<n-i;j++){
            cout<<"\t";
        }
        cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}