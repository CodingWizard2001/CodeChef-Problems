// Chef is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and Z units respectively. Help him determine whether he can measure the exact weight of the object with one or more of these weights. If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int weightOfObject,smallObject1,smallObject2,smallObject3;
        cout<<"Enter the weight of the object : ";
        cin>>weightOfObject;
        cout<<"Enter the small weight of the object : ";
        cin>>smallObject1;
        cout<<"Enter the small weight of the object : ";
        cin>>smallObject2;
        cout<<"Enter the small weight of the object : ";
        cin>>smallObject3;
        if(weightOfObject == smallObject1 || weightOfObject == smallObject2 || weightOfObject == smallObject3 || weightOfObject == (smallObject1 + smallObject2) || weightOfObject == (smallObject1 + smallObject3) || weightOfObject == (smallObject2 + smallObject3) || weightOfObject == (smallObject1 + smallObject2 + smallObject3)) cout<<"It is possible to measure the weight of object"<<endl;
        else cout<<"It is not possible to measure the weight of object"<<endl;
    }
}