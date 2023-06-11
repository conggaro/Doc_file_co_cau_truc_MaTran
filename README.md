Xem giải thuật ở ngoài web thì mang tính tham khảo thôi
--> phải xem trong code nói mới chuẩn
--> vì cái file "README.md" này nó ẩn đi một số chỗ

GIẢI THUẬT ĐỂ ĐỌC FILE CÓ CẤU TRÚC NHƯ MA TRẬN C++<br>

1. thêm thư viện fstream<br>
  
2. tạo vector 2 chiều<br>
  vector<vector<int>> v(0, vector<int>(0, 0));<br>

3. tạo vector dòng (hoặc gọi là vector item)<br>
-->dòng thì nó sẽ tự động chứa cột thôi<br>
  vector<int> item(0);<br>
 
4. mở file .dat (hoặc .inp)<br>
  
5. thêm toàn số 0 vào vector 2 chiều<br>
    bước 1: item.push_back(0);<br>
    bước 2: v.push_back(item);<br>
 
6. tạo ra cái vector 1 chiều để hứng dữ liệu đọc được từ file .dat (hoặc .inp)  <br>
    vector<int> hung_DuLieu(0); <br>
        int duLieu = 0;<br>
        
        while (file_in.eof() == false)
        {
            if (file_in.eof() == true)
            {
                break;
            }
            
            file_in >> duLieu;
            hung_DuLieu.push_back(duLieu);
        }
  <br>
7. gán giá trị trong vector 1 chiều cho vector 2 chiều <br>
    --> mấu chốt là tạo 1 cái index riêng cho vector 1 chiều thôi<br>
    --> còn cái vector 2 chiều thì cứ tăng i, j như bình thường<br>
  
