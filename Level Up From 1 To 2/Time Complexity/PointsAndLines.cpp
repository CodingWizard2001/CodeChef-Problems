// Given N points of the form (xi,yi) on a 2-D plane. From each point, you draw 2 lines one horizontal and one vertical. Now some of the lines may overlap each other, therefore you are required to print the number of distinct lines you can see on the plane.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPoints,xCoordinate,yCoordinate;
        cout<<"Enter the no. of points : ";
        cin>>noOfPoints;

        set<int>s1,s2;
        for(int i = 0;i < noOfPoints;i++){
            cout<<"Enter the value in X co-ordinate : ";
            cin>>xCoordinate;

            cout<<"Enter the value in Y co-ordinate : ";
            cin>>yCoordinate;

            s1.insert(xCoordinate);
            s2.insert(yCoordinate);
        }
        cout<<"The number of distinct lines will be : "<<(s1.size() + s2.size());
    }
}