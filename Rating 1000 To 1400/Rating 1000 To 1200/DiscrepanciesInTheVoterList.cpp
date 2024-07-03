// As you might remember, the collector of Siruseri had ordered a complete revision of the Voters List. He knew that constructing the list of voters is a difficult task, prone to errors. Some voters may have been away on vacation, others may have moved during the enrollment and so on. To be as accurate as possible, he entrusted the task to three different officials. Each of them was to independently record the list of voters and send it to the collector. In Siruseri, every one has a ID number and the list would only list the ID numbers of the voters and not their names. The officials were expected to arrange the ID numbers in ascending order in their lists. On receiving the lists, the Collector realized that there were discrepancies - the three lists were not identical. He decided to go with the majority. That is, he decided to construct the final list including only those ID numbers that appeared in at least 2 out of the 3 lists. Your task is to help the collector by writing a program that produces the final list from the three given lists.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int valueOfX,valueOfY,valueOfZ;

    // cout<<"Enter the value of X : ";
	cin>>valueOfX;
    // cout<<"Enter the value of Y : ";
    cin>>valueOfY;
    // cout<<"Enter the value of Z : ";
    cin>>valueOfZ;

    map<int,int>mp;
	for(int i = 0;i < (valueOfX + valueOfY + valueOfZ);i++){
	    int m;
        cin>>m;
	    mp[m]++;
	}

    vector<int>m;
    for(auto i:mp){
	    if(i.second >= 2){
    	   m.push_back(i.first);
    	}
	}
    cout<<endl;
    cout<<m.size()<<endl;
	for(int i = 0;i < m.size();i++) cout<<m[i]<<endl;
}