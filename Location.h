#ifndef Location_h
#define Location_h

#include <cstring>
struct RTFieldDescriptor;
class [[rt::auto_descriptor]] Location
{
public:
    static const RTFieldDescriptor rtg_Location_fields[];
private:
    int X;
    int Y;
    int id { 0 } ;
public:
    Location( void );
    virtual ~Location( void );
    Location( const Location & rtg_arg );
    Location & operator=( const Location & rtg_arg );
    void set_X( int value );
    int get_X( void );
    int get_Y( void );
    void set_Y( int value );
    void set_id( int value );
    int get_id( void );
};
#endif /* Location_h */
