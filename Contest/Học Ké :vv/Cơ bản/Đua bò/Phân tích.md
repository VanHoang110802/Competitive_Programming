# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/ac667527-2279-4fe5-9850-eca0b2955ea9)

# Phân tích

```
9
7 1 4 1 1 1 4 7 7
```

```
Ta sẽ thấy có 4 số 1. Ta có thể xếp nó được như sau:

1 - 1
| X |
1 - 1

Cnt[1] = 4
1 số 1 sẽ có thể nối được 3 số 1 còn lại, thành ra sẽ có 3 cặp
-> 4 số 1 -> Có tất cả 3 x 4 = 12 cặp
Tuy nhiên, sẽ có trường hợp trùng nhau, ta sẽ loại bỏ 1 nửa các trường hợp trùng nhau đi:
4 x 3 / 2
```

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/6d57abd7-254d-4cff-b29c-c918863dd0cb)

```
Thực chất đây chính là toán tổ hợp.
```

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/bbe337ef-14e4-43d9-bbf8-7b43d667e298)

