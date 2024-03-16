# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/3b40e5b5-5b70-49e9-9ce3-68a3220df4b5)

# Phân tích

- Gọi F[u], C[u] là đường đi dài nhất vầ số lượng đường đi từ đỉnh s đến đỉnh u, và khi đó F[t] và C[t] là hai kết quả của bài toán.
- Xét cung (u,v): Dễ dàng suy ra công thức:
		F[v] = max(F[u]) + w(u,v) (1)
		C[v] = C[v] + C[u] (2)
- Tuy nhiên quá trình duyệt DFS nếu không cẩn thận thì một đỉnh sẽ được duyệt nhiều lần và như vậy sẽ không đáp ứng được yêu cầu của bài toán về mặt thời gian.
- Có thể giải quyết vấn đề trên như sau:
- Sử dụng DFS để đánh lại chỉ số thứ tự các đỉnh của đồ thị gọi là sắp xếp topo.
- Từ sắp xếp topo khi đó sử dụng công thứ (1) và (2) ở trên.

