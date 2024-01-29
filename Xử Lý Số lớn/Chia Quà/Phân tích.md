# Đề bài
![1](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/2633f5a9-66f8-4d6a-b1ca-25c882b0e9ff)
![2](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/5b5747ec-bbf4-4bf2-9e3c-3838f16f0a9f)


# Phân tích
```
Đầu tiên mình sẽ để ý tới cái input. Ta thấy 2 số này có thể
chia hết cho nhau được. -> Mình sẽ đi tìm ước chung lớn nhất
của chúng. Sau khi tìm được cái số ước chung của nó rồi thì
mình sẽ coi số đó là N đi. Duyệt từ 1 -> N để đếm số ước của
nó là ra kết quả bài toán cần tìm.

6 18
__gcd(6, 18) = 6
duyệt các ước từ 1 -> 6 có 1, 2, 3, 6 -> đếm được 4 ước -> ans = 4

12 8
__gcd(12, 8) = 4
duyệt các ước từ 1 -> 4 có 1, 2, 4 -> đếm được 3 ước -> ans = 3
```
