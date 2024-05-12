// A new TV streaming service was recently started in Chef-land called the Chef-TV.A group of N friends in Chef-land want to buy Chef-TV subscriptions. We know that 6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is X rupees. Determine the minimum total cost that the group of N friends will incur so that everyone in the group is able to use Chef-TV.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test-case : ";
    cin>>t;
    while(t--){
        int x,y;
        cout<<"Enter the value of X : ";
        cin>>x;
        cout<<"Enter the value of Y : ";
        cin>>y;
        if(x % 6 == 0) cout<<(x / 6) * y<<endl;
        else cout<<((x / 6) + 1) * y<<endl;
    }
}