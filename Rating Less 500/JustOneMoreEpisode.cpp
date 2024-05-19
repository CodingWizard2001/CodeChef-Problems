// Chef has to attend an exam that starts in X minutes, but of course, watching shows takes priority. Every episode of the show that Chef is watching, is 24 minutes long. If he starts watching a new episode now, will he finish watching it strictly before the exam starts?

#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int episodeTime;
        cout<<"Enter the time-length of episode : ";
        cin>>episodeTime;
        if(episodeTime > 24) cout<<"He will finish watching it"<<endl;
        else cout<<"He will not finish watching it"<<endl;
    }
}