// Donald Drumpf has spent the entire summer lobbying to gather votes for the upcoming student government election. At his University, there are a total of N students. Each student in the university casts a vote. The size of student government is determined by the number of students that get at least K votes. Each person that receives at least K votes is given a post in the student government. The Dean noticed that every year, there are a few students who vote for themselves. He decided to add a rule to disqualify any such individuals who vote for themselves i.e they cannot be part of the student government. You are given an array A, where Ai denotes the person who the i-th person voted for. Can you compute the size of the student government?



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,minVoteRequired;
        
        // cout<<"Enter the length of the array : ";
        cin>>len;

        // cout<<"Enter the minimum vote required : ";
        cin>>minVoteRequired;

        int arr[len];
        int vote[len] = {0};
        for(int i = 0;i < len;i++){
            cin>>arr[i];
            int p = arr[i];
            if(p == (i + 1)) vote[p - 1] = -1;
            else{
                if(vote[p - 1] != -1) vote[p - 1]++;
            }
        }

        int count = 0;
        for(int i = 0;i < len;i++){
            if(vote[i] == minVoteRequired || vote[i] > minVoteRequired) count++;
        }

        cout<<count<<endl;
    }
}