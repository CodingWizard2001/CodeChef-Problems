// Chef and his little brother are playing with sticks. They have total N sticks. Length of i-th stick is Ai. Chef asks his brother to choose any four sticks and to make a rectangle with those sticks its sides. Chef warns his brother to not to break any of the sticks, he has to use sticks as a whole. Also, he wants that the rectangle formed should have the maximum possible area among all the rectangles that Chef's brother can make. Chef's little brother takes this challenge up and overcomes it. Can you also do so? That is, you have to tell whether it is even possible to create a rectangle? If yes, then you have to tell the maximum possible area of rectangle.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfStick;
        cout<<"Enter the length of stick : ";
        cin>>lengthOfStick;

        vector<int>arr(lengthOfStick);
        map<int,int>freq;
        for(int i = 0;i < lengthOfStick;i++){
            cout<<"Enter the length of "<<(i + 1)<<"th stick : ";
            cin>>arr[i];
            freq[arr[i]]++;
        }

        vector<int>sides;
        for(auto p : freq){
            if(p.second >= 2){ // If 2 stick have same length
                sides.push_back(p.first);
                // If 4 stick have same length
                if(p.second >= 4) sides.push_back(p.first); 
            }
        }

        sort(sides.rbegin(),sides.rend()); // Sort in decreasing order
        if(sides.size() < 2) cout<<"Maximum possible area of rectangle will be : "<<-1<<endl;
        else cout<<"Maximum possible area of rectangle will be : "<<sides[0] * sides[1]<<endl;
    }
}