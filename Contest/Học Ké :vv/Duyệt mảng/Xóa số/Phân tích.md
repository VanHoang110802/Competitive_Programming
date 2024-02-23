# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/c82c634a-7be0-44ca-886e-062c56fdaf7c)

# Phân tích
```
Trước hết, ta cứ làm cách đơn giản trước để cho dễ dàng hình dung hơn:
S = a1 + a2 + .. + an
Ta cứ xét mọi cặp (i, j), rồi xóa chúng ra khỏi dãy <==> (S = S - ai - aj)
Check nếu S % 2 == 0 thì đếm sẽ được tăng lên
O(n^2)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/b6a12e55-55a5-4225-be2a-e3febffe6585)

```
Ta sẽ chia được với 2 trường hợp với S là: Chẵn - Lẻ
```
```
- TH Chẵn:
+ Loại ai, aj cùng lẻ
+ Loại ai, aj cùng chẵn
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/40e90fd6-785a-4297-ad0e-53a4460103cd)

```
Lúc này, bài toán sẽ trở thành là có bao nhiêu cách chọn 2 số trong d1 số lẻ,
hoặc là có bao nhiêu cách chọn 2 số trong d2 số chẵn

số trường hợp lẻ = d1 * (d1 - 1) / 2
số trường hợp chẵn = d2 * (d2 - 1) / 2
ans = số trường hợp lẻ + số trường hợp chẵn
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/168ca644-03cb-4e44-9fb3-8c30fabcf8d6)

```
- TH Lẻ:
+ Loại ai, aj khác tính chất chẵn lẻ: tức là 1 số lẻ, 1 số chẵn
Với mỗi 1 giá trị bên tập số lẻ, sẽ có được d2 cách lấy số bên chẵn

-> d1 * s2
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/9d7c9703-1525-42e5-bd63-fd1f2fe03f27)

```
Vậy, các bước làm như này:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/e4eb2705-bc54-4c7b-8bcf-5ba3eb7d20ca)
