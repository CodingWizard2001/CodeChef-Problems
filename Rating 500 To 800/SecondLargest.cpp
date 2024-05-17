// Three numbers A, B and C are the inputs. Write a program to find second largest among them.


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test case : ";
    cin>>testCase;
    while(testCase--){
        int first,second,third;
        cout<<"Enter the first number : ";
        cin>>first;
        cout<<"Enter the second number : ";
        cin>>second;
        cout<<"Enter the third number : ";
        cin>>third;
        int max = 0,min = 0;
        if(first > second && first > third) max = first;
        else{
            if(second > third) max = second;
            else max = third;
        }
        if(first < second && first < third) min = first;
        else{
            if(second < third) min = second;
            else min = third;
        }
        cout<<"Second largest element is : "<<(first + second + third) - (max + min)<<endl;
    }
}