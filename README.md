GIẢI THUẬT ĐỂ ĐỌC FILE CÓ CẤU TRÚC NHƯ MA TRẬN C++

1. thêm thư viện fstream
  #include <iostream>
  #include <fstream>
  #include <vector>
  
2. tạo vector 2 chiều
  vector<vector<int>> v(0, vector<int>(0, 0));

3. tạo vector dòng (hoặc gọi là vector item)
-->dòng thì nó sẽ tự động chứa cột thôi
  vector<int> item(0);
 
4. mở file
  
5. thêm toàn số 0 vào vector 2 chiều
    bước 1: item.push_back(0);
    bước 2: v.push_back(item);
 
6. tạo ra cái vector 1 chiều để hứng dữ liệu đọc được từ file .dat (hoặc .inp)  
    vector<int> hung_DuLieu(0);
        int duLieu = 0;
        
        while (file_in.eof() == false)
        {
            if (file_in.eof() == true)
            {
                break;
            }
            
            file_in >> duLieu;
            hung_DuLieu.push_back(duLieu);
        }
  
7. gán giá trị trong vector 1 chiều cho vector 2 chiều
    --> mấu chốt là tạo 1 cái index riêng cho vector 1 chiều thôi
    --> còn cái vector 2 chiều thì cứ tăng i, j như bình thường
  
