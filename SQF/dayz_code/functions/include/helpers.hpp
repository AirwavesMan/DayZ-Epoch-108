#ifndef HELPER

#define HELPER                  'Helper_10_DZE'
#define HELPER_SMALL            'Sign_sphere10cm_EP1'
#define HELPER_MEDIUM           'Sign_sphere25cm_EP1'
#define HELPER_LARGE            'Sign_sphere100cm_EP1'

// Build transforms require a non-physical pivot so attached previews cannot drift during movement.
#define BUILD_HELPER            HELPER

#define NOCOLOR                 [0,'']
#define COLOR_R                 [0,'#(argb,8,8,3)color(1,0,0,0.5,ca)']
#define COLOR_G                 [0,'#(argb,8,8,3)color(0,1,0,0.5,ca)']
#define COLOR_B                 [0,'#(argb,8,8,3)color(0,0,1,0.5,ca)']

#define TEXTURE_N(obj)          obj setObjectTexture NOCOLOR
#define TEXTURE_R(obj)          obj setObjectTexture COLOR_R
#define TEXTURE_G(obj)          obj setObjectTexture COLOR_G
#define TEXTURE_B(obj)          obj setObjectTexture COLOR_B

#endif
