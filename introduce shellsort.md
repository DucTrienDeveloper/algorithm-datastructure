# Shell sort :
# Cách thức hoạt động :Thuật toán shell sort hoạt động dựa trên so sánh các phần tử dựa trên khoảng cách (chỉ quan tâm tới khoảng cách )đúng vậy thuật toán này chỉ quan tâm tới khoảng cách nó không giống như quick sort là thuật toán chia để trị . Thuật toán này so sánh 2 phần tử với nhau nhưng ở giữa chúng có 1 khoảng cách nhất định.Thông thường ta sẽ lấy khoảng cách giữa 2 phần tử được so sánh là 1 nửa số phần tử của mảng sau đó khoảng cách giữa các phần tử so sánh sẽ giảm dần qua từng đợt.
![shell_sort_gap_4](https://user-images.githubusercontent.com/89003971/130934290-74c33785-5de0-476c-95f9-f95e4a117cf5.jpg)
# Khoảng cách ở đây có thể thấy là bằng 4
![shell_sort_gap_2](https://user-images.githubusercontent.com/89003971/130934349-7d54d4e1-1219-4af7-a50d-b3ef53d1efb0.jpg)
# Khoảng cách đã giảm xuống còn nửa
![shell_sort](https://user-images.githubusercontent.com/89003971/130934642-4e450b00-0d08-4dfa-863d-758f081d8536.jpg)
# Khoảng cách nhỏ nhất cũng chính là lúc khoảng cách không thể nhỏ hơn được nữa : Khoảng cách =1
