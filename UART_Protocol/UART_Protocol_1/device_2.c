// Khai báo các chân GPIO
#define RX_PIN  PORTBbits.RB3
#define TX_PIN  PORTBbits.RB4

// Hàm khởi tạo UART
void UART_Init() {
  // Baud rate = 9600 bps
  TXSTA2bits.BRGH = 1;
  SPBRG2 = 25;

  // 8 bit dữ liệu, không bit chẵn lẻ, 1 bit dừng
  TXSTA2bits.TX9 = 0;
  TXSTA2bits.TXEN = 1;
  RCSTA2bits.RX9 = 0;
  RCSTA2bits.SPEN = 1;

  // Cho phép ngắt nhận
  PIE2bits.RCIE = 1;
}

// Hàm gửi byte
void UART_SendByte(unsigned char byte) {
  while(!TXSTA2bits.TRMT); // Chờ cho đến khi buffer trống
  TXREG2 = byte;
}

// Hàm nhận byte
unsigned char UART_ReceiveByte() {
  while(!RCSTA2bits.RXIF); // Chờ cho đến khi nhận được byte
  return RCREG2;
}

// Hàm xử lý ngắt nhận
void interrupt ISR() {
  if(PIR2bits.RCIF) {
    // Xử lý byte nhận được
    unsigned char byte = RCREG2;
    
    // ...
  }
}

void main() {
  UART_Init();

  while(1) {
    // Gửi một byte
    UART_SendByte('B');
    
    // Nhận một byte
    unsigned char byte = UART_ReceiveByte();
    
    // ...
  }
}