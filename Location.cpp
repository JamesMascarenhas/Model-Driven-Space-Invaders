#include <Location.h>

Location::Location( void )
{
}

Location::~Location( void )
{
}

Location::Location( const Location & rtg_arg )
    : X{ rtg_arg.X }
    , Y{ rtg_arg.Y }
    , id{ rtg_arg.id }
{
}

Location & Location::operator=( const Location & rtg_arg )
{
    if( this != &rtg_arg )
    {
        X = rtg_arg.X;
        Y = rtg_arg.Y;
        id = rtg_arg.id;
    }
    return *this;
}

void Location::set_X( int value )
{
X = value;
}

int Location::get_X( void )
{
return X;
}

int Location::get_Y( void )
{
return Y;
}

void Location::set_Y( int value )
{
Y = value;
}

void Location::set_id( int value )
{
id = value;
}

int Location::get_id( void )
{
return id;
}

