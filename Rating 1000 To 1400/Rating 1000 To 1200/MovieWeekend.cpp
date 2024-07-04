// Little Egor is a huge movie fan. He likes watching different kinds of movies: from drama movies to comedy movies, from teen movies to horror movies. He is planning to visit cinema this weekend, but he's not sure which movie he should watch. There are n movies to watch during this weekend. Each movie can be characterized by two integers Li and Ri, denoting the length and the rating of the corresponding movie. Egor wants to watch exactly one movie with the maximal value of Li × Ri. If there are several such movies, he would pick a one with the maximal Ri among them. If there is still a tie, he would pick the one with the minimal index among them. Your task is to help Egor to pick a movie to watch during this weekend.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length of array : ";
        cin>>len;
        int arr[len];
        int brr[len];
        for(int i = 0;i < len;i++){
            // cout<<"Enter the index at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        for(int i = 0;i < len;i++){
            // cout<<"Enter the rating at "<<(i + 1)<<"th position : ";
            cin>>brr[i];
        }

        int maxi = 0,ri = 0,idx = 0;
        for(int i = 0;i < len;i++){
            if(maxi <= arr[i] * brr[i] && ri < brr[i]){
                maxi = arr[i] * brr[i];
                ri = brr[i];
                idx = i;
            }
        }
        cout<<(idx + 1)<<endl;
    }
}