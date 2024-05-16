// There is a bus with 30 seats. The seats are numbered from 1 to 30, and the numbering is as depicted in this image. As can be seen in the image, the bus is divided into two decks - The Lower deck, and the Upper deck, with 15 seats each. And some of the seats come as Single and some as Double. For example, Seats 1 and 2 are Double, whereas Seat 11 is a Single. You will be given a Seat number, and your job is to classify it as one of these 4 types: a) Lower Single b) Lower Double c) Upper Single d) Upper Double

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int seatNo;
        cout<<"Enter your seat no : ";
        cin>>seatNo;
        if(seatNo >= 1 && seatNo <= 10) cout<<"Lower double"<<endl;
        else if(seatNo >= 11 && seatNo <= 15) cout<<"Lower single"<<endl;
        else if(seatNo >= 16 && seatNo <= 25) cout<<"Upper double"<<endl;
        else cout<<"Upper single"<<endl;
    }
}