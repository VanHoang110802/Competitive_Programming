# Đề bài
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f5bafc75-5579-45ae-892f-1aeb163a40b4)
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f0b3cd27-ce8b-4d55-8d77-e4df83a16d98)


# Phân tích
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/f5d4481b-1b3d-48ef-9604-86fb27ba73fa)

```
Biển quảng cáo hcn sẽ có độ cao = độ cao của 1 tấm ván nào đó trong n tấm

Xét tấm ván thứ i (h[i]): cho tấm này là độ cao của hcn cần tạo
Ta sẽ cắt các tấm ván có độ cao >= h[i]
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/748e7b2f-e1ce-49c1-90d2-8ee9f26fd8cc)

```
Ta có thể thấy ngay trên hình vẽ, khi mà ta cắt các tấm ván, nó sẽ có giới hạn dừng ngay tại đâu:
Hai vị trí được đánh mũi tên đó, nó có chiều cao thấp hơn so với chiều cao của h[i], và gần với h[i] nhất
(Tính từ h[i] sang bên trái, sang bên phải)
Gọi hai vị trí đó (cột được đánh bôi đen) lần lượt là l, r. Vậy tức là ta cần phải tìm vị trí l gần bên trái của h[i]
và h[l] < h[i], vị trí r gần bên phải của h[i] và h[r] > h[i]
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/8380e842-a9f8-4b30-9682-faa237e87014)

```
Cuối cùng, suy ra được công thức:
```
![image](https://github.com/VanHoang110802/Competitive_Programming/assets/108053955/cb31dfbf-bd25-4575-97ea-78eb7c84d26e)

