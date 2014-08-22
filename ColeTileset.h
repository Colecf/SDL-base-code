#ifndef __MMO__ColeTileset__
#define __MMO__ColeTileset__

#include <iostream>
#include <map>
#include "ColeTexture.h"

class ColeTileset : public ColeTexture
{
public:
    ColeTileset(std::string path);
    void renderTile(int x, int y, std::string tileName);
    void renderTile(int x, int y, int tileID);
    static std::shared_ptr<ColeTileset> loadedSet;
protected:
    std::map<std::string, SDL_Rect> tileNames;
    int tilewidth, tileheight;
    bool customSize;
};

#endif /* defined(__MMO__ColeTileset__) */
