# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/5150c5d0-5cc6-4e74-afd9-0dd486220114)

# Phân tích
- Do p < q < n nên không cần quan tâm n.
- Các số từ p -> q không thể chia hết cho bất kì số nào trong khoảng q + 1 -> n
-> Sau khi đổi trạng thái xong thì các bóng có số thứ tự là số chính phương sẽ bật

```
3 6 8
sqrt(6 - 3) = 1.73205080757
-> 2
```
```
2 11 12
sqrt(11 - 2) = 3
-> 3
```
- đem kết quả trừ đi 1 là xong
```
// Hàm làm tròn số: round(x)
```
