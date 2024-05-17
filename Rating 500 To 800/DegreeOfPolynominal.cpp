// In mathematics, the degree of polynomials in one variable is the highest power of the variable in the algebraic expression with non-zero coefficient. Find the degree of the polynomial.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no.of test cases : ";
    cin>>testCase;
    while(testCase--){
        int coefficient;
        cout<<"Enter the value of coefficient : ";
        cin>>coefficient;
        int arr[1000];
        for(int i = 0;i < coefficient;i++){
            cout<<"Enter the degree : ";
            cin>>arr[i];
        }
        for(int i = (coefficient - 1);i >= 0;i--){
            if(arr[i] != 0){
                cout<<"Highest degree : "<<i<<endl;
                break;
            }
        }
    }
}