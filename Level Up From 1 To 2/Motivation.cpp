// Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has X GB of space remaining. His friend has N movies represented with (Si,Ri) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.

#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfMovies,freeSpaceOfHardDisk;
        cout<<"Enter the total no. of movies his friend have : ";
        cin>>noOfMovies;
        cout<<"Enter the free space available on chef's hard disk : ";
        cin>>freeSpaceOfHardDisk;
        int maxi = 0;
        while(noOfMovies--){
            int spaceOfMovie,ratingOfMovie;
            cout<<"Enter the space of the movie : ";
            cin>>spaceOfMovie;
            cout<<"Enter the IMDB rating of the movie : ";
            cin>>ratingOfMovie;
            if(spaceOfMovie <= freeSpaceOfHardDisk && maxi <= ratingOfMovie) maxi = ratingOfMovie;
        }
        cout<<"Best fit rating movie for his hard disk will be : "<<maxi<<endl;
    }
}