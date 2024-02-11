# SPI - Serial Peripheral Interface

SPI - Serial Peripheral Interface: là "giao diện ngoại vi nối tiếp đồng bộ". Giao thức SPI cho phép truyền dữ liệu nhanh chóng và tin cậy giữa các thiết bị trong hệ thống điện tử.

## Đặc điểm: 

- Truyền dữ liệu đồng bộ: dữ liệu được truyền theo từng bit, đồng bộ với xung nhịp SCK
- Kết nối đơn giản: Chỉ cần 4 chân tín hiệu chung cho tất cả các thiết bị
    - MOSI (Master out Slave in): Master truyền Slave nhận
    - MISO (Master in Slave out):  Master nhận Slave truyền
    - SCK (Serial Clock): Xung nhịp đồng hồ cho quá trình truyền nhận
    - SS (Slave Select): Chọn Slave cụ thể để giao tiếp
- Hỗ trợ nhiều thiết bị: Master có thể giao tiếp với nhiều Slave trên cùng một bus SPI
- Tốc độ truyền dữ liệu cao: Tùy thuộc vào phần cứng và cấu hình SPI có thể đạt tới tốc độ lên đến hàng MB trên giây

## Ứng dụng:

- SPI được sử dụng rộng rãi trong các hệ thống nhúng để kết nối với nhiều loại thiết bị ngoại vi, bao gồm:

    - Bộ nhớ flash: Thẻ nhớ SD, EEPROM, SPI Flash.
    - Cảm biến: Cảm biến nhiệt độ, gia tốc kế, con quay hồi chuyển.
    - Bộ mã hóa/giải mã: ADC, DAC.
    - Màn hình LCD: Màn hình LCD đồ họa, màn hình OLED.
    - Thiết bị ngoại vi khác: RFID, Bluetooth, WiFi.