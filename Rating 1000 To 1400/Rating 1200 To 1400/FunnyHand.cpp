// MoEngage has 3 decks. Each deck consists of N cards, numbered from 1 to N. He draws out 1 card from each deck randomly with each card having an equal probability of being drawn. MoEngage drew cards numbered A and B from the decks 1 and 2 respectively. Now, he wonders what is the probability that he will end up with a funny hand after drawing the third card. A funny hand is when 3 consecutive numbered cards are present in your hand. Help MoEngage calculate the probability of ending up with a funny hand after drawing the third card. If the final probability of ending up with a funny hand is P, you need to print the value P . N. It can be shown that this value is an integer.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int sizeOfDeck,cardDrawnFromFirst,cardDrawnFromSecond;

        // cout<<"Enter the size of deck : ";
        cin>>sizeOfDeck;
        
        // cout<<"Enter the card drawn from first deck : ";
        cin>>cardDrawnFromFirst;

        // cout<<"Enter the card drawn from first deck : ";
        cin>>cardDrawnFromSecond;
        
        if((abs(cardDrawnFromFirst - cardDrawnFromSecond) > 2 )|| (abs(cardDrawnFromFirst - cardDrawnFromSecond) == 0)) cout<<0<<endl;
        
        else if(abs(cardDrawnFromFirst - cardDrawnFromSecond) == 2) cout<<1<<endl;
        
        else if((abs(cardDrawnFromFirst - cardDrawnFromSecond) == 1)){
            
            if((cardDrawnFromFirst == 1) || (cardDrawnFromFirst == sizeOfDeck) || (cardDrawnFromSecond == 1) || (cardDrawnFromSecond == sizeOfDeck)) cout<<1<<endl;
            
            else cout<<2<<endl;
        }
    }
}