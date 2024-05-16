// Mario's bullet moves at X pixels per frame. He wishes to shoot a goomba standing Y pixels away from him. The goomba does not move. Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least Z seconds from now.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int bulletPixel,distance,requiredSecond;
        cout<<"Enter the bullet's pixel : ";
        cin>>bulletPixel;
        cout<<"Enter the distance of goomba  : ";
        cin>>distance;
        cout<<"Enter the seconds required  : ";
        cin>>requiredSecond;
        int result = (distance / bulletPixel);
        if(result > requiredSecond) cout<<"The minimum time after which Mario should shoot the bullet will be : "<<0<<endl;
        else cout<<"The minimum time after which Mario should shoot the bullet will be : "<<(requiredSecond - result)<<endl;
    }
}