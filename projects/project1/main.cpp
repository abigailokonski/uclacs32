
#include "globals.h"
#include "Game.h"

///////////////////////////////////////////////////////////////////////////
//  main()
///////////////////////////////////////////////////////////////////////////

#include "Mesa.h"
#include "Player.h"
#include "History.h"
#include "globals.h"
#include <iostream>
using namespace std;
int main()
{
    // Create a game
    // Use this instead to create a mini-game:   Game g(3, 4, 2);
    Game g(7, 8, 25);

    // Play the game
    g.play();
}
