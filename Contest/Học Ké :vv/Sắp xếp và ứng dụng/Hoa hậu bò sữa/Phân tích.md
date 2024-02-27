# Đề bài
![olympic1](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/b3c41f85-2699-43af-a212-2b91b110e566)
![olympic2](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/520e5aad-5ac2-4a35-8e1f-16155ec3a057)

# Phân tích
```
Bài này ta sẽ có 2 cách giải:
C1: Mình sẽ sort mảng theo cách là: lẻ đứng trước, chẵn đứng sau và theo thứ tự tăng dần. Sau đó, đặt 3 biến đếm, vàng,
bạc, đồng. Duyệt lại mảng từ l -> r, nếu gặp điều kiện thỏa nào đó tăng biến đếm từng cái lên rồi in ra. (N + N.log(N))
C2: Dùng 3 mảng prefix sum.
```
