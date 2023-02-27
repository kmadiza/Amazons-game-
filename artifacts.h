#ifndef ARTIFACTS_H_INCLUDED
#define ARTIFACTS_H_INCLUDED


void none();
/**
 * @brief if player did not pick up any artifact
 * @note when there is no artifact player shoots arrow, which is done by this function
 */
void SPEAR();
/**
 * @brief function for shooting spear
 * 
 * 
 */
void move_H(int x, int y, int amazons, int player, int points[9]);
/**
 * @brief function for moving horse
 * @note asks player where does he want to move with horse
 * @param x current coordinate
 * @param y current coordinate
 * @param amazons number of amazons
 * @param player current player
 * @param points current points
 */
void HORSE(int x, int y, int amazons, int player, int points[9]);
/**
 * @brief function for horse
 * @note shoots arrow first, then moves the horse and checks if there is other artifact
 * @param x current coordinate
 * @param y current coordinate
 * @param amazons number of amazons
 * @param player current player
 * @param points number of points
 */
void artifacts(int x, int y, int amazons, int player, int points[9]);
/**
 * @brief function for artifacts
 * @note function checks number of artifact from board and then calls for other functions corresponding to number of artifacts
 * @param x current coordinate
 * @param y current coordinate
 * @param amazons number of amazons
 * @param player current player
 * @param points number of points
 */
#endif