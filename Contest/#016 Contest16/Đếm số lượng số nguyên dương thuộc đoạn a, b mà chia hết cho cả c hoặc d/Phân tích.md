# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/aa170070-a670-4de2-8d94-69f84af9d630)

# Phân tích
```
Ta đi tính: 
- Số số hạng chia hết cho c trong đoạn từ a đến b

- Số số hạng chia hết cho d trong đoạn từ a đến b

- Số số hạng chia hết cho cả c và d trong đoạn từ a đến b
(Tức là số bcnn của c, d có trong đoạn a, b)

Ta đếm tổng số số hạng chia hết cho 2 số c hoặc d trong đoạn a, b rồi trừ đi số số chia hết cho BCNN của c và d,
vì các số đó chỉ có thể tính 1 lần, nhưng khi tính toán thì những số đó lại được tính 2 lần nên cần trừ đi 1 lần:
là số số hạng chia hết cho BCNN của c và d.

```
