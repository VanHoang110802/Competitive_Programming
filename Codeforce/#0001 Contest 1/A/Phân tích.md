# Đề bài
![1](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/bb3c4a3a-f9e3-4b69-a088-271125fb6b38)
![2](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/3eef5a36-fdc9-464c-8588-91f8bf611255)
![3](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/dde91420-6d1a-4541-94a1-56effb540d05)

# Phân tích
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
