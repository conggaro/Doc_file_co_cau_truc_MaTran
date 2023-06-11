// Yêu cầu:
// 1. đọc file
// 2. in kết quả ra màn hình

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    // tạo vector 2 chiều
    vector<vector<int>> v(0, vector<int>(0, 0));

    // tạo vector dòng (hoặc gọi là vector item)
    // dòng thì nó sẽ tự động chứa cột thôi
    vector<int> item(0);

    // tạo m dòng cho vector 2 chiều
    int m;

    // tạo n cột cho vector 2 chiều
    int n;
    
    // tạo đối tượng đọc file
    ifstream file_in;
    file_in.open("ma_tran.dat", ios::in);

    if (file_in.fail() == true)
    {
        cout << "Mo file ma_tran.dat THAT BAI\n\n";
    }
    else if (file_in.fail() == false)
    {
        cout << "Mo file ma_tran.dat THANH CONG\n\n";

        // đọc m
        file_in >> m;

        // đọc n 
        file_in >> n;

        // thêm toàn số 0 cho vector 2 chiều
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                item.push_back(0);
            }
            v.push_back(item);
        }
        
        // tạo vector 1 chiều để hứng dữ liệu đọc từ file ma_tran.dat
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
        
        // giờ thì thêm dữ liệu từ vector 1 chiều
        // sang vector 2 chiều
        int index = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v[i][j] = hung_DuLieu[index];
                index = index + 1;
            }            
        }        

        file_in.close();
    }
    
    // in kết quả ra màn hình
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << "\n\n";
    }
    
    return 0;
}