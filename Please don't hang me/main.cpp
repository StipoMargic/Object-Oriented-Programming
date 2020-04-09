#include "Game.hpp"
#include "Player.hpp"

int main() {

    Game G;
    do {
        G.PlayGame();
    } while (Player::WantToPlayAgain());

    return 0;
}
