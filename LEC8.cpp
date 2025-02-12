#include <iostream>
using namespace std;

void changes(int arr[],int size){
    cout<<"in function "<<endl;
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[100];//declaring array with size and no value
    int arr1[5]={99,56,89,75,89};//declaring array with size and value
    int arr2[]={100,73,28,47,94,28,97,19};//declaring array with no size and value
    cout<<arr1[1]<<endl;
    //0 to size-1
    cout<<arr1[-3]<<endl;
    int size = 5;
    cout<<sizeof(arr1)/sizeof(int)<<endl;
    //lopps
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<endl;
    }

    int largest=0,smallest=INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr1[i]>largest){
            largest=arr1[i];
        }
        if(arr1[i]<smallest){
            smallest=arr1[i];
        }
    }
    cout<<"largest number in array is "<<largest<<endl;
    cout<<"index of largest number is "<<""<<endl;
    cout<<"smallest number in array is "<<smallest<<endl;
    cout<<"index of smallest number is "<<""<<endl;

    changes(arr1,5);

    cout<<"in main "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<"\t";
    }
    cout<<"\n";

    //linear search
    int search;
    cout<<"enter the element to be searched ";
    cin>>search;
    int index=0;
    for(int i=0;i<8;i++){
        if(search == arr2[i]){
            index = i;
            break;
        }
        else{
            index =-1;
        }
    }
    cout<<"element found at "<< index <<" index"<<endl;

    //reversing an array
    reverseArray(arr2, 8); 
    cout << "Reversed array: "; 
    for (int i = 0; i < 8; i++) { 
        cout << arr2[i] << "\t"; 
        } 
    cout << "\n";

    return 0;
}