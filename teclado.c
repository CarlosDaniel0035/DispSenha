#include <xc.h>

void teclado_init ( void )
{
    ANSELH = 0;
    TRISB = 0Xf0;
    PORTB = 0;
}

#define MASK 0b00010000
char tabTeclado [4] [4] ={ {'1','2','3','A'},
                          {'4','5','6','B'},
                          {'7','8','9','C'},
                          {'*','0','#','D'} };
char teclado ( void )
{
    char tecla = 0;
    char col, lin;
    
    for ( lin=0; lin<4; lin++ )
    {
        PORTB = 0x01<<lin; //0b00000001;
        for( col=0; col<4; col++ )
        {
            if ( PORTB & MASK<<col )
                tecla = tabTeclado[lin][col];
        }
    }
    return (tecla);
}