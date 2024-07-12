// WW3 is near and Gru wants to recruit minions for his team. Gru went to the planet of minions to recruit minions, he saw that there are two villages separated by a river. He cannot recruit minions from both villages because then his team will have internal conflicts. Gru is now in a dilemma about which village to recruit as he wants to have the strongest possible team. You are given coordinates of houses on the planet. Each house has exactly one minion and his power is given. The planet of minion is considered as a 2-D plane and the river is denoted by a straight line (y = mx + c). 




#include <bits/stdc++.h>
using namespace std;
int main() {
	int noOfCoins;
    // cout<<"Enter the no. of coins : ";
	cin>>noOfCoins;
	
	int m,c;
	cin>>m>>c;
	
	long long i = 0,u = 0;
	while(noOfCoins--){
	    int x,y,p;
	    cin>>x>>y>>p;
	    if(y > ((m * x) + c)) i += p;
	    else u += p;
	}
	cout<<(i >= u ? i : u)<<endl;
}