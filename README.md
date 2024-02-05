<h1>Kho lưu trữ các giao thức trong lập trình nhúng</h1>

<h2>UART Communication Protocol</h2>

<p>Nguyên tắc cơ bản trong truyền thông nối tiếp UART, định dạng khung UART (format UART frames)</p>

<h2>UART là gì?</h2>

<p>UART là viết tắt của "Universal asynchronous receiver/transmitter". Hay tạm gọi là phương thức giao tiếp đồng bộ hay giao thức hoặc một bộ quy tắc trao đổi dữ liệu nối tiếp.</p>
<p>Protocol for exchanging serial data between two devices. Phương thức giao tiếp nối tiếp giữa HAI thiết bị</p>
<p>Uses only two wires. Là phương thức giao tiếp đơn giản chỉ dùng hai dây để giao tiếp. </p>
<p>TX & RX (each direction)</p>
<p>Can be simplex, half-duplex or full-duplex.</p> 
    - Simplex: dữ liệu chỉ được gửi theo 1 hướng
    - Half-duplex (bán song công): mỗi bên sẽ truyền nhận lần lược, bên này truyền bên kia nhận khi kết thúc thì bên kia truyền bên này nhận.
    - Full-duplex (song công): 2 bên sẽ truyền dữ liệu đồng thời
<p>Data is transmitted as frames: dữ liệu sẽ được truyền theo dạng khung. Quan trọng ở chỗ định dạng frames và nội dung của frames </p>

<h2>UART được dùng ở đâu?</h2>

<p>UART là một trong nhưng phương thức giao tiếp nối tiếp lâu đời nhất trên thế giới</p>
    -   Hầu hết các phương thức giao tiếp nối tiếp mà chúng ta thấy dựa trên nền tảng của UART (ví dụ như: Serial (COM) Port, RS-232, Modems, etc.)
<p>Trong nhưng năm gần đây độ phổ biến của UART đã giảm đi</p> 
    - Do sự phát triển của SPI, I2C để giao tiếp giữa các bộ phận(between components)
    - Và do hiện nay các máy tính sẽ giao tiếp với các ngoại vi như chuột, bàn phím, các loại caple khác qua Ethernet hoặc USB. Ethernet and USB between computers and peripherals
<p>Tuy nhiên UART vẫn rất quan trọng cho việc truyền dữ liệu ở tốc độ thấp, các ứng dụng lưu thông thấp bởi vì nó rất đơn giản, chi phí thấp và dễ thực hiện. Still important for lower-speed, low-throughput applications.</p>

<h2>Về thời gian truyền và động bộ hóa dữ liệu. About timing / synchronization</h2>

<p>Một trong những ưu điểm lớn của UART là đồng bộ giữa thiết bị thu và phát. UART is synchronous - the transmitter and receiver do not share a common clock</p>
<p>The transmit and receiver therefore must:</p>
    - Transmit at the same (known) speed (the both sides have same baud rate) (để có được cùng `same bit timming`). Common UART baud rates 4800, 9600, 19200, 57600, 115200.
    - Use the same frame structure/parameters . Sau khi có cùng `baud rate` thì cũng cần phải có cùng cấu trúc và tham số khung

<h2>UART frame format</h2>

<p>Các khung UART chứa các: (UART frames consist of)</p>
    - `Start`/`Stop` bits : Bit bắt đầu và kế thức
    - `Data bits` : các bit dữ liệu
    - `Parity bit` Optional -  Bit chẵn lẻ (tùy chọn) 

2:30    