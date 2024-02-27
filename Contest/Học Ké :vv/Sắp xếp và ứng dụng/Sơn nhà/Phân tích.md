# Đề bài
![sonhouse](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/3d23076b-8770-462b-8921-129251288fcb)
![sonhouse2](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/92204b3d-5b02-4379-9b98-3d39b44412ef)

# Phân tích
```
Tìm độ dài của đoạn liên tiếp có màu giống nhau
Một đoạn liên tiếp có màu giống nhau có độ dài x thì số ngôi nhà cần sơn lại là [x/2]
Gọi F[i] là độ dài các ngôi nhà có màu giống nhau, kết thúc tại vị trí i
F[1] = 1
Duyệt từ ngôi nhà thứ 2 đổ đi, nếu như ngôi nhà thứ 2 có màu giống ngôi nhà đằng trước:
F[i] = F[i - 1] + 1
Ngược lại thì:
F[i] = 1
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/d9656e9e-e8fd-4af0-b550-be2bd554e7fe)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/86f8e60b-1d6e-4c85-94f5-992248c4c000)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/b8473fe1-07d2-4dcf-821f-4007030b9a32)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/451f8e3a-bc4d-47e8-ac5a-d8b28927d703)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/c176184e-1566-493c-b5bd-85d521c87fc0)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/ee7622f5-9056-49a6-93e9-963f23fcfa68)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/14132cf8-de8f-415d-873b-ced790f8075d)

```
Thì ta có thể thấy được cái vị trí cuối cùng của mỗi đoạn giống nhau nó chính là độ dài của đoạn
màu giống nhau ấy
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f82ea972-db48-4282-acf4-2c2c4f3bc7fe)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/df75aea1-82f0-4cf5-a4d8-a3ee0ed9ded6)




