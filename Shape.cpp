#include <Shape.h>

Shape::Shape( void )
{
}

Shape::~Shape( void )
{
}

Shape::Shape( const Shape & rtg_arg )
    : x{ rtg_arg.x }
    , y{ rtg_arg.y }
    , w{ rtg_arg.w }
    , h{ rtg_arg.h }
    , g{ rtg_arg.g }
    , b{ rtg_arg.b }
    , r{ rtg_arg.r }
{
}

Shape & Shape::operator=( const Shape & rtg_arg )
{
    if( this != &rtg_arg )
    {
        x = rtg_arg.x;
        y = rtg_arg.y;
        w = rtg_arg.w;
        h = rtg_arg.h;
        g = rtg_arg.g;
        b = rtg_arg.b;
        r = rtg_arg.r;
    }
    return *this;
}

void Shape::set_x( int value )
{
x = value;
}

int Shape::get_X( void )
{
return x;
}

int Shape::get_Y( void )
{
return y;
}

void Shape::set_y( int value )
{
y = value;
}

int Shape::get_h( void )
{
return h;
}

int Shape::get_w( void )
{
return w;
}

void Shape::set_h( int value )
{
h = value;
}

void Shape::set_w( int value )
{
w = value;
}

int Shape::get_r( void )
{
return r;
}

int Shape::get_g( void )
{
return g;
}

int Shape::get_b( void )
{
return b;
}

void Shape::set_r( int value )
{
r = value;
}

void Shape::set_g( int value )
{
g = value;
}

void Shape::set_b( int value )
{
b = value;
}

void Shape::setInvisible( int argx, int argy, int argw, int argh )
{
x = argx;
y = argy;
w = argw;
h = argh;
r = 0;
g = 0;
b = 0;
}

void Shape::setVisible( int argx, int argy, int argw, int argh, int argr, int argg, int argb )
{
x = argx;
y = argy;
w = argw;
h = argh;
r = argr;
g = argg;
b = argb;
}

