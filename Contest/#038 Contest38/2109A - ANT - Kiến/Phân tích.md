# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/50554515-2d5c-4780-8989-c869ce2e7242)

# Phân tích
```
Bài này cần tư duy, liên tưởng 1 chút. Và phải vẽ hình ra mới hình dung được 🙉 
(nên biết rằng vận tốc của các con kiến là như nhau, không thay đổi)
Ta hìng dung liên tưởng đoạn dây là 1 trục tọa độ có điểm đầu là A, điểm cuối là B
Các mũi tên tượng trưng cho con kiến đang bò theo hướng
(dấu '*' tượng cho độ nhá :vv)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/36e09695-9349-4766-b273-54c9a98b4356)

```
Nếu mà hai con kiến đụng đầu như thì chúng sẽ quay lại hướng 180*
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/8c04e189-991f-4e91-bc26-5aede2b75092)

```
Như đề bài đã cho thì tổng thời gian để rơi là 5s
(max(time_tren_1 + time_duoi_1, time_tren_2 + time_duoi_2))
Chắc chắn con kiến sẽ đụng nhau tại 1 thời điểm, địa điểm nào đó:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/ad2d84f8-863d-44d9-865f-0cdaa2cc34d6)

```
Khi mà 2 con kiến đụng nhau rồi quay đầu 180*, thì thực chất, ta có thể hình dung coi rằng chúng có thể
đi xuyên qua nhau. (Ây, nếu mà ní không hình dung ra được thì lấy que tính á, xếp như này, rồi cứ cho các
qua tính di chuyển dần theo hướng mũi tên là nhìn ra được ý tưởng đó.)
Rồi thì cứ con kiến rơi cuối cùng thì cách xa đầu dây nhất theo hướng di chuyển của nó
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/eb009bde-54fd-4c34-9806-7e6883547417)

```
Vậy thì bài toán sẽ là tìm khoảng cách xa nhất của con kiến thôi.
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/707b0f63-5539-45ba-9e8f-309515b2f696)
