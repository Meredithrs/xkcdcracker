#include <iostream>
#include "xkcd.h"

using namespace std;

int main()
{
    XKCD x("neighborinstrumentnoseanswer");
    string result	=	x.crack();
    return 0;
}
