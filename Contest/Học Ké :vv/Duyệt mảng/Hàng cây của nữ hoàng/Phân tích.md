# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/5f2dce70-54d1-4b1a-bfc9-7d1bb292ff4a)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/77df3a5b-1a66-486c-9451-ddc175ccd343)

# Phân tích
```
Thì đề yêu cầu ta phải tạo dãy sao cho 2 phần tử gần nhau = k bằng cách tăng hoặc giảm các phần tử ở dãy ban đầu
Mỗi lần tăng hoặc giảm chỉ được phép dùng 1 đơn vị
Bây giờ phải làm sao để số lần tăng giảm phải là ít nhất

Xét ví dụ của đề bài, thì cái output của nó nghĩa là:
+ 3 2: tăng phần tử thứ 3 lên 2 đơn vị
- 4 1: giảm phần tử thứ 4 xuống 1 đơn vị

Để ý dữ kiện đề bài cho giới hạn <= 1000, nên có thể cài thuật với độ phức tạp O(n^2)
Theo đề bài thì hai phần tử liền nhau thì khoảng cách giữa 2 phần tử liền nhau là k đơn vị
-> nếu biết được b1, thì có thể biết được cả dãy
Với mỗi phần tử ở dãy b, ta sẽ duyệt tất cả các giá trị của phần tử từ 1 -> 1000
Khi mà tính được dãy b rồi thì đem so sánh với mảng ban đầu:
+ Nếu b[i] = a[i] thì không thay đổi phần tử a[i]
+ Nếu b[i] < a[i] thì giảm arr_ban_dau[i] đi 1 đơn vị (a[i] - b[i] đơn vị)
+ Nếu b[i] > a[i] thì tăng arr_ban_dau[i] đi 1 đơn vị (b[i] - a[i] đơn vị)

Lấy ví dụ của đề:
1 2 1 5
ta tạo được dãy b với:
i bắt đầu từ 1: 1 2 3 4  So với dãy a ở trên thì vị trí bị khác nhau là 3, 4 (đổi mất 2 phần tử)
i bắt đầu từ 2: 2 3 4 5 So với dãy a ở trên thì vị trí bị khác nhau là 1, 2, 3 (đổi mất 3 phần tử)
i bắt đầu từ 3: 3 4 5 6 So với dãy a ở trên thì vị trí bị khác nhau là 1, 2, 3, 4 (đổi mất 4 phần tử)
...
ta lấy min -> giữ lấy i = 1, không cần lấy các i đằng sau nữa.
```
