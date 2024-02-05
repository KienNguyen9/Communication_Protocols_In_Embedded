<h1>Kho lưu trữ các giao thức trong lập trình nhúng</h1>

<h2>UART Communication Protocol</h2>

Nguyên tắc cơ bản trong truyền thông nối tiếp UART, định dạng khung UART (format UART frames)

<h2>UART là gì?</h2>

- UART là viết tắt của "Universal asynchronous receiver/transmitter". Hay tạm gọi là phương thức giao tiếp đồng bộ hay giao thức hoặc một bộ quy tắc trao đổi dữ liệu nối tiếp.
- Protocol for exchanging serial data between two devices. Phương thức giao tiếp nối tiếp giữa HAI thiết bị
- Uses only two wires. Là phương thức giao tiếp đơn giản chỉ dùng hai dây để giao tiếp. 
- TX & RX (each direction)
- Can be simplex, half-duplex or full-duplex. 
    - Simplex: dữ liệu chỉ được gửi theo 1 hướng
    - Half-duplex (bán song công): mỗi bên sẽ truyền nhận lần lược, bên này truyền bên kia nhận khi kết thúc thì bên kia truyền bên này nhận.
    - Full-duplex (song công): 2 bên sẽ truyền dữ liệu đồng thời
- Data is transmitted as frames: dữ liệu sẽ được truyền theo dạng khung. Quan trọng ở chỗ định dạng frames và nội dung của frames 

<h2>UART được dùng ở đâu?</h2>

- UART là một trong nhưng phương thức giao tiếp nối tiếp lâu đời nhất trên thế giới
    -   Hầu hết các phương thức giao tiếp nối tiếp mà chúng ta thấy dựa trên nền tảng của UART (ví dụ như: Serial (COM) Port, RS-232, Modems, etc.)
- Trong nhưng năm gần đây độ phổ biến của UART đã giảm đi 
    - Do sự phát triển của SPI, I2C để giao tiếp giữa các bộ phận(between components)
    - Và do hiện nay các máy tính sẽ giao tiếp với các ngoại vi như chuột, bàn phím, các loại caple khác qua Ethernet hoặc USB. Ethernet and USB between computers and peripherals
- Tuy nhiên UART vẫn rất quan trọng cho việc truyền dữ liệu ở tốc độ thấp, các ứng dụng lưu thông thấp bởi vì nó rất đơn giản, chi phí thấp và dễ thực hiện. Still important for lower-speed, low-throughput applications.

