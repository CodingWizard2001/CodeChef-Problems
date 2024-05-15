// Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now. You are given three integers - B1,B2 & B3. If B1 = 1 B1 = 1, it means that the first bottle is full.If B1 = 0 it means that the first bottle is empty. Similarly, B2 denotes whether the second bottle is full or empty, and B3 denotes it for the third bottle. Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-case : ";
    cin>>t;
    while(t--){
        int b1,b2,b3;
        cout<<"Enter B1's value : ";
        cin>>b1;
        cout<<"Enter B2's value : ";
        cin>>b2;
        cout<<"Enter B3's value : ";
        cin>>b3;
        int ans = (b1 + b2 + b3);
        if(ans > 1) cout<<"Not now"<<endl;
        else cout<<"Water filling time"<<endl;
    }
}