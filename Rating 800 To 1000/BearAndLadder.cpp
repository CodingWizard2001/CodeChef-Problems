// Bearland has infinitely many cities, numbered starting from 1. Some pairs of cities are connected with bidirectional roads:

// There are roads 1-2, 3-4, 5-6, 7-8, and so on (there is a road between cities 2*i+1 and 2*i+2 for every non-negative integer i).
// There are roads 1-3, 3-5, 5-7, 7-9, ... (between every two consecutive odd numbers).
// There are roads 2-4, 4-6, 6-8, 8-10, ... (between every two consecutive even numbers).

// You are given Q queries. In each query, for the given pair of different cities a and b, you should check if there is a road between them. For each query, print "YES" or "NO" accordingly.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int city1,city2;

        cout<<"Enter the position of city1 : ";
        cin>>city1;

        cout<<"Enter the position of city2 : ";
        cin>>city2;

        if((city1 % 2) == 0){
            city2 == (city1 - 1) || city2 == (city1 + 2) || city2 == (city1 - 2) ? cout<<"Yes, we can get from 1st city to 2nd city"<<endl : cout<<"No, we can't get from 1st city to 2nd city"<<endl;
        }

        else{
            city2 == (city1 + 1) || city2 == (city1 + 2) || city2 == (city1 - 2) ? cout<<"Yes, we can get from 1st city to 2nd city"<<endl : cout<<"No, we can't get from 1st city to 2nd city"<<endl;
        }
    }
}