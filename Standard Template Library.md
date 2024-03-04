## String:
> C++ cung cấp một giải pháp thay thế mạnh mẽ cho char*. Nó không phải là một kiểu dữ liệu tích hợp, nhưng là một lớp container trong Thư viện mẫu chuẩn. Lớp chuỗi cung cấp các chức năng thao tác chuỗi khác nhau như nối, tìm, thay thế, v.v. Hãy để chúng tôi xem làm thế nào để xây dựng một kiểu chuỗi.
```
string s0;                                       // s0 = ""
string s1(“Hello”);                               // s1 = "Hello"
string s2 (s1);                                  // s2 = "Hello"
string s3 (s1, 1, 2);                            // s3 = "el"
string s4 ("Hello World", 5);                     // s4 = "Hello"
string s5 (5, ‘*’);                              // s5 = "*****"
string s6 (s1.begin(), s1.begin()+3);              // s6 = "Hel"
```
Dưới đây là một số hàm thành viên:
**append()**: Chèn các ký tự bổ sung vào cuối chuỗi (cũng có thể được thực hiện bằng toán tử '+' hoặc '+='). Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.
**assign()**: Gán chuỗi mới bằng cách thay thế giá trị trước đó (cũng có thể được thực hiện bằng toán tử '=').
**at()**: Trả về ký tự tại một vị trí cụ thể (cũng có thể được thực hiện bằng toán tử '[ ]'). Độ phức tạp thời gian của nó là O(1).
**begin()**: Trả về một iterator trỏ đến ký tự đầu tiên. Độ phức tạp thời gian của nó là O(1).
**clear()**: Xóa tất cả nội dung của chuỗi và gán một chuỗi trống ("") có độ dài bằng không. Độ phức tạp thời gian của nó là O(1).
**compare()**: So sánh giá trị của chuỗi với chuỗi được truyền trong tham số và trả về một số nguyên tương ứng. Độ phức tạp thời gian của nó là O (N + M) trong đó N là kích thước của chuỗi đầu tiên và M là kích thước của chuỗi thứ hai.
**copy()**: Sao chép chuỗi con của chuỗi trong chuỗi được truyền dưới dạng tham số và trả về số ký tự được sao chép. Độ phức tạp thời gian của nó là O (N) trong đó N là kích thước của chuỗi được sao chép.
**c_str()**: Chuyển đổi chuỗi thành chuỗi kiểu C (chuỗi kết thúc null) và trả về con trỏ đến chuỗi kiểu C. Độ phức tạp thời gian của nó là O(1).
**empty()**: Trả về giá trị boolean, true nếu chuỗi rỗng và false nếu chuỗi không trống. Độ phức tạp thời gian của nó là O(1).
**end()**: Trả về một bộ lặp trỏ đến một vị trí bên cạnh ký tự cuối cùng. Độ phức tạp thời gian của nó là O(1).
**erase()**: Xóa một chuỗi con của chuỗi. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.
**find()**: Tìm kiếm chuỗi và trả về lần xuất hiện đầu tiên của tham số trong chuỗi. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi.
**insert()**: Chèn các ký tự bổ sung vào chuỗi tại một vị trí cụ thể. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.
**length()**: Trả về độ dài của chuỗi. Độ phức tạp thời gian của nó là O(1).
**replace()**: Thay thế phần cụ thể của chuỗi. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.
**resize()**: Thay đổi kích thước chuỗi thành độ dài mới có thể nhỏ hơn hoặc lớn hơn độ dài hiện tại. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.
**size()**: Trả về độ dài của chuỗi. Độ phức tạp thời gian của nó là O(1).
**substr()**: Trả về một chuỗi là bản sao của chuỗi con. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi con.











