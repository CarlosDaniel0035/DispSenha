# ifndef CONFIG_H
# define  CONFIG_H


// CONFIG1
# pragma config FOSC = INTRC_NOCLKOUT // Bits de seleção do oscilador (oscilador INTOSCIO: função I / O no pino RA6 / OSC2 / CLKOUT, função I / O no RA7 / OSC1 / CLKIN)
# pragma config WDTE = OFF // Bit de habilitação do temporizador de watchdog        (WDT desabilitado e pode ser habilitado pelo bit SWDTEN do registro WDTCON)
# pragma config PWRTE = OFF        // Bit de ativação do temporizador de inicialização (PWRT ativado)
# pragma config MCLRE = OFF       // RE3 / bit de seleção de função do pino MCLR (a função do pino RE3 / MCLR é uma entrada digital, MCLR internamente ligado ao VDD)
# pragma config CP = OFF          // Bit de proteção de código (a proteção do código de memória do programa está desativada)
# pragma config CPD = OFF         // Bit de proteção de código de dados (a proteção de código de memória de dados está desativada)
# pragma config BOREN = OFF       // Brown Out Reset bits de seleção (BOR desabilitado)
# pragma config IESO = OFF // Bit de switchover externo interno (modo de switchover        interno / externo está desabilitado)
# pragma config FCMEN = OFF // Bit habilitado do Monitor de relógio à prova de falhas (o Monitor de relógio à prova de       falhas está desabilitado)
# pragma config LVP = OFF         // Bit de habilitação de programação de baixa tensão (o pino RB3 tem E / S digital, HV em MCLR deve ser usado para programação)

// CONFIG2
# pragma config BOR4V = BOR40V // Bit de seleção    Brown-out Reset (Brown-out Reset definido para 4,0V)
# pragma config WRT = OFF         // Bits de habilitação de gravação automática da memória do programa Flash (proteção contra gravação desligada)

# define  _XTAL_FREQ  4000000

# endif 