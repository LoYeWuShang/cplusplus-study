#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;
//new的使用
//int main()
//{
//	//new的使用
//	int* p = new(int);
//	*p = 10;
//	int* pf = new int[10];
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		pf[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << "pf的值为" << pf[i] << endl;
//	}
//	cout << "p的值为" << *p << endl;
//	//new是在堆区去申请空间的，需要程序员自己释放
//	//为了防止内存泄露，就用delete释放
//	delete p;
//	delete[] pf;
//	return  0;
//}


//引用的使用
// 给变量起别名
//void fun( int &b)//在前面加上const后就不能在改变了
//{
//	b = 40;
//}
// int& fun2()
// {
//   static int a =10;//在引用作为返回值时，要将局部变量用static修饰
//   return a;
//    
// }
// void print(const int& val)
// {
//   //在被const修饰后，val就不能改变了
//    cout<<val<<endl;
// }
//int main()
//{
//	//引用只能变量引用变量，引用后共用同一块内存
//	/*int a = 10;
//	int& b = a;
//	cout << "b之前的值" << b << endl;
//	cout << "a之前的值" << a << endl;
//	b = 20;
//	cout << "b改变之后的值" << b << endl;
//	cout << "a改变以后的值" << a << endl;
//	return 0;*/
//
//	//引用被当成参数进行传参，相当于指针常量,传的是地址
//	// 可以通过函数里面的变量对实参进行修改
//	int a = 10;
//	fun(a);
//	cout << "a传参后的值" << a << endl;
// //如果引用作为函数的返回值，那么这个函数的调用可以作为左值
//  int & ref = fun2();
// cout << ref<<endl;
// fun2() = 100;
// cout<<ref<<endl;
// //引用作为返回值时返回的是与ref用同一块空间的a（是ref的别名）
// //所以ref也会改变
// //常量引用，在引用前加上const后，可以引用常量
// //const int& ref = 10;
// //常量引用一般使用在打印函数的参数设计中
// int a =10;
// print（a）;
// 
//}

//函数高级
//void func(int a, int b = 0, int c= 10)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//int main()
//{
//	//在定义函数时，给定默认初始值
//	//在初始默认值时一定要在最开始的设置位置向后的参数都要设置
//	//传参时可以只传默认值开始位置前面的参数
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	func(a,b,c);
//	//函数重载
//	//条件：函数作用域要相同
//	//函数参数的类型，数量，类型位置不同
//	//函数名要相同
//  //引用作为函数参数时，fun(int& a)和fun(const int& a),可以重载
//	return 0;
//}

//面向对象，类的概念,封装，继承，多态
// 在创建类时一定要标注权限，不然会默认为private私有权限
//创建一个人的类算出肥胖率
//class Person
//{
//public:
//	//类成员（属性，成员基本信息）
//	int m_height;
//	int m_weight;
//
//	//成员函数（行为，实现要求的函数）
//	bool Healthy(int height, int weight)
//	{
//		int tmp = weight / (height) * (height);
//		if (tmp < 25 && tmp>18)
//		{
//			return true ;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//int main()
//{
//	Person p;
//	int height =p.m_height = 175;
//	int weight =p.m_weight = 60;
//	int a = p.Healthy(height, weight);
//	if (a > 0)
//	{
//		cout << "正常" << endl;
//	}
//	else
//	{
//		cout << "不正常" << endl;
//	}
//	return 0;
//}

//建立一个长方形计算面积和周长
//class Rectangle
//{
//public:
//	//类成员的创建（属性）
//	int m_long;
//	int m_weight;
//
//	//成员函数（行为）
//	//周长
//	void Cong(int long,int weight)
//	{
//		int c = m_long * 2 + m_weight * 2;
//		cout << "周长是" << c << endl;
//	}
//	//面积
//	void Squr(int longg, int weight)
//	{
//		int s = longg * weight;
//		cout << "面积是" << s << endl;
//	}
//};
//int main()
//{
//
//	Rectangle r;
//	r.m_long = 10;
//	r.m_weight = 10;
//	r.Cong(r.m_long, r.m_weight);
//	r.Squr(r.m_long, r.m_weight);
//	return 0;
//
//}
//一般是把成员（属性设置为私有），把成员函数（行为）设置为公有
// 
//建立一个学生信息表
//class Student
//{
//public:
//	//成员函数（行为）
//	//int age = 18;
//	
//	void Print(int a,string n,string s)
//	{
//		cout << "这个学生的年龄是" << a << endl;
//		cout << "这个学生的名字是" << n << endl;
//		cout << "这个学生的性别是" << s << endl;
//	}
//private:
//	int m_age;
//	char name[10];
//	char sex[5];
//};
//int main()
//{
//	Student st;
//	st.Print(18, "zhang", "男");
//	return 0;
//}
//将学生信息封装
//对象属性一般设置为私有，然后用相关的共有函数去实现读写
// 类内的函数可以直接使用类内的变量，可以不用设置参数
//class Person
//{
//public:
//	//名字的写，设置名字
//	void setname(string n)
//	{
//		m_name = n;
//	}
//	//名字的读，获取名字
//	string getname()
//	{
//		return m_name;
//	}
//	//读取学生的年龄
//	int getage()
//	{
//		return m_age;//没有设置参数，直接使用类内的变量
//	}
//	//写偶像的名字，设置偶像
//	void setidol(string i)
//	{
//		m_idol = i;
//	}
//
//private:
//	int m_age = 18;//学生年龄，只能读
//	string m_name;//学生名字,将他可读可写
//	string m_idol;//学生偶像，只能写
//};
//int main()
//{
//	Person p;
//	p.setname("张三");
//	cout << "学生的名字是" << p.getname() << endl;
//	cout << "学生的年龄是" << p.getage() << endl;
//
//	return 0;
//}
//构造函数，析构函数和拷贝构造函数
//构造函数，析构函数和重构函数在创建了对象后编译器就会自动创建
//只是编译器创建的这三个函数中没有内容而已
//自己创建的构造函数（在没有参数时），在创建对象后就可以直接运行
// 构造和析构的命名和类名相同，构造函数可以有参数，构造函数没有返回值，析构函数前加个~
//析构函数是要构造函数所在作用域里的所有程序运行完后才会调用，并且不能设置参数
//class Person
//{
//public:
//	Person()
//	{
//		cout << "我是一个学生" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数应用" << endl;
//	}
//};
//int main()
//{
//	Person pt;
//	cout << "good" << endl;
//
//	return 0;
//}

//构造函数的分类和调用
//class Person
//{
//public:
//	//无参构造函数（默认构造函数）
//	Person()
//	{
//		cout << "无参构造函数的调用" << endl;
//	}
//	//有参构造函数
//	Person(int a)
//	{
//		age = a;
//		cout << "有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)//因为是拷贝所以要加上const修饰，然后加上引用避免另外开辟拷贝数据
//	{
//		age = p.age;
//		cout << "拷贝构造函数的调用" << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数的调用";
//	}
//
//	int age;
//};
//int main()
//{
//	//构造函数的调用
//	//括号法
//	//Person p1;//无参构造函数的调用
//	//Person p2(10);//有参构造函数的调用
//	//Person p3(p2);//拷贝构造函数的调用，可以调用p1和p2
//	//显示法
//	Person p1;
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//	//Person(10（p2）)不要使用匿名有参（拷贝）构造函数调用
//	//因为匿名构造函数在调用后会立马销毁并调用析构函数
//
//	//隐式转换法
//	Person p4 = 10;
//	return 0;
//}
// 拷贝构造函数的使用范围
//存在一个对后在拷贝一个对象
//作为函数的参数fun(const Person& p);
//作为函数的返回值Person fun();
//构造函数的调用规则
//写了有参就不会提供无参，写了拷贝就不会提供有参和无参

//浅拷贝和深拷贝
//class Person
//{
//public:
//	//初始化列表
//	//Person(int a,int b):m_a(a),m_b(b)
//	Person(int a,int h )
//	{
//		m_age = a;
//		m_height = new int (h);
//		cout << "有参构造函数的调用" << endl;
//	}
//	~Person()//浅拷贝在判断是否释放时，会因为重复释放而使程序崩溃
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		//析构函数的作用是，可以释放类中堆区的数据（例new出来的空间）
//		cout << "析构函数的调用" << endl;
//	}
//
//	//深拷贝，不用编译器的拷贝构造函数，而是自己写一个
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	int m_age;
//	int* m_height;
//};
//void test1()
//{
//	//浅拷贝
//	// 当析构函数判断m_height有没有释放时会出现崩溃，因为重复释放了
//	//用编译器写出的拷贝构造函数进行拷贝操作
//	Person p1(18,160);
//	cout << "p1的年龄为" << p1.m_age << endl;
//	Person p2(p1);//对编译器写出的拷贝构造函数调用
//	cout << "p2的年龄为" << p2.m_age << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//一个类成为另一个类的成员
//class Phone
//{
//public:
//	//用一个构造函数来命名
//	Phone(){}
//	Phone(string N)
//	{
//		m_Name = N;
//	}
//	string m_Name;
//};
//class Person
//{
//public:
//	//给人命名
//	Person(string n,string N)//用初始化列表时可以不用对Phone构造默认函数
//	{
//		m_name = n;
//		m_pname = N;
//	}
//	//人的名字
//	string m_name;
//
//	//手机名称
//	Phone m_pname;
//};
//void test()
//{
//	Person p("张三","小米");
//	cout << p.m_name << "拿着" << p.m_pname.m_Name << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//静态成员变量和静态成员函数
//他们也有访问权限
// 静态成员变量共用一个内存空间
//静态成员变量，在类内声明在类外初始化，并且要加上所在作用域（类）
//静态函数只能包含静态成员变量
//class Person
//{
//public:
//
//	static int m_age;
//
//};
//int Person::m_age = 10;//静态成员变量在类外初始化
//void test1()
//{
//	//静态成员变量可以通过对象访问
//	Person p;
//	cout << p.m_age << endl;
//	//静态成员变量也可以用作用域访问
//	//静态成员函数也是如此
//	cout << Person::m_age << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//成员变量和成员函数是分开存储的
//空类占一个字节，是为了区分开不同类的所占位置
//class Person
//{
//public:
//	int m_age;//非静态成员变量  属于类的对象上
//
//	void fun();//非静态成员函数  不属于类的对象上
//	
//	static int a;//静态成员变量  不属于类的对象上
//
//	static void func();//静态成员函数  不属于类的对象上
//	//因为成员变量和成员函数是分开存储的，所以整个类所占字节大小为 4个字节
//};
// int Person::a =10;
//void test()
//{
//	Person p;
//	cout << "Person类所占字节大小为" << sizeof(p) << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//this指针 的使用，本质是一个指针常量
//class Person
//{
//public:
//	//Person() {};
//	Person(int age)
//	{
//		//1、this可以防止变量名的冲突
//		// 在不重名时，变量就自带this指针
//		//age = age;
//		this->age = age;//加上this后，age就是类内的age
//	}
//	//this 指针作为函数的返回值，返回本身，返回值要加引用
//	Person& Personadd(Person& p)//成员函数实现类与类的相加
//	{
//		this->age += p.age;//this->age是本类里的age，p.age是传来的另一个类的age
//		return *this;
//	}
//	int age;
//};
//int main()
//{
//	//this指针作为返回值时，可以实现链式编程操作
//	Person p1(10);
//	Person p2(10);
//	p2.Personadd(p1).Personadd(p2);
//	cout << p2.age << endl;
//	return 0;
//}

//常函数和常对象
//常对象只能调用常函数
//class Person
//{
//public:
//	//常函数
//	void func()const
//	{
//		//this指向的变量
//		//this->m_a = 10;//常函数不能改变类内属性
//		this-> m_b = 10;//在经过muutable修饰后就可以改变属性
//	}
//	void fun()
//	{
//
//	}
//
//	mutable int m_b;
//	int m_a;
//};
//void test()
//{
//	const Person p;
//	//常对象只能访问常成员函数
//	//p.fun();
//	p.func();
//}
//int main()
//{
//	test();
//	return 0;
//}


//友元
//全局函数的友元使用
//class Building
//{
//	//用friend将要调用的全局函数进行优员化，使这个函数可以访问对应类的私有成员
//	//直接将这个全局函数复制粘贴过来就行
//	friend  void building(Building& B);
//
//public:
//	Building()
//	{
//		m_liviroom = "客厅";
//		m_baseroom = "卧室";
//	}
//
//	string m_liviroom;//共有的客厅
//
//private:
//	string m_baseroom;//私有的卧室
//
//};
//void building(Building& B)
//{
//	cout << "正在访问的是：" << B.m_liviroom << endl;
//	cout << "正在访问的是：" << B.m_baseroom << endl;
//}

//类友元，一个类做友元
class Building;
//在建筑类中包含一个基友类
class Gay
{
public:
	void visit();
	Building* building;
};
class Building
{
public:
	Building()
	{
		m_liviroom = "客厅";
		m_baseroom = "卧室";
	}
public:
	string m_liviroom;//共有的客厅
private:
	string m_baseroom;//私有的卧室
};
//用一个visit函数访问Building中的成员
void visit()
{

}

void test1()
{
	Building b;
	//cout << "正在访问的是："<<
	//调用全局函数building
	//building(B);
}
int main()
{
	test1();
	return 0;
}
