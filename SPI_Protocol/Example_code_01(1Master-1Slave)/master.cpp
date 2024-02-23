/**
 * @file master.cpp
 * @author Kien Nguyen
 * @brief chương trình giao tiếp SPI dành cho master để giao tiếp với 1 slave
 * @version 0.1
 * @date 2024-02-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

/**
 * @brief macro cac chân đã kết nối trên vi điều khiển
 * 
 */
#define SCK_PIN 4
#define MOSI_PIN 5
#define MISO_PIN 6
#define SS_PIN 7


/**
 * @brief Cấu hình trực tiếp thanh ghi 
 * Biến "DDRD" là viết tắt của "Data Direction Register D", là thanh ghi điều khiển hướng dữ liệu cho cổng D.
 * |=: Toán tử "hoặc" bitwise.
 * (1 << DDD4): Biểu thức này dịch chuyển bit 1 sang trái 4 vị trí, tương ứng với vị trí của chân D4 trong thanh ghi DDRD.
 * Tương tự cho các macro còn lại
 * 
 */
#define SCK_OUTPUT DDRD |= (1 << DDD4)
#define MOSI_OUTPUT DDRD |= (1 << DDD5)
#define SS_OUTPUT DDRD |= (1 << DDD7)
#define MISO_INPUT DDRD &= ~(1 << DDD6)


void setup()
{

}


int main()
{
    return 0;
}
