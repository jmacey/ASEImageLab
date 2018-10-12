#include <iostream>
#include <cstdlib>
#include <Magick++.h>
#include <memory>

int main()
{
    const size_t width=400;
    const size_t height=400;
    const size_t pixelDepth=3;
    std::unique_ptr<unsigned char []> image=
            std::make_unique<unsigned char []>(width*height*pixelDepth);

    for(size_t i=0; i<width*height*pixelDepth; ++i)
    {
        image[i]=8;
    }

    Magick::Image output(width,height,"RGB",Magick::CharPixel,image.get());
    output.depth(16);
    output.write("test.bmp");
    return EXIT_SUCCESS;
}




