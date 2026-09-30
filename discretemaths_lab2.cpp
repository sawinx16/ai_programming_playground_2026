#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    set <double> A;
    set <double> B;
    int sizeA, sizeB;
    double k;
    cout<<"Введіть кількість чисел масива А: "<<endl;
    cin>>sizeA;
    cout<<"Введіть числа: "<<endl;
    for (int i=0; i<sizeA; i++){
        cin>>k;
        A.insert(k);
    }
    cout<<"Введіть кількість чисел масива B: "<<endl;
    cin>>sizeB;
    cout<<"Введіть числа: "<<endl;
    for (int j=0; j<sizeB; j++){
        cin>>k;
        B.insert(k);
    }
    vector <double> result;
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(),  back_inserter(result));
    cout<<"Новоутворений масив: "<<endl;
    for (int i=0; i<result.size();  i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    cout<<"Потужність: "<<pow(2,result.size())<<endl; 
}