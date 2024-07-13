// The Little Elephant from the Zoo of Lviv currently is on the military mission. There are N enemy buildings placed in a row and numbered from left to right starting from 0. Each building i (except the first and the last) has exactly two adjacent buildings with indices i-1 and i+1. The first and the last buildings have just a single adjacent building. Some of the buildings contain bombs. When bomb explodes in some building it destroys it and all adjacent to it buildings. You are given the string S of length N, where Si is 1 if the i-th building contains bomb, 0 otherwise. Find for the Little Elephant the number of buildings that will not be destroyed after all bombs explode. Please note that all bombs explode simultaneously.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the no. of string : ";
        cin>>len;

        string s;
        // cout<<"Enter string : ";
        cin>>s;

        int count = 0;
        for(int i = 0;i < len;i++){
            if(s[i] == '0' && (s[i - 1] == '0' || i == 0) && (s[i + 1] == '0' || i == (len - 1))) count++;
        }
        cout<<count<<endl;
    }
}