# Đề bài
![1](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/69e54588-37b3-4ab5-80a1-3a32bb2b7934)
![2](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/a5118ef5-95ae-4714-9ab8-89fea2a8ba53)

# Phân tích
Người ta cho mình 1 chiếc bánh, một ma trận n x m, nghĩa là, bây giờ mình sẽ phải đếm số ô mà:
- (1) hoặc nguyên cái dòng đó không có quả dâu nào
- (2) hoặc nguyên cái cột đó không có quả dâu nào
- (3) nếu mà cột hoặc dòng đó đã được đếm rồi thì sẽ không được đếm thêm nữa (tức là
chỉ được tính mỗi ô đếm 1 lần mà thôi)

```
S... 
.... 
..S.
```

- dòng 1 có S (là quả dâu) nên dòng 1 sẽ không đếm
- dòng 2 không có S, đếm được = 4 (*)
- dòng 3 có S nên sẽ không đếm
- cột 1 có S nên sẽ không đếm
- cột 2 không có S nên đếm được 2, vì ở cột 2 dòng 2 đã được đếm ở (*) rồi
- cột 3 có S nên sẽ không đếm
- cột 4 không có S nên đếm được 2, vì ở cột 4 dòng 2 đã được đếm ở (*) rồi 
--> tổng đếm được là 8

```
S101 
1111 
01S1
```
