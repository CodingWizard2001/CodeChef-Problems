// Chef's website has a specific response mechanism based on the HTTP status code received:

// 1. If the response code is 404, the website will return NOT FOUND.
// 2. For any other response code different from 404, the website will return FOUND.

// Given the response code as X, determine the website response.


#include <iostream>
using namespace std;
int main(){
    int valueOfHTTPStatus;
    cout<<"Enter the value of HTTP status : ";
    cin>>valueOfHTTPStatus;
    if(valueOfHTTPStatus == 404) cout<<"The website is not going to response";
    else cout<<"The website is going to response"<<endl;
}