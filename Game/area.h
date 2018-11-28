#ifndef GAME_AREA_H
#define GAME_AREA_H

#include <iostream>
#include <SDL.h>
#include "resources.h"
#include <vector>

enum class Map{
    FLOOR,
    WALL
};

class Area {

public:

    Area();
    void drawArea(const Resources &resources, SDL_Renderer *renderer);
    void setVisible();
    bool isWalkable(int x, int y);
    void setCaptured(int x, int y);
    bool isCaptured(int x, int y);
    int getAreaLevel();

protected:

    Images _images;
    bool _isVisible;
    int _areaLevel = 1;

    std::vector <std::vector <bool>> _isCaptured = {
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,},
            {false, false, false, false, false, false, false, false, false, false,}
    };

    const std::vector<std::vector<Map>> fullMap = {
            {Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::WALL, Map::FLOOR, Map::WALL, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR},
            {Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::WALL, Map::FLOOR, Map::WALL, Map::FLOOR, Map::WALL, Map::WALL, Map::FLOOR},
            {Map::FLOOR, Map::WALL, Map::WALL, Map::WALL, Map::FLOOR, Map::WALL, Map::FLOOR, Map::WALL, Map::WALL, Map::FLOOR},
            {Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::WALL, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR},
            {Map::WALL, Map::WALL, Map::WALL, Map::WALL, Map::FLOOR, Map::WALL, Map::WALL, Map::WALL, Map::WALL, Map::FLOOR},
            {Map::FLOOR, Map::WALL, Map::FLOOR, Map::WALL, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::WALL, Map::FLOOR},
            {Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::WALL, Map::WALL, Map::FLOOR, Map::WALL, Map::FLOOR},
            {Map::FLOOR, Map::WALL, Map::WALL, Map::WALL, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::WALL, Map::FLOOR},
            {Map::FLOOR, Map::FLOOR, Map::FLOOR, Map::WALL, Map::FLOOR, Map::WALL, Map::WALL, Map::FLOOR, Map::FLOOR, Map::FLOOR}
    };

};


#endif
