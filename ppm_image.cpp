#include "ppm_image.h"
#include <string>
#include <fstream>

#define ROUND_CHAR(a) (unsigned char) (0.5 + a)
#define ROUND_UINT(a) (int) (0.5 + a)
#define MIN(a,b) a < b? a : b
#define MAX(a,b) a < b? b : a

using namespace agl;
using namespace std;

ppm_image::ppm_image() 
{
}

ppm_image::ppm_image(int w, int h) 
{
}

ppm_image::ppm_image(const ppm_image& orig)
{
}

ppm_image& ppm_image::operator=(const ppm_image& orig)
{
   if (&orig == this) // protect against self-assignment
   {
      return *this;
   }

   // todo: your code here

   return *this;   
}

ppm_image::~ppm_image()
{
}

bool ppm_image::load(const std::string& filename)
{
   return false;
}

bool ppm_image::save(const std::string& filename) const
{
   return false;
}

 ppm_image ppm_image::resize(int w, int h) const
{
    ppm_image result;
    return result;
}

ppm_image ppm_image::flip_horizontal() const
{
    ppm_image result;
    return result;
}

ppm_image ppm_image::subimage(int startx, int starty, int w, int h) const
{
    ppm_image result;
    return result;
}

void ppm_image::replace(const ppm_image& image, int startx, int starty)
{
}

ppm_image ppm_image::alpha_blend(const ppm_image& other, float alpha) const
{
   ppm_image result;
   return result;
}

ppm_image ppm_image::gammaCorrect(float gamma) const
{
   ppm_image result;
   return result;
}

ppm_image ppm_image::grayscale() const
{
   ppm_image result;
   return result;
}

ppm_pixel ppm_image::get(int row, int col) const
{
   return ppm_pixel{ 0,0,0 };
}

void ppm_image::set(int row, int col, const ppm_pixel& c)
{
}

int ppm_image::height() const
{
   return 0;
}

int ppm_image::width() const
{
   return 0;
}
