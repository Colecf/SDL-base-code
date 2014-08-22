#import <Cocoa/Cocoa.h>
#import "ResourcePath.h"


std::string resourcePath = "";

std::string getResourcePath()
{
    if(resourcePath != "")
        return resourcePath;
    resourcePath = [[[NSBundle mainBundle] resourcePath] UTF8String];
    resourcePath += "/";
    return resourcePath;
}
