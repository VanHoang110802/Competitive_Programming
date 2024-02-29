# Đề bài
![bonus1](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/b988ce58-d281-4137-93c1-f3c9af13f5f2)
![bonus2](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/26ba7f39-bad5-4a71-8e85-2c2f5552d64f)
![bonus3](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f50a1d16-cad3-4c87-b651-37dba2236534)

# Phân tích
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/0541088a-9afd-4b55-976e-56f7c97a20b7)
```
Người ta muốn mình tìm hình chữ nhật con có tổng lớn nhất
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/4a37308d-8ced-49da-be35-5224b603eea5)

```
Đề bài cho n, m <= 10^5, chắc chắn sẽ không tạo được mảng 2 chiều với số kích thước lớn như vậy được.
Chính vì vậy, ta đành phải xử lý trên mảng 1 chiều
Giả sử ta có mảng sau:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/4e733311-315e-4bd3-859c-15f52175ace5)

```
Với mỗi 1 chấm, ta có được các phép cộng với nhau:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/fc9d1a0d-392f-4d75-b400-097ad306d4cb)

```
Rồi ta đem đi phá ngoặc, cộng hết tất cả giá trị lại
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/077ce936-0e1a-4b79-8b2c-c984a470bfdf)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/e22a5dfc-94a0-4736-95c1-eb3a18665dfe)

```
w = 3, h = 4
Khi mà ta sẽ hình dung, nếu mà kéo hình chữ nhật sang 1 bên vùng khác thì công thức nó cũng như vậy
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/5b468c18-d90a-4dcb-8aeb-6f9b0295909a)

```
Như vậy, bài toán lúc này trở thành: tìm giá trị lớn nhất có:
h phần tử * w phần tử liên tiếp + w phần tử * h phần tử liên tiếp
Tức là tìm đoạn con liên tiếp có w phần tử dãy 1 có tổng lớn nhất, tìm đoạn con có h phần tử dãy 2 có tổng lớn nhất
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/82b6a500-b18b-4ed9-9a4c-35dfffbd1c4b)

```
Vậy thì lúc này, ta có được bài toán con là tìm tổng đoạn con liên tiếp của tổng lớn nhất trên 2 dãy a, b
Dùng kĩ thuật trượt sổ trượt
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/e1fa529a-74b4-4575-96f8-2e99307f2e29)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/0b578f95-8886-45ba-a4b0-bff9f178c07f)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/ae1d6a44-32ec-448f-a7c1-8481926cb75d)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/72a90e14-c052-4b6f-b944-3b5b9442a9c7)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/1ea84e31-7810-4baf-b980-1ca94f36dbe8)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/af3fb5ad-cdec-432f-ba66-22bf8f3a7e05)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/91000a00-78d6-4434-868e-55922c92be49)



