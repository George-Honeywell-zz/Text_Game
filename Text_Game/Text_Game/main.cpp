#include <iostream>
#include "Player.h"
#include <Windows.h>

using namespace std;

int main()
{
    PlayerStats player;

    while (player.getHealth() <= 100)
    {
        cout << "Your current health is: " << player.getHealth() << ".\n";
        cout << "You've been hit! You have taken 5 damage!\n";
        player.damagePlayer(5);
        cout << "Your health is now: " << player.getHealth() << endl << endl;
        Sleep(1000);
    }
}

