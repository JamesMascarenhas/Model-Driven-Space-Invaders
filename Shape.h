#ifndef Shape_h
#define Shape_h

#include <cstring>
struct RTFieldDescriptor;
class [[rt::auto_descriptor]] Shape
{
public:
    static const RTFieldDescriptor rtg_Shape_fields[];
private:
    int x;
    int y;
    int w;
    int h;
    int g { 0 } ;
    int b { 0 } ;
    int r { 0 } ;
public:
    Shape( void );
    virtual ~Shape( void );
    Shape( const Shape & rtg_arg );
    Shape & operator=( const Shape & rtg_arg );
    void set_x( int value );
    int get_X( void );
    int get_Y( void );
    void set_y( int value );
    int get_h( void );
    int get_w( void );
    void set_h( int value );
    void set_w( int value );
    int get_r( void );
    int get_g( void );
    int get_b( void );
    void set_r( int value );
    void set_g( int value );
    void set_b( int value );
    void setInvisible( int argx, int argy, int argw, int argh );
    void setVisible( int argx, int argy, int argw, int argh, int argr, int argg, int argb );
};
#endif /* Shape_h */
