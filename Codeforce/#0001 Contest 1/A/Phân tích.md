Ma trận đẹp nó phải thỏa mãn yêu cầu:
- Trong mỗi hàng thì phần tử đầu tiên phải nhỏ hơn phần tử thứ 2
- Trong mỗi cột thì phần tử đầu tiên phải nhỏ hơn phần tử thứ 2

Thì ta có thể thấy được rằng, ở chỗ cái ví dụ, mình có cái ý tưởng như này:
- nếu mà a[0] < hoặc > a[1] && a[2] < hoặc > a[3] (1)
- nếu mà a[0] < hoặc > a[2] && a[1] < hoặc > a[3] (2)

Nghĩa là mình chỉ cần cái vòng lặp nhập MAXN phần tử, rồi sau đó đi xét riêng từng 
phần tử như trên là ok. Vì người ta cho mặc định là 2x2 rồi, MAXN cùng lắm chỉ có
4 phần tử mà thôi.

Nếu (1) (2) đều thỏa mãn thì -> YES. Còn không thì -> NO
