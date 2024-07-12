// Chef decided to write an infinite sequence. Initially, he wrote 0, and then he started repeating the following process:

// 1.  Look at the last element written so far (the l-th element if the sequence has length l so far); let's denote it by x.

// 2.  If x does not occur anywhere earlier in the sequence, the next element in the sequence is 0.

// 3.  Otherwise, look at the previous occurrence of x in the sequence, i.e. the k-th element, where k < l, this element is equal to x and all elements between the k + 1 -th and l-1-th are different from x. The next element is l - k, i.e. the distance between the last two occurrences of x. Chef has given you a task to perform. Consider the N-th element of the sequence (denoted by x) and the first N elements of the sequence. Find the number of occurrences of x among these N elements.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        cin>>len;
        
        vector<int>v;
        v.push_back(0);
        
        for(int i = 1;i < 128;i++){
            if(count(v.begin(),v.begin() + i - 1,v[i-1])){
                for(int j = (i - 2);j >= 0;j--){
                    if(v[j] == v[i-1]){
                        v.push_back(i - j - 1);
                        break;
                    }
                }
            }
            else v.push_back(0);
        }
        
        int con = 0;
        for(int i = 0;i < len;i++){
            if(v[len - 1] == v[i]) con++;
        }
       cout<<con<<endl;
    }
}