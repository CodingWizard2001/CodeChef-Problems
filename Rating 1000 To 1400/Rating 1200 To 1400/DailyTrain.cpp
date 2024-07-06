// A daily train consists of N cars. Let's consider one particular car. It has 54 places numbered consecutively from 1 to 54, some of which are already booked and some are still free. The places are numbered in the following fashion. The car is separated into 9 compartments of 6 places each, as shown in the picture. So, the 1st compartment consists of places 1, 2, 3, 4, 53 and 54, the 2nd compartment consists of places 5, 6, 7, 8, 51 and 52, and so on. A group of X friends wants to buy tickets for free places, all of which are in one compartment (it's much funnier to travel together). You are given the information about free and booked places in each of the N cars. Find the number of ways to sell the friends exactly X tickets in one compartment (note that the order in which the tickets are sold doesn't matter).




#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> compartments = {
    {1, 2, 3, 4, 53, 54},
    {5, 6, 7, 8, 51, 52},
    {9, 10, 11, 12, 49, 50},
    {13, 14, 15, 16, 47, 48},
    {17, 18, 19, 20, 45, 46},
    {21, 22, 23, 24, 43, 44},
    {25, 26, 27, 28, 41, 42},
    {29, 30, 31, 32, 39, 40},
    {33, 34, 35, 36, 37, 38}
};

int comb(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    int res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main(){
    int x,n;
    cin>>x>>n;
    vector<string>cars(n);
    for (int i = 0; i < n; ++i) cin >> cars[i];
    
    int ways = 0;
    for(const string& car : cars){
        for(const auto& compartment : compartments){
            int freePlaces = 0;
            for(int place : compartment){
                if(car[place - 1] == '0') freePlaces++;
            }
            if(freePlaces >= x) ways += comb(freePlaces,x);
        }
    }
    cout<<ways<<endl;
}