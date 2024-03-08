# Đề bài

# Phân tích
```
Bài này cách cơ bản nhất là sẽ dùng 3 vòng lặp for để duyệt từng i, j, k
rồi đem các phần tử tính theo đề yêu cầu, lấy max kết quả là được. O(N^3)

Ta có cách tối ưu hơn: Dùng hai con trỏ O(n * logN)
Chúng ta sử dụng hai con trỏ j và k để duyệt qua mảng.
Nếu giá trị của biểu thức a[i] + a[j] - a[k] là âm, chúng ta giảm k để tăng giá trị.
Nếu giá trị là dương, chúng ta tăng j để giảm giá trị.
Lưu giá trị lớn nhất vào biến max rồi in max.
Cách này giúp giảm độ phức tạp thời gian rất nhiều so với việc sử dụng ba vòng lặp lồng nhau.
```
