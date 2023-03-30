// File "Player.h"
#ifndef PLAYER_H
#define PLAYER_H

#include <string>       // for std::string

class Player {
public:
    virtual ~Player() = default;
    // Makes a move in the game and returns true if successful, false otherwise.
    // This function should be implemented by derived classes.
    virtual bool make_move() = 0;
    // Checks if the player has won the game and returns true if so, false otherwise.
    // This function should be implemented by derived classes.
    virtual bool check_win() = 0;

    const std::string& get_name() const;
    

protected:
    Player(const std::string& name);
    std::string _name;

private:
    // This private section declares the copy constructor and copy assignment operator as private,
    // which means they are not accessible from outside the class.
    // This prevents copying of Player objects and ensures that the class is non-copyable.
    Player(const Player&);
    Player& operator=(const Player&);
};

#endif // PLAYER_H