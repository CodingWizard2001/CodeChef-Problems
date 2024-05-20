// Om has X rupees. He wants to gift a laptop worth N rupees to his girlfriend. We know that Om is the technical secretary of IIIT-A and has access to the Gymkhana funds of IIIT-A. Currently there are M rupees in the fund and Om can use the fund as much as he wants. Find whether Om can gift his girlfriend a new laptop.

#include <iostream>
using namespace std;
int main(){
    int rupeesChefHave,worthOfLaptop,fundsRupee;
    cout<<"Enter the rupees Chef have : ";
    cin>>rupeesChefHave;
    cout<<"Enter the worth of laptop : ";
    cin>>worthOfLaptop;
    cout<<"Enter the funds rupee in Gymkhana funds : ";
    cin>>fundsRupee;
    if((rupeesChefHave + fundsRupee) >= worthOfLaptop) cout<<"Om can gift his girlfriend a new laptop"<<endl;
    else cout<<"Om can't gift his girlfriend a new laptop"<<endl;
}