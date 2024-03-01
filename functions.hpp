// my_class.h
#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H

void move(char nums[3][3], int player_symbol, char player_char);
void game__board(char nums[3][3]);
void check_winner_x(char nums[3][3], char check_player);
void check_winner_y(char nums[3][3], char check_player);
void check_diagonal_x(char nums[3][3], char check_player);
void check_diagonal_y(char nums[3][3], char check_player);

#endif /* MY_CLASS_H */