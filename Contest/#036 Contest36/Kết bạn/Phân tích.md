# Đề bài

# Phân tích
```
B1: Sắp xếp mảng tăng dần
B2: Xét giá trị a[i], trong đó i duyệt từ 2 -> n

```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/555464f7-e966-4477-92eb-7082a453aa95)

```
gọi biến d là số lượng giá trị j thuộc [1, i - 1] sao cho a[j] = B - a[i]
khi đó kết quả sẽ cộng thêm giá trị d vào
Ta sẽ xét ví dụ với giá trị a[i] = 5, lúc này j1 = 3, j2 = 3
Vì dãy sắp xếp tăng dần, thì chắc chắn đoạn các giá trị j sẽ nằm liên tiếp

```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/94031c0e-53b4-48a6-b2ea-2a2a6f921fa0)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/65d78c65-ca28-4a6a-98f6-ea0c7880c037)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/353c9a1f-1e60-46cf-b492-7c429bd2b730)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/2737fc4b-cd30-4172-b0d4-7f1a1e27179a)

