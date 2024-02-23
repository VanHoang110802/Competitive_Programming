# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/c7bc327d-1ac1-4e39-be6d-b80d81b3aca9)

# Phân tích
```
Ta vẫn sẽ dùng cách đơn giản nhất, vét cạn mọi trường hợp có thể để có thể nhìn ra được quy luật của bài từ từ
Đề yêu cầu gì làm nấy, và được quả độ phức tạp O(n^3)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/243df5c4-452b-4b6a-beec-2ab2a8d9e5e6)

```
Dùng 2 vòng lặp lồng nhau: Ta xét phần tử a[j] nằm giữa mảng.
Ta thấy đề cho rằng i < j < k (ta vẫn đang xét a[j]), muốn cho tổng đạt max
thì a[i] và a[k] phải là đạt max.
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/d1af5400-3433-457a-8d60-b5c70625614f)

```
Vậy lúc này ta sẽ phải chạy vòng lặp từ vị trí thứ 2 đến n-1, cống thức cũng dược suy ra luôn:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/d8ad5c3e-e08c-4a27-94c4-9fb9526bdede)

```
Smax = max(Smax, S)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/af236b7f-95fc-45d1-8687-866d03ce6506)

```
Tuy nhiên, thuật toán với ý tưởng trên có độ phức tạp là O(n^2), vẫn chưa được tối ưu để AC được bài này.
```
