#include <iostream>
using namespace std;

//A simple program to calculate the average plays per song of Spotify's top 10 artists. From Spotifycharts.com

int main()
{
    double total = 0;

    struct musicArtist
    {
        string id;
        int weekly_plays;
    };

    //creating an array of struct objects containing the top 10    

    musicArtist top10[10] = {{"Cardi B", 153988997}, {"24kGoldn", 10323110}, {"Drake", 9934418}, {"Pop Smoke", 7522385}, {"Internet Monkey", 6743659}, {"DaBaby", 6587105},
    {"Jack Harlow", 6047672}, {"Juice WRLD", 5603140}, {"Conan Gray", 5760007}, {"Harry Styles", 5239672}};

    for (int i = 0; i < 10; i++)
    {
        total += top10[i].weekly_plays;
    }
    
    cout << "The avergae plays per song for spotify top 10 is " << total/10 << endl;

    return 0;
}