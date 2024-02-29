# Đề bài

# Phân tích
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/acd63e02-f232-4739-9efc-a40a4c6676b2)

```
Cách đơn giản nhất: duyệt trâu
O(T * (b - a + 1) * b)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/2e067616-2192-480e-a672-d8d552e5e752)

```
Cách khác: chúng ta vẫn giữ nguyên tư tưởng của cách trên, xây dựng mảng C[i] là số lượng
các giá trị x thuộc [1, i] mà x có số lượng ước là số nguyên tố
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/90a79ec3-8594-4c89-9baa-35c849791776)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/666ec460-5dc7-4470-8e05-fbc5fd34e61b)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/566c499c-fe3f-4a99-9f6f-d57896252cfa)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/a96b36fc-16f7-4e18-9e0b-5a535b268222)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/89080986-e491-4805-a4d6-6271fbf983a2)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/055c8b2d-0189-4b8d-80e0-659b1cb5b283)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/6e323e38-6057-4e2b-a1ee-2ce220c6aef6)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/0a492c1f-496f-4352-9089-12cbe4bd3dc9)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/86f5ec39-f55f-4bd7-8e2d-36c23f3cb888)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/9dc3296f-4518-442b-9670-47756a8332db)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/8a6e0bd9-ecab-4e92-a11f-c73c39bd6eac)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/534147e4-79f4-437e-89cc-5288cb8b57cb)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/9607363e-1c0f-4158-9f31-c03a48257ce1)

```
Gọi d là số lượng các ước của x:
d nguyên tố <=> d = 2 hoặc d là số lẻ
khi mà nếu d = 2 -> x là số nguyên tố, còn nếu d là lẻ thì -> x là số chính phương
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/1a6e0ac8-f75b-444d-8a79-d68605d2f424)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/b038b7bf-4a93-480e-9815-794d87d5019b)

```
Ta duyệt mảng c từ 2 -> 10^6
nếu i là nguyên tố (nguyên tố thì dùng sàng) thì c[i] = 1
ngược lại i là số chính phương thì đi đếm các ước của i (d = số lượng ước của i)
Kiểm tra nếu d là nguyên tố thì c[i] = 1
ngược lại thì c[i] = 0, rồi xây dựng hàm đếm ước
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/3c7f8110-0e4b-4a17-8843-e3459246ebd1)

```
Lúc này, đi phân tích n thành tích thừa số nguyên tố
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/1f74ba53-b41e-41b2-a393-91fa3cab2cb0)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/0fce460e-e5ab-4e1a-a851-b56c46051ff5)





