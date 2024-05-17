// Two friends Chef and Chefina are currently on floors A and B respectively. They hear an announcement that prizes are being distributed on the ground floor and so decide to reach the ground floor as soon as possible.Chef can climb down X floors per minute while Chefina can climb down Y floors per minute. Determine who will reach the ground floor first (ie. floor number 0). In case both reach the ground floor together, print Both.

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int chefFloor,chefinaFloor,chefSpeed,chefinaSpeed;
        cout<<"Enter the floor chef live : ";
        cin>>chefFloor;
        cout<<"Enter the floor chefina live : ";
        cin>>chefinaFloor;
        cout<<"Enter the speed of chef : ";
        cin>>chefSpeed;
        cout<<"Enter the speed of chefina : ";
        cin>>chefinaSpeed;
        float timeTakenByChef = (chefFloor / float(chefSpeed));
        float timeTakenByChefina = (chefinaFloor / float(chefinaSpeed));
        if(timeTakenByChef == timeTakenByChefina) cout<<"They reach ground floor together"<<endl;
        else if(timeTakenByChef > timeTakenByChefina) cout<<"Chefina reach ground floor first"<<endl;
        else cout<<"Chef reach ground floor first"<<endl;
    }
}