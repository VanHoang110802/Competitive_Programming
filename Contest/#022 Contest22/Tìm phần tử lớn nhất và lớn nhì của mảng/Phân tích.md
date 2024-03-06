# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/4b78897e-6c8a-4a39-8e7f-a6c9be34135a)

# Phân tích
```
Dùng set lưu trữ các phần tử theo thứ tự tăng dần, nếu:
 size của set = 1 và n = 1 -> -1, -1
 size của set = 1 và n > 1 -> -1, max a[i]
 size của set > 1 và n > 1 -> max a[i], max a[i - 1]
```
