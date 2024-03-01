#include <iostream>

#include "functions.hpp"

int main(){
    std::cout << "Welcome to Jacob's tic-tac-toe game!\n";
    std::cout << "Player one is X's, player two is O's. Player one, select a number to place your move.\n\n";

    char nums[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    std::cout << " " << nums[0][0] << " | " << nums[0][1] << " | " << nums[0][2] << " \n";
    std::cout << "---|---|---\n";
    std::cout << " " << nums[1][0] << " | " << nums[1][1] << " | " << nums[1][2] << " \n";
    std::cout << "---|---|---\n";
    std::cout << " " << nums[2][0] << " | " << nums[2][1] << " | " << nums[2][2] << " \n";
    int move_holder;
    for (int i = 0; i < 9; i++){
    std::cin >> move_holder;
    move(nums, move_holder, (i % 2 == 0) ? 'X' : 'O');

    }



    return 0;
}