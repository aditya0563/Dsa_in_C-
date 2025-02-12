#include <iostream>
#include <vector>
using namespace std;

int singlenumber(vector<int>& nums){
    int ans=0;
    for(int val:nums){
        ans^=val;
    }
    return ans;
}

int main() {
    vector<int> vec;
    vector<int> vec1 = {1,2,3,4};
    vector<int> vec2(5, 0);
    
    if (!vec.empty()) {
        cout << vec[0] << endl;
    } else {
        cout << "vec is empty" << endl;
    }

    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << endl;
    }

    for (int value : vec1) {
        cout << value << endl;
    }

    cout << "size of vec1 is " << vec1.size() << endl;

    vec.push_back(23);
    vec.push_back(45);
    vec.push_back(56);
    cout << "size of vec is " << vec.size() << endl;

    vec.pop_back();
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(0) << endl;

    cout<<"capacicity of vec is "<<vec.capacity()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << "size of vec is " << vec.size() << endl;
    cout<<"capacicity of vec is "<<vec.capacity()<<endl;

    vector<int> nums={4,1,2,1,2};
    cout<<"unique number is "<<singlenumber(nums)<<endl;


    return 0;
}
