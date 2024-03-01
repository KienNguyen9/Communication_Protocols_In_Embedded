# CAN PROTOCOL - Controller Area Network Protocol

Giao thức CAN (Controller Area Network) là một mạng truyền thông `nối tiếp` hỗ trợ các hệ thống điều khiển `thời gian thực`. 
Nó là một bus truyền tải số (broadcast digital bus) với nhiều Master, cho phép liên kết tới 2032 thiết bị trên một mạng duy nhất với tốc độ truyền thông tốc độ cao lên đến `1 Mbits / giây`.

## Đặc điểm chính của giao thức CAN:

Hệ thống giao tiếp gói dữ liệu (message base system): 
Mỗi thiết bị (node) được gán cho một ID. 
Khi một node muốn truyền dữ liệu, nó sẽ tạo ra một gói tin (message) chứa ID của node và dữ liệu cần truyền. 
Gói tin này sẽ được gửi đi trên bus và tất cả các node khác trên bus đều có thể nhận được.

Khả năng chống nhiễu cao: CAN sử dụng phương pháp truyền dẫn vi sai (differential signaling) giúp giảm thiểu nhiễu điện từ.

Khả năng phát hiện lỗi và sửa lỗi: CAN sử dụng mã kiểm tra lỗi (CRC) để phát hiện lỗi trong quá trình truyền dữ liệu. Nếu lỗi được phát hiện, CAN sẽ tự động yêu cầu truyền lại dữ liệu.

Tiết kiệm chi phí: CAN chỉ sử dụng hai dây dẫn để truyền dữ liệu, giúp tiết kiệm chi phí so với các hệ thống truyền thông khác.