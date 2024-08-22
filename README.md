<p align="center">
<a href="https://git.io/typing-svg"><img src="https://readme-typing-svg.demolab.com?font=Fira+Code&pause=1000&center=true&vCenter=true&random=false&width=450&lines=To+Do+List" alt="Typing SVG" /></a>
</p>

<div align="center">
<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/CptDat9/to_do_list?labelColor=7AA2E3&color=97E7E1">
</div>
Đây là một ứng dụng To-Do List đơn giản trên dòng lệnh, được viết bằng ngôn ngữ C. Ứng dụng cho phép bạn tạo, xem, cập nhật và xóa các nhiệm vụ trong danh sách thông qua cấu trúc liên kết (linked list) (Cụ thể là liên kết nối kép)

## Tính năng

- **Màn hình chào mừng**: Hiển thị thông điệp chào mừng khi khởi động ứng dụng.
- **Xem danh sách công việc**: Xem tất cả các công việc hiện có trong danh sách ToDo.
- **Thêm công việc**: Tạo mới các công việc để thêm vào danh sách.
- **Xóa công việc**: Xóa các công việc khỏi danh sách theo số thứ tự.
- **Cập nhật công việc**: Thêm các công việc mới vào danh sách hiện tại.

## Cách sử dụng

1. **Xem danh sách công việc**: Chọn `1` trong menu chính để xem tất cả các công việc hiện có.
2. **Thêm công việc**: Chọn `2` để tạo mới các công việc.
3. **Xóa công việc**: Chọn `3` và nhập số thứ tự của công việc muốn xóa.
4. **Cập nhật công việc**: Chọn `4` để thêm công việc mới vào cuối danh sách.
5. **Thoát**: Chọn `5` để thoát khỏi ứng dụng.

## Yêu Cầu

- Trình biên dịch C (ví dụ: GCC)
- Giao diện dòng lệnh (CLI) trên hệ thống hỗ trợ C (ví dụ: Windows, Linux, macOS)
  
## Cài đặt và chạy chương trình

1. Clone repository này về máy:
    ```bash
    git clone https://github.com/your-username/todo-list-c.git
    ```
2. Biên dịch chương trình bằng GCC hoặc bất kỳ trình biên dịch C nào khác:
    ```bash
    gcc -o todo main.c
    ```
3. Chạy chương trình:
    ```bash
    ./todo
    ```


## Tổng Quan Mã Nguồn

### Định Nghĩa Struct

```c
typedef struct ToDo {
    char data[100];
    struct ToDo *link;
    int count;
} todo;
```

Struct này định nghĩa một mục To-Do đơn lẻ, chứa phần mô tả nhiệm vụ (data), con trỏ tới nhiệm vụ tiếp theo (link), và vị trí của nhiệm vụ trong danh sách (count).

### Các Hàm Chính

- `welcomeUser()`: Hiển thị thông điệp chào mừng và thiết lập màu sắc cho giao diện console.
- `seeToDo()`: Hiển thị danh sách các nhiệm vụ hiện có.
- `createToDo()`: Cho phép người dùng thêm nhiệm vụ mới vào danh sách.
- `deleteToDo()`: Xóa một nhiệm vụ khỏi danh sách dựa trên số thứ tự của nó.
- `updateToDo()`: Thêm nhiệm vụ mới vào cuối danh sách hiện có.
- `fixCount()`: Cập nhật lại số thứ tự của các nhiệm vụ sau khi danh sách bị thay đổi.

### Vòng Lặp Chính

Hàm `main` chạy một vòng lặp vô hạn, liên tục hiển thị menu để người dùng tương tác với danh sách To-Do cho đến khi họ chọn thoát.
## Ảnh minh họa
![image](https://github.com/user-attachments/assets/bfff4ca4-34f2-4ac7-a499-3d59ba79a6fb)

![image](https://github.com/user-attachments/assets/79651546-0ad9-4f57-8301-3767a2697000)


## Các Cải Tiến Trong Tương Lai

- Thực hiện lưu/đọc dữ liệu từ tệp tin để lưu trữ danh sách To-Do và tải lại khi khởi động chương trình.
- Thêm xử lý lỗi cho việc cấp phát bộ nhớ thất bại.
- Thay thế `gets()` bằng `fgets()` để nhập liệu an toàn hơn.
  
## Đóng góp

Do ứng dụng còn một số lỗi không mong muốn nên nếu bạn muốn đóng góp vào dự án, hãy fork repository này, tạo một nhánh mới, thực hiện các thay đổi và gửi pull request. Cảm ơn bạn !


