# Đề bài

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/8fbb6345-a33b-42ee-96b2-7a1533a1c184)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/22fbae6f-6881-4f99-98bf-9b2caa8b004d)


# Phân tích

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/a612e9f8-63b8-426e-b53d-9286f8b9ce85)
```
Sử dụng 1 biến phụ sẽ là chỉ số của quân bài trên cùng sau mỗi lượt rút của các bạn nhỏ
Ta đi khởi tạo bắt đầu là từ 1
Các bạn nhỏ sẽ lấy quân bài từ số 2 -> n, rồi so sánh với quân bài có giá trị là a[p]
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/bc91c0ae-7d00-46e5-82e3-492a81ef2485)

```
Nếu a[p] < a[i]:
+ Hs giữ lại thẻ bài i lại, in ra i
+ Đặt lại thẻ bài a[p] lên đỉnh của chồng thẻ (a[p] lúc này không có gì thay đổi, a[i] sẽ là a[i] tiếp theo)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/c7d45477-b8f9-4795-947e-2f43fc1c5c65)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/d6da3669-0ef2-4bb8-9f32-887f8750d96d)
```
Nếu a[p] > a[i]:
+ Hs giữ lại thẻ bài p lại, in ra p
+ Đặt lại thẻ bài a[i] lên đỉnh của chồng thẻ (a[p] lúc này sẽ thay đổi, p sẽ là i tiếp theo)
```

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/1dc95eac-9f72-4507-bf44-e81b2d74eb64)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/a1af2bf1-1090-4405-b42f-c959aa79c46e)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/d148a241-d564-481d-a83f-7de6b018bc44)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/6331dab8-ca1b-4072-a982-8a4e4e48d57b)

