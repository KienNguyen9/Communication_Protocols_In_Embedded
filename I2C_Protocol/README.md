# I2C protocol 

I2C là một giao thức truyền thông nối tiếp đồng bộ, sử dụng 2 dây tín hiệu để kết nối giữa các vi điều khiển và các thiết bị ngoại vi

## Đặc điểm của I2C

- Sử dụng 2 dây tín hiệu: `SDA` - Serial Data và `SCL` - Serial Clock
- Giao tiếp kiểu Master - Slave: 1 thiết bị Master điều khiển `bus` I2C và giao tiếp với các Slave
- Hỗ trợ nhiều thiết bị trên cùng một `bus`: mỗi thiết bị slave có một địa chỉ riêng biệt
- Tốc đọ truyền dữ liệu thấp: tốc độ truyền dữ liệu tiêu chuẩn là 100 kbps, 400 kbps và 1mbps
- Đơn giản và dễ sử dụng (hơn so với SPI)

