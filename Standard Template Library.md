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












