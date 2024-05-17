// Chef's phone has a total storage of S MB. Also, Chef has 2 apps already installed on his phone which occupy X MB and Y MB respectively. He wants to install another app on his phone whose memory requirement is Z MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int totalStorage,capacityOfX,capacityOfY,anotherApp;
        cout<<"Enter total storage the phone have : ";
        cin>>totalStorage;
        cout<<"Enter storage taken by X app : ";
        cin>>capacityOfX;
        cout<<"Enter storage taken by Y app : ";
        cin>>capacityOfY;
        cout<<"Enter storage taken by another app : ";
        cin>>anotherApp;
        int remainingSpace = (totalStorage - (capacityOfX + capacityOfY));
        if(remainingSpace >= anotherApp) cout<<"No. of apps have to delete : 0"<<endl;
        else if(anotherApp <= (remainingSpace + capacityOfX) || anotherApp <= (remainingSpace + capacityOfY)) cout<<"No. of apps have to delete : 1"<<endl;
        else cout<<"No. of apps have to delete : 2"<<endl;
    }
}