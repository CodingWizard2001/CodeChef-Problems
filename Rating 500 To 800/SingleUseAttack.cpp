// Chef is playing a video game, and is now fighting the final boss. The boss has H health points. Each attack of Chef reduces the health of the boss by X. Chef also has a special attack that can be used at most once, and will decrease the health of the boss by Y. Chef wins when the health of the boss is ≤ 0. What is the minimum number of attacks needed by Chef to win?


#include<iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the number of test cases : ";
    cin>>testCase;
    while(testCase--){
        int bossHealth,normalAttack,powerAttack;
        cout<<"Enter the health of the boss : ";
        cin>>bossHealth;
        cout<<"Enter the power of normal attack : ";
        cin>>normalAttack;
        cout<<"Enter the power of powerful attack : ";
        cin>>powerAttack;
        int ans1 = 0,ans2 = 0;
        if(bossHealth % normalAttack == 0) ans1 = (bossHealth / normalAttack);
        else ans1 = (bossHealth / normalAttack) + 1;
        if((bossHealth - powerAttack) % normalAttack == 0) ans2 = 1 + ((bossHealth - powerAttack) / normalAttack);
        else ans2 = 2 + ((bossHealth - powerAttack) / normalAttack);
        cout<<"Minimum attacks are required : "<<min(ans1,ans2)<<endl;
    }
}