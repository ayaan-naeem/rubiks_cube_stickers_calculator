#include <iostream>
using namespace std;

void Cube()
{
    float Number_of_sides, Number_of_stickers;

    cout << "Enter the Side Lenght of the Rubik's Cube : ";
    cin >> Number_of_sides;

    Number_of_stickers = Number_of_sides * Number_of_sides * 6;
    
    cout << "Number of Stickers Needed : " << Number_of_stickers << endl;
}

int main(){

    Cube();
    
    return 0;
}