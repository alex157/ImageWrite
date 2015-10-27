#include <iostream>
#include <cstdlib>
#include "ImageWrite.h"

int main()
{
  std::cout<<"working\n";
  ImageWrite myImage(400,400);
  for(int y=0; y<400; ++y)
  for(int x=0; x<400; ++x)
  {
    myImage.setPixel(x,y,0,0,0);
  }
  myImage.bresenhams(0,1,160,150);
  //myImage.clear(255,0,0);
  myImage.save("test.ppm");
  return EXIT_SUCCESS;
}
