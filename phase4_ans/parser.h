
#include <string.h>
#include <memory.h>
 
 
static unsigned int _parseDecimal ( const char** pchCursor );

 
 
static unsigned int _parseHex ( const char** pchCursor );
 
 
 

int ParseIPv4OrIPv6 ( const char** ppszText, unsigned char* abyAddr, int* pnPort, int* pbIsIPv6 );
 
 
//simple version if we want don't care about knowing how much we ate
int ParseIPv4OrIPv6_2 ( const char* pszText, 
        unsigned char* abyAddr, int* pnPort, int* pbIsIPv6 );
