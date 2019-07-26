# C-PointerLecture
C语言专题知识讲解示例代码
 # 目录
 * 数据类型
 	* [数据大小](#数据大小)
 	* 类型意义
 * 
 ## 数据大小
   各数据类型计算方法  点击->[访问源码](C-PointerLecture/1.数据类型)
   
| 类型 | 大小(x86) |
|:------:|:-----------:|
| bool   |  1      |
| char   |  1      |
| short  | 2       |
| int    |  4      |
| long   |  4      |
| float  |  4      |
| double  | 8      |
| void*   | 4      |
| bool*   | 4      |
| char*   | 4      |
| short*  | 4      |
| int*    | 4      |
| long*   | 4      |
| float*  | 4      |
| double* | 4      |
| MyStruct    |    2   |
| MyStruct*   |    4   |
|             |        |
| int fun()   |    4   |
|             |        |
| int fun()*  |    4   |
### 结论
- 1.指针也是变量 他也占用空间即使 `void* `
- 2.指针长度取决于软件 32\64 
