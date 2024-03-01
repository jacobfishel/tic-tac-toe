#include <iostream>

#include "functions.hpp"

void game__board(char nums[3][3]){
    std::cout << " " << nums[0][0] << " | " << nums[0][1] << " | " << nums[0][2] << " \n";
    std::cout << "---|---|---\n";
    std::cout << " " << nums[1][0] << " | " << nums[1][1] << " | " << nums[1][2] << " \n";
    std::cout << "---|---|---\n";
    std::cout << " " << nums[2][0] << " | " << nums[2][1] << " | " << nums[2][2] << " \n";

}


void move(char nums[3][3], int player_symbol, char player_char){
int row = (player_symbol - 1) / 3;
int column = (player_symbol - 1) % 3;

if(player_symbol < 1 || player_symbol > 9 || nums[row][column] == 'X' || nums[row][column] == 'O'){
    std::cout << "Invalid space, please choose again.\n";
} else {

nums[row][column] = player_char;
game__board(nums);
check_winner_x(nums, player_char);
check_winner_y(nums, player_char);
check_diagonal_x(nums, player_char);
check_diagonal_y(nums, player_char);
}
}


void check_winner_x(char nums[3][3], char check_player){
//check rows for player 1
bool win = false;

if (check_player == 'X'){
for(int i = 0; i <= 2; i++){
    if(nums[i][0] == nums[i][1] && nums[i][1] == nums[i][2]){
        win = true;
    } else {
        for(int j = 0; j <= 2; j++){
            if(nums[0][j] == nums[1][j] && nums[1][j] == nums[2][j]){
        win = true;
        }
    }

    }
} 
}
if(win){
    std::cout << "Player 1 wins!";
}
}


void check_winner_y(char nums[3][3], char check_player){
//check rows for player 1
bool win = false;

if (check_player == 'Y'){
for(int i = 0; i <= 2; i++){
    if(nums[i][0] == nums[i][1] && nums[i][1] == nums[i][2]){
        win = true;
    } else {
        for(int j = 0; j <= 2; j++){
            if(nums[0][j] == nums[1][j] && nums[1][j] == nums[2][j]){
        win = true;
        }
    }

    }
} 
}
if(win){
    std::cout << "Player 2 wins!";
}
}


void check_diagonal_x(char nums[3][3], char check_player){
    bool win = false;
    if(check_player == 'X'){
        if(nums[0][0] == nums[1][1] && nums[1][1] == nums[2][2]){
            win = true;
        } else if(nums[0][2] == nums[1][1] && nums[1][1] == nums[2][0]){
            win = true;
        }
    }
    if(win){
        std::cout << "Player 1 wins!";
    }
}


void check_diagonal_y(char nums[3][3], char check_player){
    bool win = false;
    if(check_player == 'O'){
        if(nums[0][0] == nums[1][1] && nums[1][1] == nums[2][2]){
            win = true;
        } else if(nums[0][2] == nums[1][1] && nums[1][1] == nums[2][0]){
            win = true;
        }
    }
    if(win){
        std::cout << "Player 2 wins!";
    }
}