#include <iostream>
#include <cstdlib>
#include <Magick++.h>

int main()
{
    const size_t width=400;
    const size_t height=400;
    const size_t pixelDepth=3;
    unsigned char image[width*height*pixelDepth];    

    for(size_t i=0; i<width*height*pixelDepth; ++i)
    {
        image[i]=128;
    }

    Magick::Image output(width,height,"RGB",Magick::CharPixel,image);
    output.depth(16);
    output.write("test.bmp");
    return EXIT_SUCCESS;
}




