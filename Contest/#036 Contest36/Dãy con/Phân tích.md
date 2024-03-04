# Đề bài
![daycon](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/740f4036-3862-4d6c-be85-db99c7d59410)

# Phân tích
```
Trong bài này thì sẽ luôn có đáp án. Và đáp án sẽ nằm trong [1, n]
Nghĩa là, trong trường hợp nhỏ nhất sẽ có ans = 1
Còn trường hợp lớn nhất ans = n
Lúc này ta xác định được phạm vi, nên ta sẽ gán L = 1, R = n

```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f1382fae-34da-4456-82e4-a68c0dd15f3b)

```
Nếu check mid == true, tức là có độ dài dãy con rồi, mà ta cần dãy phải ngắn nhất có thể
Lúc này cần phải giảm độ dài mid xuống, còn nếu mà giảm xuống mà nó không tồn tại được 1
dãy con thỏa mãn, ta phải tạo 1 đoạn dãy con khác
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/a76ee5a2-ac20-4b74-9d92-9c3728ab1f11)

```
Xét ví dụ của đề bài đi:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/9811661b-17c8-4554-ba66-9d710832f1bf)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/cc8b2eae-3b01-40c5-ae23-ccc9ef5c85dc)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/958b1339-4342-4d14-98ab-968fb0287a92)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/ae403685-3f6d-4d22-a612-12d6da481aeb)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/4396b066-d77b-4be7-8fba-de7175eb99eb)

