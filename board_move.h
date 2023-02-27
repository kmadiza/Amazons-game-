#ifndef BOARD_MOVE_H_INCLUDED
#define BOARD_MOVE_H_INCLUDED


int taken(int x, int y);
/**
 * @brief used in place funtion to check whenever the field on the board is occupied
 * 
 * @param x current position
 * @param y current position
 * @return int 
 */

void place(int amazons, int player, int max_player, int board_x_max, int board_y_max);
/**
 * @brief function for placement phase
 * @note function for placing amazons, checks if the field where we want to put amazon is unoccupied
 * @param amazons number of amazons
 * @param player current players
 * @param max_player max number of players
 * @param board_x_max maximal board x coordinate
 * @param board_y_max maximal board y coordinate
 */

void change_P(int *player, int max_player);
/**
 * @brief function for changing player
 * 
 * @param player number of players
 * @param max_player max number of players
 */

void movement(int amazons, int player, int points[], int board_x_max, int board_y_max);
/**
 * @brief checks if obstacle is in diagonal
 * @note function lets player pick his amazon, uses function can_move to check if move is valid, collects treasure and adds points to player's score, collects and uses artifact
 * @param a 
 * @param b 
 * @param c 
 * @param d 
 * @return int 
 */
int is_in_line(int a, int b, int c, int d);
/**
 * @brief checks if obstacle is in line
 *
 * @param a
 * @param b
 * @param c
 * @param d
 * @return int
 */

int is_diagonal(int a, int b, int c, int d);
/**
 * @brief checks if obstacle is in diagonal
 * 
 * @param a 
 * @param b 
 * @param c 
 * @param d 
 * @return int 
 */

int can_move(int from_x, int from_y, int to_x, int to_y);
/**
 * @brief function for checking if player can move
 * @note checks if the chosen movement is valid using functions is_diagonal or is_in_line
 * @param from_x 
 * @param from_y 
 * @param to_x current x position
 * @param to_y current y position
 * @return int 
 */


#endif