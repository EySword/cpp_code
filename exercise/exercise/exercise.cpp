// exercise.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


int bit_operation() {
    cout << "按位与&:12&18=" << (12 & 18) << ",清零或者获取特定位" << endl << endl;
    cout << "按位或|：21|18=" << (21 & 18) << "，将变量中某些位置1而其他位不变" << endl << endl;
    cout << "按位异或^(不相同时为1)：21^18=" << (21 ^ 18) << "将某些位取反而保留其他位不变" << endl;
    cout << "如果a^b=c，那么c^b=a，c^a=b。可用于最简单的加密运算" << endl;
    cout << "异或实现不通过临时变量而交换两个变量：a=a^b; b=b^a; a=a^b;" << endl << endl;
    cout << "左移运算符'<<'，整体向左移动n位，相当于乘以2的n次方" << endl;
    cout << "右移运算符'>>'，整体向右移动n位，相当于除以2的n次方，且编译器规定左边补进与原本符号位保持一致" << endl << endl;

    return 0;
}

int quote() {
    cout << "某个变量的引用等价于这个变量，相当于该变量的一个别名：\nint n = 4;\nint & r = n;\n" << endl;
    cout << "引用只能引用变量，不能是常量或者表达式。" << endl << endl;
    cout << "常引用：\nint n;\nconst int & r = n;\n" << endl;
    cout << "不能通过常引用去修改其引用的内容" << endl;
    return 0;
}

int dynamic_memory_allocation() {
    cout << "动态内存分配:/nint *p = new int;/n*p = 5;\ndelete p;" << endl;
    cout << "new分配动态空间，delete进行空间释放" << endl;
    cout << "动态分配的数组：\n" << "int *p = new int[20];\np[0] = 1;delete []p;" << endl;
    return 0;
}

int funType() {
    cout << "内联函数：执行时直接将函数放入执行语句内，而不是通过一个更耗时间的调用" << endl;
    cout << "inline int Max(int a,int b){\n   if(a>b) return a;\n    return b;\n}" << endl;
    cout << "但这样会是执行的整体更大" << endl << endl;
    cout << "函数重载：一个函数名字相同但是参数格数类型不相同" << endl;
    cout << "int Max(int a,int b){}/nint Max(float a, int b, int c){}\n调用的时候自动根据参数进行选择" << endl << endl;

    return 0;
}

int main()
{
    
    /*cout << "Hello World!"<<"+++++"<<endl;
    cout << "next line";
    int radius;
    cout << "input radius:";
    cin >> radius;
    cout << "radius is:" << radius;*/
}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
