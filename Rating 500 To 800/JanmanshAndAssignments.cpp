// Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts to do the assignments at X pm. Each assignment takes him 1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-case : ";
    cin>>t;
    while(t--){
        int x;
        cout<<"Enter the time : ";
        cin>>x;
        if((x + 3) <= 10) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}