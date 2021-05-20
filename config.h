# ifndef CONFIG_H
# define  CONFIG_H


// CONFIG1
# pragma config FOSC = INTRC_NOCLKOUT // Bits de sele��o do oscilador (oscilador INTOSCIO: fun��o I / O no pino RA6 / OSC2 / CLKOUT, fun��o I / O no RA7 / OSC1 / CLKIN)
# pragma config WDTE = OFF // Bit de habilita��o do temporizador de watchdog        (WDT desabilitado e pode ser habilitado pelo bit SWDTEN do registro WDTCON)
# pragma config PWRTE = OFF        // Bit de ativa��o do temporizador de inicializa��o (PWRT ativado)
# pragma config MCLRE = OFF       // RE3 / bit de sele��o de fun��o do pino MCLR (a fun��o do pino RE3 / MCLR � uma entrada digital, MCLR internamente ligado ao VDD)
# pragma config CP = OFF          // Bit de prote��o de c�digo (a prote��o do c�digo de mem�ria do programa est� desativada)
# pragma config CPD = OFF         // Bit de prote��o de c�digo de dados (a prote��o de c�digo de mem�ria de dados est� desativada)
# pragma config BOREN = OFF       // Brown Out Reset bits de sele��o (BOR desabilitado)
# pragma config IESO = OFF // Bit de switchover externo interno (modo de switchover        interno / externo est� desabilitado)
# pragma config FCMEN = OFF // Bit habilitado do Monitor de rel�gio � prova de falhas (o Monitor de rel�gio � prova de       falhas est� desabilitado)
# pragma config LVP = OFF         // Bit de habilita��o de programa��o de baixa tens�o (o pino RB3 tem E / S digital, HV em MCLR deve ser usado para programa��o)

// CONFIG2
# pragma config BOR4V = BOR40V // Bit de sele��o    Brown-out Reset (Brown-out Reset definido para 4,0V)
# pragma config WRT = OFF         // Bits de habilita��o de grava��o autom�tica da mem�ria do programa Flash (prote��o contra grava��o desligada)

# define  _XTAL_FREQ  4000000

# endif 