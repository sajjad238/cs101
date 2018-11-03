// return the area of rectangle
unsigned int rectangle_area (unsigned int len, unsigned int width)
{
    return len * width;
}


// return the fraction part of floating number, e.g 12.34555  return 0.34555
float fraction_float (float input)
{
    int x = input;
    return input -= x;
}
