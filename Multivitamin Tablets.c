#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b ;
        scanf ( "%d%d" , &a , &b ) ;
        if ( 3 * a <= b )
        {
            printf ( "YES\n" ) ;
        }
        else
        {
            printf ( "NO\n" ) ;
        }
    }
}