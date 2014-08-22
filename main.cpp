#include "RealMain.h"
#include "SDL2.h"   // Need to include SDL here to it processes the main function
                    // Otherwise you get Undefined reference to SDL_main

int main(int argc, char * arg[])
{
    return realMain(argc, arg);
}
