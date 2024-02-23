# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f8273d70-e954-4385-aa79-33cf7603c408)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/1f90fb8f-705b-4b01-885b-312e3ba4378b)

# Phân tích
```
Bài này cần tư duy, liên tưởng 1 chút. Và phải vẽ hình ra mới hình dung được 🙉 
(nên biết rằng vận tốc của các con kiến là như nhau, không thay đổi)
Ta hìng dung liên tưởng đoạn dây là 1 trục tọa độ có điểm đầu là A, điểm cuối là B
Các mũi tên tượng trưng cho con kiến đang bò theo hướng
(dấu '*' tượng cho độ nhá :vv)
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/098450dd-d792-4bc4-b1ae-61cfb050d3f7)
```
Nếu mà hai con kiến đụng đầu như thì chúng sẽ quay lại hướng 180*
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/7e56a0d7-0e56-456a-a02a-2d45bafc445f)
```
Như đề bài đã cho thì tổng thời gian để rơi là 5s
(max(time_tren_1 + time_duoi_1, time_tren_2 + time_duoi_2))
Chắc chắn con kiến sẽ đụng nhau tại 1 thời điểm, địa điểm nào đó:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f0103a8b-0d02-4375-9856-7aeee58d82fe)

```
Khi mà 2 con kiến đụng nhau rồi quay đầu 180*, thì thực chất, ta có thể hình dung coi rằng chúng có thể
đi xuyên qua nhau. (Ây, nếu mà ní không hình dung ra được thì lấy que tính á, xếp như này, rồi cứ cho các
qua tính di chuyển dần theo hướng mũi tên là nhìn ra được ý tưởng đó.)
Rồi thì cứ con kiến rơi cuối cùng thì cách xa đầu dây nhất theo hướng di chuyển của nó
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/8bee508d-22c1-4c02-b612-366117696791)

```
Vậy thì bài toán sẽ là tìm khoảng cách xa nhất của con kiến thôi.
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/4de737b0-0b18-47dc-a983-1f287fcbafd6)
