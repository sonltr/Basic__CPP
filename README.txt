Tác giả: NGUYỄN VĂN SƠN
Email: vanson.ltrinh@gmail.com

Chương trình được viết trên IDE: Microsoft Visual Studio Community 2019

Mục đích chương trình: 	
	Xây dựng chương trình hỗ trợ thông báo cho lái xe, 
	nhập id để để mở khóa xe và nổ máy, mô tả chức năng 
	chuyển đổi cần số, điều khiển vận tốc ô tô và cảnh báo tốc độ

Các chức năng chính:
1. Tính năng đăng nhập, Chức năng này tương đương với việc mở khóa xe và nổ máy.
	nhập chuỗi string trùng với chuỗi có sẵn
2. Chức năng cảnh báo:
  	+ Cảnh báo tốc độ cao (tốc độ lớn hơn 60km/h với D hoặc 20km/h với R)
  	+ Cảnh báo chuyển đổi cần số
	Cảnh báo không thể về số N/P khi xe chưa dừng hẳn.
	Cảnh báo không thể chuyển đổi trực tiếp R<->D khi xe vẫn còn di chuyển
3. Đưa ra lựa chọn sử dụng cần số để thay đổi số (R:Lùi/N:Tạm dừng/D:Tiến/P:Đỗ xe) 
   và điều khiển tốc độ (tăng/giảm tốc độ, phanh)
	+ Số P: Tức là đưa xe về chế độ đỗ xe. Ở chế độ này hộp số sẽ ở chế độ P và bánh xe sẽ bị bó cứng
	+ Số N: Cũng là đưa xe về chế độ đỗ xe. Chỉ khác số P là bánh xe không bị bó cứng, nếu không sử dụng phanh thì ô tô sẽ bị trôi
	+ Số R: Đơn giản là để số lùi
	+ Số D: Đơn giản là số tiến
4. Tắt máy (khi lựa chọn tắt máy) và đưa ra thông báo chào tạm biệt
