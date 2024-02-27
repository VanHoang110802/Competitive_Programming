# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/9a88d503-dabb-4931-a0b4-30c1a9eedf56)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/e4446401-b12f-446a-919a-b2cf47963253)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/2d6b533f-b7f5-46cd-a634-710a4a931011)

# Phân tích
```
Tìm dãy con sao cho tổng của đoạn đó >= p
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/2aec3edb-0cd6-4777-8d46-19da7c5632a2)

```
Cách 1: Dùng mảng tổng dồn với for lồng nhau O(n^2)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/30cde3fa-ce5c-4402-b01f-b6235973dfd2)

```
Cách 2: Dựa vào cách 1, vẫn dùng mảng cộng dồn, nhưng ta có thể mảng nữa để lưu chỉ số của giá trị
nhỏ nhất trong dãy s
Ta luôn muốn rằng cái hiệu này nó phải càng lớn càng tốt: s[r] - s[l - 1], mà khi mà cái hiệu này nó
càng lớn thì khả năng hiệu này chắc chắn sẽ lớn hơn p. Cho nên, để được như thế thì cái giá trị s[l - 1]
nó chắc chắn phải là min.
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/66fda02b-6068-400e-a18d-06dedd581231)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f5b25bba-a34a-4fd4-b7b5-e4e000668918)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/ee758742-e34e-42fe-8d96-73244acd15f2)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/6cea246b-e48e-4090-a394-0c56aeac6845)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f5fbc592-30a6-417c-b46a-6de62fb5f483)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/e0117c73-0287-4700-8be7-f6007894ff5f)

```
Giá trị l thỏa mãn yêu cầu: min[l] = l
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/9ae0e1b9-e5b7-4cbc-be7a-d5e7e6ca9476)

```
Tuy nhiên, khi mà giá trị i lại duyệt ngược lại về 1 lần nữa, có nghĩa là biết đâu đằng trước i,
lại có 1 giá trị nào đó lại thỏa mãn hơn nữa thì sao, thì như này cái độ phức tạp nó lại vẫn trở
thành độ phức tạp O(n^2)
```


