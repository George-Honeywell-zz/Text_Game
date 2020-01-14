#include <iostream>
#include "Player.h"
#include <Windows.h>

using namespace std;

int main()
{
    PlayerStats player;

    while (player.getIsDead() == false)
    {
        cout << "Your current health is: " << player.getHealth() << ".\n";
        cout << "You've been hit! You have taken 5 damage!\n";
        player.damagePlayer(10);
        cout << "Your health is now: " << player.getHealth() << endl << endl;
        player.checkIsDead();
        Sleep(500);
    }

    while (player.getIsDead() == true) 
    {
        cout << "You're dead!\n";
        cout << "You've been given an extra life. Would you like to use it?\n";
        cout << "0 = No. 1 = Yes.\n";
        cin >> player.choice;
        switch (player.choice) 
        {
        case 1:
            main();
            break;
        case 0:
            cout << "Game Over!\n";
            break;
        default:
            cout << "Invalid Option - Try again!\n";
            cin >> player.choice;
            break;
        }
    }
}

