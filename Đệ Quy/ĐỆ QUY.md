# Đệ quy C++

Đệ quy trong C++ là một kỹ thuật trong đó một hàm gọi chính nó lặp đi lặp lại cho đến khi một điều kiện nhất định được thỏa mãn.
Nói cách khác, đệ quy là quá trình giải một bài toán bằng cách chia nó thành các bài toán con nhỏ hơn, đơn giản hơn.

# Cấu trúc cú pháp đệ quy
```
return_type recursive_func {
      ....
       // Điều kiện cơ sở
       // Trường hợp đệ quy
      ....
}
```
# Hàm đệ quy
Hàm gọi chính nó được gọi là hàm đệ quy. Khi một hàm đệ quy được gọi, nó sẽ thực thi một tập lệnh và sau đó gọi chính nó để thực thi cùng một tập lệnh đó với đầu vào nhỏ hơn. Quá trình này tiếp tục cho đến khi đạt được trường hợp cơ sở, đây là điều kiện dừng đệ quy và trả về một giá trị.

# Điều kiện cơ bản
Điều kiện cơ bản là điều kiện được sử dụng để kết thúc đệ quy. Hàm đệ quy sẽ tiếp tục gọi chính nó cho đến khi điều kiện cơ bản được thỏa mãn.

# Trường hợp đệ quy
Trường hợp đệ quy là cách thức hiện diện của lệnh gọi đệ quy trong hàm. Trường hợp đệ quy có thể chứa nhiều lệnh gọi đệ quy hoặc các tham số khác nhau sao cho khi kết thúc, điều kiện cơ bản được thỏa mãn và quá trình đệ quy kết thúc

# Hoạt động đệ quy trong C++
Để hiểu cách đệ quy hoạt động, chúng ta sẽ lại tham khảo ví dụ về tính tổng N số tự nhiên bắt đầu từ 0 và theo dõi dòng chảy của chương trình.

1. Trong hàm TinhTongN(), Trường hợp đệ quy là:
```
int temp = n + TinhTongN(n - 1);
```
2. Trong ví dụ, n = 5, như trường hợp đệ quy của nSum(5) , ta có:
```
int temp = 5 + TinhTongN(4);
```
3. Trong TinhTongN(4) , trường hợp đệ quy và mọi thứ khác sẽ giống nhau, nhưng n = 4. Hãy đánh giá trường hợp đệ quy cho n = 4
```
int temp = 4 + TinhTongN(3);
```
4. Tương tự với TinhTongN(3), TinhTongN(2) và TinhTongN(1)
```
int temp = 3 + TinhTongN(2); // TinhTongN(3) 
int temp = 2 + TinhTongN(1); // TinhTongN(2) 
int temp = 1 + TinhTongN(0); // TinhTongN(1)

Bây giờ ta ngừng đánh giá TinhTongN(0)
```
5. Bây giờ hãy nhớ lại rằng giá trị trả về của hàm TinhTongN() trong cùng số nguyên có tên temp này. Vì vậy, thay vì hàm, chúng ta có thể đặt giá trị được trả về bởi các hàm này. Như vậy, với TinhTongN(5), chúng ta nhận được
```
int temp = 5 + 4 + TinhTongN(3);
```
6. Tương tự, thay các giá trị trả về của TinhTongN() cho mỗi n, ta có
```
int temp = 5 + 4 + 3 + 2 + 1 + TinhTongN(0);
```
7. Trong hàm TinhTongN(), điều kiện cơ bản là
```
if (n == 0) {
    return 0;
}
```
điều đó có nghĩa là khi TinhTongN(0) sẽ trả về 0. Đặt giá trị này vào trường hợp đệ quy của TinhTongN(5), chúng ta nhận được
```
int temp = 5 + 4 + 3 + 2 + 1 + 0
        = 15
```
8. Tại thời điểm này, chúng ta có thể thấy rằng không còn lệnh gọi hàm nào trong trường hợp đệ quy. Vì vậy quá trình đệ quy sẽ dừng ở đây và giá trị cuối cùng được hàm trả về sẽ là 15 là tổng của 5 số tự nhiên đầu tiên.
