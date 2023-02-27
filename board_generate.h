#ifndef BOARD_GENERATE_H_INCLUDED
#define BOARD_GENERATE_H_INCLUDED


void gen_board(int board_x_max, int board_y_max);
/**
 * @brief function generates board 
 * @note function generates board of size given by the user and fills it with random artifacts and treasure
 * @param board_x_max maximal board x coordinate
 * @param board_y_max maximal board y coordinate
 */
void print_board(int board_x_max, int board_y_max);
/**
 * @brief function for printing board
 * 
 * @param board_x_max maximal board x coordinate
 * @param board_y_max maximal board y coordinate
 */
#endif