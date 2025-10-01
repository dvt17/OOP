# OOP

- struct mặc định là public nên sẽ có truy cập từ bên ngoài default: public
- class nếu không có public thì sẽ kh thể khai báo ở bên ngoài default: private
- Ngầm định (inplicit) >< Tường minh (explicit)
- Hàm khởi tạo(contructor) tự động gọi khi ta khởi tạo object
- Hàm hủy(distructor) được gọi khi hủy object (có dấu ~ đằng trước)
  - Cấp phát tĩnh sẽ bị sao sau khi ra khỏi scope của nó
  - Cấp phát động phải khởi tạo hàm hủy mới xóa được
- Hàm có static đằng trước thì không cần khởi tạo object, nó không gọi được đến biến thành viên, cần khởi tạo nó theo biến global
