# Đề bài 
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/07d3523c-c9ab-40f1-bc2b-14098f41bdd9)

# Phân tích
- Đây là bài toán điển hình về tìm khớp trên đồ thị. Nếu đỉnh u không phải là khớp thì số lượng thành phần liên thông không thay đổi, nếu đỉnh u là khớp thì số lượng thành phần liên thông sẽ được tăng lên.
- Vấn đề ở đây là làm thế nào đếm được số lượng thành phần liên thông sau khi đã loại bỏ một khớp u ra khỏi đồ thị. Có thể giải quyết vấn đề này như sau: trong quá trình DFS sử dụng thêm một mảng để lưu số lượng đỉnh con của đỉnh u là slcon[u]. Khi đó nếu số lượng thành phần liên thông ban đầu của đồ thì là k thì tiếp theo sẽ có hai khả năng như sau: 
+ Khả năng 1: u là khớp nhưng không phải đỉnh gốc của DFS thì số lượng thành phần liên thông sau khi xóa đỉnh khớp u là: k + slcon[u].
+ Khả năng 2: u là khớp nhưng lại là đỉnh gốc của DFS thì số lượng thành phần liên thông sau khi xóa đỉnh khớp u là: k + slcon[u] – 1.
