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

```
Thì để AC trọn vẹn bài này, ta sẽ chuẩn bị 2 mảng. Tạm gọi 2 mảng là mảng Max_1, Max_2. Mảng này sẽ lưu lại
những vị trí lớn nhất có trong mảng.
```
```
Max_1[i] = max(a1, a2,..., ai) = max(max(a1, a2,..., ai-1), ai)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/76bb08f2-afff-4c4c-b6fd-9706b991c3d4)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/15cb0dca-6cb3-40b4-bf68-53e7d5b0992f)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/027c1324-b73a-4563-90a3-49d9f9abc691)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/273cfc4e-dc7c-4a35-a36a-7f46ee88d20b)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/58a41920-5d23-4f8a-9fc1-a789b700612c)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/2d23687a-02da-4b3f-86b7-a130b15d1d1c)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/8b1ec7f9-063e-4c38-96d3-559e5c14d5c5)

```
Max_2 là ngược lại
Max_2[i] = max(an,..., ai) = max(max(an, an-1,..., ai+1), ai)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/b86e0c84-f76b-4ed9-9bb8-e1194435df10)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/a4190d24-b0f7-4f74-826a-3eaf2eb05541)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f5d8f310-2d7c-4a11-9e46-d15aea364037)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/e7fc6f92-08f4-4300-9f1f-f4aeea1f79ea)

![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/e1752f29-9f2d-4303-8d7d-dc1f5b77637e)










