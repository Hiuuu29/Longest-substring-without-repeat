#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main(){

    // Phương pháp 2 con trỏ
    // tạo các biến cần thiết, con trỏ bên trái, biến lưu độ dài chuỗi
    string s = "pwwkew";
    unordered_map<char,int> mp;
    int left = 0;
    int result = 0;

    // duyệt qua mảng bằng con trỏ phải
    for (int right = 0; right < s.length(); right++)
    {
        // ktra xem trong map co xuat hien ki tu nay chua
        if (mp[s[right]] == 1) // = 1 la da co xuat hien roi
        {
            while (mp[s[right]] == 1) // vong lap cho den khi xoa ki tu trung do ra khoi chuoi
            {
                mp[s[left]]--;
                left++;
            }
            
        }
        // khi da xoa xong ki tu trung dau tien, them ki tu trung hien tai vao map
        mp[s[right]]++;
        // cap nhat do lon cua chuoi 
        result = max(result, right - left + 1); //so sánh chuỗi với chuỗi sau khi add thêm 1 kí tự mới
        
    }
    cout << result << endl;


    return 1;
}