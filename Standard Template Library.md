## String:
> C++ cung cấp một giải pháp thay thế mạnh mẽ cho char*. Nó không phải là một kiểu dữ liệu tích hợp, nhưng là một lớp container trong Thư viện mẫu chuẩn. Lớp chuỗi cung cấp các chức năng thao tác chuỗi khác nhau như nối, tìm, thay thế, v.v. Hãy để chúng tôi xem làm thế nào để xây dựng một kiểu chuỗi.
```
string s0;                                       // s0 = ""
string s1("Hello");                               // s1 = "Hello"
string s2 (s1);                                  // s2 = "Hello"
string s3 (s1, 1, 2);                            // s3 = "el"
string s4 ("Hello World", 5);                     // s4 = "Hello"
string s5 (5, '*');                              // s5 = "*****"
string s6 (s1.begin(), s1.begin() + 3);              // s6 = "Hel"
```
Dưới đây là một số hàm thành viên:

**append()**: Chèn các ký tự bổ sung vào cuối chuỗi (cũng có thể được thực hiện bằng toán tử '+' hoặc '+='). Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.

**assign()**: Gán chuỗi mới bằng cách thay thế giá trị trước đó (cũng có thể được thực hiện bằng toán tử '=').

**at()**: Trả về ký tự tại một vị trí cụ thể (cũng có thể được thực hiện bằng toán tử '[ ]'). Độ phức tạp thời gian của nó là O(1).

**begin()**: Trả về một iterator trỏ đến ký tự đầu tiên. Độ phức tạp thời gian của nó là O(1).

**clear()**: Xóa tất cả nội dung của chuỗi và gán một chuỗi trống ("") có độ dài bằng không. Độ phức tạp thời gian của nó là O(1).

**compare()**: So sánh giá trị của chuỗi với chuỗi được truyền trong tham số và trả về một số nguyên tương ứng. Độ phức tạp thời gian của nó là O (N + M) trong đó N là kích thước của chuỗi đầu tiên và M là kích thước của chuỗi thứ hai.

**copy()**: Sao chép chuỗi con của chuỗi trong chuỗi được truyền dưới dạng tham số và trả về số ký tự được sao chép. Độ phức tạp thời gian của nó là O (N) trong đó N là kích thước của chuỗi được sao chép.

**c_str()**: Chuyển đổi chuỗi thành chuỗi kiểu C (chuỗi kết thúc null) và trả về con trỏ đến chuỗi kiểu C. Độ phức tạp thời gian của nó là O(1).

**empty()**: Trả về giá trị boolean, true nếu chuỗi rỗng và false nếu chuỗi không trống. Độ phức tạp thời gian của nó là O(1).

**end()**: Trả về một bộ lặp trỏ đến một vị trí bên cạnh ký tự cuối cùng. Độ phức tạp thời gian của nó là O(1).

**erase()**: Xóa một chuỗi con của chuỗi. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.

**find()**: Tìm kiếm chuỗi và trả về lần xuất hiện đầu tiên của tham số trong chuỗi. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi.

**insert()**: Chèn các ký tự bổ sung vào chuỗi tại một vị trí cụ thể. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.

**length()**: Trả về độ dài của chuỗi. Độ phức tạp thời gian của nó là O(1).

**replace()**: Thay thế phần cụ thể của chuỗi. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.

**resize()**: Thay đổi kích thước chuỗi thành độ dài mới có thể nhỏ hơn hoặc lớn hơn độ dài hiện tại. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi mới.

**size()**: Trả về độ dài của chuỗi. Độ phức tạp thời gian của nó là O(1).

**substr()**: Trả về một chuỗi là bản sao của chuỗi con. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của chuỗi con.

---

## Vector
> Vector là các container trình tự có kích thước động. Nói cách khác, vectơ là mảng động. Cũng giống như mảng, các phần tử vectơ được đặt ở vị trí lưu trữ liền kề để chúng có thể được truy cập và đi qua bằng cách sử dụng các bộ lặp. Để đi qua vector, chúng ta cần vị trí của phần tử đầu tiên và cuối cùng trong vectơ mà chúng ta có thể nhận được thông qua begin() và end() hoặc chúng ta có thể sử dụng lập chỉ mục từ 0 đến size(). Hãy để chúng tôi xem làm thế nào để xây dựng một vector.

```
vector<int> a;                                       // empty vector of ints
vector<int> b (5, 10);                               // five ints with value 10
vector<int> c (b.begin(), b.end());                   // iterating through second
vector<int> d (c);                                   // copy of c
```

Một số hàm thành viên của vectơ là:

**at()**: Trả về tham chiếu đến phần tử tại một vị trí cụ thể (cũng có thể được thực hiện bằng toán tử '[ ]'). Độ phức tạp thời gian của nó là O(1).

**back()**: Trả về tham chiếu đến phần tử cuối cùng. Độ phức tạp thời gian của nó là O(1).

**begin()**: Trả về một iterator trỏ đến phần tử đầu tiên của vector. Độ phức tạp thời gian của nó là O(1).

**clear()**: Xóa tất cả các phần tử khỏi vectơ và gán một vectơ trống. Độ phức tạp thời gian của nó là O(N) trong đó N là kích thước của vector.

**empty()**: Trả về giá trị boolean, true nếu vectơ rỗng và false nếu vectơ không trống. Độ phức tạp thời gian của nó là O(1).

**end()**: Trả về một iterator trỏ đến một vị trí nằm cạnh phần tử cuối cùng của vector. Độ phức tạp thời gian của nó là O(1).

**erase()**: Xóa một phần tử hoặc một dải phần tử. Độ phức tạp thời gian của nó là O (N + M) trong đó N là số phần tử bị xóa và M là số phần tử được di chuyển.

**front()**: Trả về tham chiếu đến phần tử đầu tiên. Độ phức tạp thời gian của nó là O(1).

**insert()**: Chèn các phần tử mới vào vectơ tại một vị trí cụ thể. Độ phức tạp thời gian ts là O (N + M) trong đó N là số phần tử được chèn vào và M là số phần tử được di chuyển .

**pop_back()**: Loại bỏ phần tử cuối cùng khỏi vector. Độ phức tạp thời gian của nó là O(1).

**push_back()**: Chèn một phần tử mới vào cuối vector. Độ phức tạp thời gian của nó là O(1).

**resize()**: Thay đổi kích thước vectơ thành độ dài mới có thể nhỏ hơn hoặc lớn hơn chiều dài hiện tại. Độ phức tạp thời gian của nó là O (N) trong đó N là kích thước của vectơ được thay đổi kích thước.

**size()**: Trả về số phần tử trong vector. Độ phức tạp thời gian của nó là O(1).

---
## set
> là các thùng chứa chỉ lưu trữ các giá trị duy nhất và cho phép tra cứu dễ dàng. Các giá trị trong tập hợp được lưu trữ theo một số thứ tự cụ thể (như tăng dần hoặc giảm dần). Các yếu tố chỉ có thể được chèn hoặc xóa, nhưng không thể sửa đổi. Chúng ta có thể truy cập và duyệt qua các phần tử tập hợp bằng cách sử dụng các bộ lặp giống như vector.

```
set<int> s1;                               // Empty Set
int a[] = {1, 2, 3, 4, 5, 5};
set<int> s2 (a, a + 6);                    // s2 = {1, 2, 3, 4, 5}
set<int> s3 (s2);                          // Copy of s2
set<int> s4 (s3.begin(), s3.end());        // Set created using iterators
```

Một số hàm thành viên của set là:

**begin()**: Trả về một iterator cho phần tử đầu tiên của tập hợp. Độ phức tạp thời gian của nó là O(1).

**clear()**: Xóa tất cả các phần tử trong tập hợp và tập hợp sẽ trống. Độ phức tạp thời gian của nó là O (N) trong đó N là kích thước của tập hợp.

**count()**: Trả về 1 hoặc 0 nếu phần tử nằm trong tập hợp hoặc không tương ứng. Độ phức tạp thời gian của nó là O (logN) trong đó N là kích thước của tập hợp.

**empty()**: Trả về true nếu tập trống và false nếu tập hợp có ít nhất một phần tử. Độ phức tạp thời gian của nó là O(1).

**end()**: Trả về một iterator trỏ đến một vị trí bên cạnh phần tử cuối cùng. Độ phức tạp thời gian của nó là O(1).

**erase()**: Xóa một phần tử cụ thể hoặc một loạt các phần tử khỏi tập hợp. Độ phức tạp thời gian của nó là O(N) trong đó N là số phần tử bị xóa.

**find()**: Tìm kiếm một phần tử cụ thể và trả về iterator trỏ đến phần tử nếu phần tử được tìm thấy nếu không nó sẽ trả về iterator được trả về bởi end(). Độ phức tạp thời gian của nó là O (logN) trong đó N là kích thước của tập hợp.

**insert()**: chèn một phần tử mới. Độ phức tạp thời gian của nó là O (logN) trong đó N là kích thước của tập hợp.

**size()**: Trả về kích cỡ của tập hợp hoặc số phần tử trong tập hợp. Độ phức tạp thời gian của nó là O(1).

---
## map
> Maps là các vùng chứa lưu trữ các phần tử bằng cách ánh xạ giá trị của chúng với một khóa cụ thể. Nó lưu trữ sự kết hợp của giá trị khóa và giá trị được ánh xạ theo một thứ tự cụ thể. Ở đây giá trị khóa được sử dụng để xác định duy nhất các yếu tố được ánh xạ tới nó. Kiểu dữ liệu của giá trị khóa và giá trị được ánh xạ có thể khác nhau. Các phần tử trong bản đồ luôn được sắp xếp theo thứ tự theo khóa tương ứng của chúng và có thể được truy cập trực tiếp bằng khóa của chúng bằng toán tử dấu ngoặc ([ ]).

> Trong bản đồ, khóa và giá trị ánh xạ có sự kết hợp loại cặp, tức là cả khóa và giá trị ánh xạ đều có thể được truy cập bằng cách sử dụng các chức năng loại cặp với sự trợ giúp của bộ lặp.

```
map <char ,int > mp;

mp['b']  = 1;
```
-> Nó sẽ ánh xạ giá trị 1 với khóa 'b'. Chúng ta có thể truy cập trực tiếp 1 bằng cách sử dụng mp['b']
```
mp['a'] = 2
```
-> Nó sẽ ánh xạ giá trị 2 với khóa 'a'.

Trong map, các giá trị sẽ được sắp xếp theo thứ tự theo key.

Lưu ý: N là số phần tử trong bản đồ.

Một số hàm thành viên của map:

**at( )**: Trả về một tham chiếu đến giá trị được ánh xạ của phần tử được xác định bằng khóa. Độ phức tạp thời gian của nó là O (logN).

**count( )**: tìm kiếm bản đồ cho các phần tử được ánh xạ bởi khóa đã cho và trả về số lượng kết quả phù hợp. Khi bản đồ lưu trữ mỗi phần tử với khóa duy nhất, sau đó nó sẽ trả về 1 nếu phù hợp nếu tìm thấy nếu 
không trả về 0.Độ phức tạp thời gian của nó là O (logN).

**clear()**: xóa bản đồ, bằng cách xóa tất cả các phần tử khỏi bản đồ và để lại kích thước 0.Độ phức tạp thời gian của nó là O (N).

**begin( )**: trả về một iterator(đã giải thích ở trên) đề cập đến phần tử đầu tiên của bản đồ. Độ phức tạp thời gian của nó là O(1).

**end( )**: trả về một iterator đề cập đến phần tử lý thuyết (không trỏ đến một phần tử) theo sau phần tử cuối cùng. Độ phức tạp thời gian của nó là O(1).

**empty( )**: kiểm tra xem bản đồ có trống hay không. Nó không sửa đổi bản đồ. Nó trả về 1 nếu bản đồ trống nếu không trả về 0.Độ phức tạp thời gian của nó là O (1).

**erase( )**: loại bỏ một phần tử duy nhất hoặc phạm vi của phần tử khỏi bản đồ.

**find( )**: Tìm kiếm bản đồ cho phần tử với khóa đã cho và trả về một bộ lặp cho nó, nếu nó có trong bản đồ nếu không nó sẽ trả về một iterator cho phần tử lý thuyết theo sau phần tử cuối cùng của bản đồ. Độ phức tạp thời gian của nó là O (logN).

**insert( )**: chèn một phần tử duy nhất hoặc phạm vi của phần tử trong bản đồ. Độ phức tạp thời gian của nó là O (logN), khi chỉ có phần tử được chèn vào và O (1) khi vị trí cũng được đưa ra.

```
#include <iostream>
#include <map>
using namespace std;
int main(){
    map <char,int> mp;
    map <char,int> mymap,mymap1;

    //insert elements individually in map with the combination of key value and value of element
    mp.insert(pair<char,int>('a',2));   //key is 'c' and 2 is value.
    mp.insert(pair<char,int>('b',1));
    mp.insert(pair<char,int>('c',43));

    //inserts elements in range using insert() function in map 'mymap'.
    mymap.insert(mp.begin(),mp.end());

    //declaring iterator for map
    map <char,int>::iterator it;

    //using find() function to return reference of element mapped by key 'b'.
    it = mp.find('b');

    //prints key and element's value.
    cout<<"Key and element's value of map are: ";
    cout<<it->first<<" and "<<it->second<<endl;

    //alternative way to insert elements by mapping with their keys.
    mymap1['x'] = 23;
    mymap1['y'] = 21;

    cout<<"Printing element mapped by key 'b' using at() function : "<<mp.at('b')<<endl;

    //swap contents of 2 maps namely mymap and mymap1.
    mymap.swap(mymap1);

    /* prints swapped elements of mymap and mymap1 by iterating all the elements through    
        using   iterator. */
    cout<<"Swapped elements and their keys of mymap are: "<<endl;
    for(it=mymap.begin();it!=mymap.end();it++)
    {
    cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Swapped elements and their keys of mymap1 are: "<<endl;
    for(it=mymap1.begin();it!=mymap1.end();it++)
    {
    cout<<it->first<<" "<<it->second<<endl;
    }
    //erases element mapped at 'c'.
    mymap1.erase('c');

    //prints all elements of mymap after erasing element at 'c'.

    cout<<"Elements of mymap1 after erasing element at key 'c' : "<<endl;
    for(it=mymap1.begin();it!=mymap1.end();it++)
    {
    cout<<it->first<<" "<<it->second<<endl;
    }

    //erases elements in range from mymap1
    mymap1.erase(mymap1.begin(),mymap1.end());

    cout<<"As mymap1 is empty so empty() function will return 1 : " << mymap1.empty()<<endl;

    //number of elements with key = 'a' in map mp.
    cout<<"Number of elements with key = 'a' in map mp are : "<<mp.count('a')<<endl;

    //if mp is empty then itmp.empty will return 1 else 0.
    if(mp.empty())
    {
        cout<<"Map is empty"<<endl;
    }
    else
    {
        cout<<"Map is not empty"<<endl;
    }

    return 0;
}
```

```
Key and element's value of map are: b and 1
Printing element mapped by key 'b' using at() function : 1
Swapped elements and their keys of mymap are: 
x 23
y 21
Swapped elements and their keys of mymap1 are: 
a 2
b 1
c 43
Elements of mymap1 after erasing element at key 'c' : 
a 2
b 1
As mymap1 is empty so empty() function will return 1 : 1
Number of elements with key = 'a' in map mp are : 1
Map is not empty
```

---
## Stacks:

> Stack là một container tuân theo thứ tự LIFO (Last In First Out) và các phần tử được chèn và xóa từ một đầu của container. Phần tử được chèn cuối cùng sẽ được trích xuất trước.
```
stack <int> s;
```
Một số hàm thành viên của Stack là:

**push()**: Chèn phần tử vào đầu stack. Độ phức tạp thời gian của nó là O(1).

**pop( )**: loại bỏ phần tử khỏi đầu ngăn xếp. Độ phức tạp thời gian của nó là O(1).

**top( )**: truy cập phần tử trên cùng của stack. Độ phức tạp thời gian của nó là O(1).

**empty( )**: kiểm tra xem ngăn xếp có trống hay không. Độ phức tạp thời gian của nó là O(1).

**size( )**: Trả về kích cỡ của stack. Độ phức tạp thời gian của nó là O(1).





