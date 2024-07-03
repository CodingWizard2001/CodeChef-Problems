// When Chef was visiting a fair in Byteland, he met a magician. The magician had N boxes (numbered 1 through N) and a gold coin. He challenged Chef to play a game with him; if Chef won the game, he could have the coin, but if he lost, the magician would kidnap Chef. At the beginning of the game, the magician places the gold coin into the X-th box. Then, he performs S swaps. To win, Chef needs to correctly identify the position of the coin after all swaps. In each swap, the magician chooses two boxes A and B, moves the contents of box A (before the swap) to box B and the contents of box B (before the swap) to box A.


#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfBox,placedGoldCoin,noOfSwaps;

        // cout<<"Enter the total no. of boxes : ";
        cin>>noOfBox;
        // cout<<"Enter the total no. of boxes : ";
        cin>>placedGoldCoin;
        // cout<<"Enter the total no. of boxes : ";
        cin>>noOfSwaps;

        for(int i = 1;i <= noOfSwaps;i++){
            int swapBox1,swapBox2;

            // cout<<"Enter the box : ";
            cin>>swapBox1;
            // cout<<"Enter the box : ";
            cin>>swapBox2;

            if(swapBox1 == placedGoldCoin) placedGoldCoin = swapBox2;
            else placedGoldCoin = swapBox1;
        }

        cout<<placedGoldCoin<<endl;
    }
}