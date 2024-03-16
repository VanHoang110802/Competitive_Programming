# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/645ba33d-ace6-47d9-90a9-eed2b4949ae7)

# Phân tích
```
- Sử dụng DFS để định chiều các cạnh của đồ thị. Cạnh nào thuộc cây DFS sẽ được định chiều từ gốc xuống lá (tạm gọi là hướng xuôi),
 những cạnh không thuộc cây DFS sẽ được định chiều theo hướng ngược lại.
- Sau khi định chiều xong ta được một đồ thị 1 chiều mới, kiểm tra đồ thị mới có liên thông không (sử dụng thuật toán Tajan).
 Nếu có thì trả lời có phương án, ngược lại thì không có phương án.

```
