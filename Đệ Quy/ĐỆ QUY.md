# Đệ quy C++
```
Đệ quy trong C++ là một kỹ thuật trong đó một hàm gọi chính nó lặp đi lặp lại cho đến khi một điều kiện nhất định được thỏa mãn.
Nói cách khác, đệ quy là quá trình giải một bài toán bằng cách chia nó thành các bài toán con nhỏ hơn, đơn giản hơn.
```

# Cấu trúc cú pháp đệ quy
```
return_type recursive_func {
      ....
       // Điều kiện cơ sở
       // Trường hợp đệ quy
      ....
}
```
Hàm đệ quy
Hàm gọi chính nó được gọi là hàm đệ quy. Khi một hàm đệ quy được gọi, nó sẽ thực thi một tập lệnh và sau đó gọi chính nó để thực thi cùng một tập lệnh đó với đầu vào nhỏ hơn. Quá trình này tiếp tục cho đến khi đạt được trường hợp cơ sở, đây là điều kiện dừng đệ quy và trả về một giá trị.

Điều kiện cơ bản
Điều kiện cơ bản là điều kiện được sử dụng để kết thúc đệ quy. Hàm đệ quy sẽ tiếp tục gọi chính nó cho đến khi điều kiện cơ bản được thỏa mãn.

Trường hợp đệ quy
Trường hợp đệ quy là cách thức hiện diện của lệnh gọi đệ quy trong hàm. Trường hợp đệ quy có thể chứa nhiều lệnh gọi đệ quy hoặc các tham số khác nhau sao cho khi kết thúc, điều kiện cơ bản được thỏa mãn và quá trình đệ quy kết thúc
