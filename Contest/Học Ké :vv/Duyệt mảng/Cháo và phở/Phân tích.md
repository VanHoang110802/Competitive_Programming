# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/4d9ed2b2-8e50-4ed1-8b45-d72a4b128951)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/d8db2969-1e5a-480f-874f-0d5a5dfc4ce5)


# Phân tích
```
Ta nhìn vô đề biết được rằng, người khách đầu tiền chắc chắn sẽ được phục vụ (n > 0, m > 0)
Ta có thêm mảng x để dánh dấu xem người khách còn ở trong quán hay đã rời quán rồi(0 - chưa rời, 1 - đã rời)
Ta bắt đầu xem xét tiếp bắt đầu từ người thứ 2 đổ đi, để rõ hơn ta hình dung cái bảng như này:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f697b9a4-eb63-45e9-814d-722f52b4b5c7)

```
i là khách
ti là thời gian đến
di là thời gian ăn
ai là món ăn

Thì ta sẽ xét tất cả những người khách trước đó, người khách đến trước i là j (1 -> i - 1)
Theo đề bài thì ti là luôn luôn tăng dần
Thì bây giờ, chúng ta sẽ duyệt nhưng ông khách này xem là: những khứa khách này đã rời quán hay là còn đang ăn?
Nếu mà ăn thì khứa này ăn xong chưa? Nếu xong rồi thì ta sẽ tích lũy lại số thìa với số đũa để phục vụ cho người i
tiếp theo
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/cf845a6c-4871-48f2-b26f-90f7f89cc151)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/150bbe33-bb21-4743-b89e-abef4c721edb)

```
Tuy nhiên, bài này có thể áp dụng được cả priority_queue vẫn có thể AC được. Có thể xem mẫu thử ở phần main2.
```
