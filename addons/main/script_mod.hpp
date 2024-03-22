#define MAINPREFIX z
#define PREFIX ghostmf
#define AUTHOR Ghost
#define QAUTHOR QUOTE(AUTHOR)
#define LOGO_PATH QUOTE(z\ghostmf\addons\main\logo_256.paa)
#define URL "https://www.ghostsofbattle.com/"

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define REQUIRED_VERSION 2.12

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(ghostmf - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(ghostmf - COMPONENT)
#endif
