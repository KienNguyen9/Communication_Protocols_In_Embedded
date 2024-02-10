// Khai báo các chân GPIO
#define RX_PIN  PORTBbits.RB1
#define TX_PIN  PORTBbits.RB2

// Hàm khởi tạo UART
void UART_Init() {
  // Baud rate = 9600 bps
  TXSTA1bits.BRGH = 1;
  SPBRG1 = 25;

  // 8 bit dữ liệu, không bit chẵn lẻ, 1 bit dừng
  TXSTA1bits.TX9 = 0;
  TXSTA1bits.TXEN = 1;
  RCSTA1bits.RX9 = 0;
  RCSTA1bits.SPEN = 1;

  // Cho phép ngắt nhận
  PIE1bits.RCIE = 1;
}

// Hàm gửi byte
void UART_SendByte(unsigned char byte) {
  while(!TXSTA1bits.TRMT); // Chờ cho đến khi buffer trống
  TXREG1 = byte;
}

// Hàm nhận byte
unsigned char UART_ReceiveByte() {
  while(!RCSTA1bits.RXIF); // Chờ cho đến khi nhận được byte
  return RCREG1;
}

// Hàm xử lý ngắt nhận
void interrupt ISR() {
  if(PIR1bits.RCIF) {
    // Xử lý byte nhận được
    unsigned char byte = RCREG1;
    
    // ...
  }
}

void main() {
  UART_Init();

  while(1) {
    // Gửi một byte
    UART_SendByte('A');
    
    // Nhận một byte
    unsigned char byte = UART_ReceiveByte();
    
    // ...
  }
}