#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
using namespace std;
//new��ʹ��
//int main()
//{
//	//new��ʹ��
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
//		cout << "pf��ֵΪ" << pf[i] << endl;
//	}
//	cout << "p��ֵΪ" << *p << endl;
//	//new���ڶ���ȥ����ռ�ģ���Ҫ����Ա�Լ��ͷ�
//	//Ϊ�˷�ֹ�ڴ�й¶������delete�ͷ�
//	delete p;
//	delete[] pf;
//	return  0;
//}


//���õ�ʹ��
// �����������
//void fun( int &b)//��ǰ�����const��Ͳ����ڸı���
//{
//	b = 40;
//}
// int& fun2()
// {
//   static int a =10;//��������Ϊ����ֵʱ��Ҫ���ֲ�������static����
//   return a;
//    
// }
// void print(const int& val)
// {
//   //�ڱ�const���κ�val�Ͳ��ܸı���
//    cout<<val<<endl;
// }
//int main()
//{
//	//����ֻ�ܱ������ñ��������ú���ͬһ���ڴ�
//	/*int a = 10;
//	int& b = a;
//	cout << "b֮ǰ��ֵ" << b << endl;
//	cout << "a֮ǰ��ֵ" << a << endl;
//	b = 20;
//	cout << "b�ı�֮���ֵ" << b << endl;
//	cout << "a�ı��Ժ��ֵ" << a << endl;
//	return 0;*/
//
//	//���ñ����ɲ������д��Σ��൱��ָ�볣��,�����ǵ�ַ
//	// ����ͨ����������ı�����ʵ�ν����޸�
//	int a = 10;
//	fun(a);
//	cout << "a���κ��ֵ" << a << endl;
// //���������Ϊ�����ķ���ֵ����ô��������ĵ��ÿ�����Ϊ��ֵ
//  int & ref = fun2();
// cout << ref<<endl;
// fun2() = 100;
// cout<<ref<<endl;
// //������Ϊ����ֵʱ���ص�����ref��ͬһ��ռ��a����ref�ı�����
// //����refҲ��ı�
// //�������ã�������ǰ����const�󣬿������ó���
// //const int& ref = 10;
// //��������һ��ʹ���ڴ�ӡ�����Ĳ��������
// int a =10;
// print��a��;
// 
//}

//�����߼�
//void func(int a, int b = 0, int c= 10)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//int main()
//{
//	//�ڶ��庯��ʱ������Ĭ�ϳ�ʼֵ
//	//�ڳ�ʼĬ��ֵʱһ��Ҫ���ʼ������λ�����Ĳ�����Ҫ����
//	//����ʱ����ֻ��Ĭ��ֵ��ʼλ��ǰ��Ĳ���
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	func(a,b,c);
//	//��������
//	//����������������Ҫ��ͬ
//	//�������������ͣ�����������λ�ò�ͬ
//	//������Ҫ��ͬ
//  //������Ϊ��������ʱ��fun(int& a)��fun(const int& a),��������
//	return 0;
//}

//���������ĸ���,��װ���̳У���̬
// �ڴ�����ʱһ��Ҫ��עȨ�ޣ���Ȼ��Ĭ��Ϊprivate˽��Ȩ��
//����һ���˵������������
//class Person
//{
//public:
//	//���Ա�����ԣ���Ա������Ϣ��
//	int m_height;
//	int m_weight;
//
//	//��Ա��������Ϊ��ʵ��Ҫ��ĺ�����
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
//		cout << "����" << endl;
//	}
//	else
//	{
//		cout << "������" << endl;
//	}
//	return 0;
//}

//����һ�������μ���������ܳ�
//class Rectangle
//{
//public:
//	//���Ա�Ĵ��������ԣ�
//	int m_long;
//	int m_weight;
//
//	//��Ա��������Ϊ��
//	//�ܳ�
//	void Cong(int long,int weight)
//	{
//		int c = m_long * 2 + m_weight * 2;
//		cout << "�ܳ���" << c << endl;
//	}
//	//���
//	void Squr(int longg, int weight)
//	{
//		int s = longg * weight;
//		cout << "�����" << s << endl;
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
//һ���ǰѳ�Ա����������Ϊ˽�У����ѳ�Ա��������Ϊ������Ϊ����
// 
//����һ��ѧ����Ϣ��
//class Student
//{
//public:
//	//��Ա��������Ϊ��
//	//int age = 18;
//	
//	void Print(int a,string n,string s)
//	{
//		cout << "���ѧ����������" << a << endl;
//		cout << "���ѧ����������" << n << endl;
//		cout << "���ѧ�����Ա���" << s << endl;
//	}
//private:
//	int m_age;
//	char name[10];
//	char sex[5];
//};
//int main()
//{
//	Student st;
//	st.Print(18, "zhang", "��");
//	return 0;
//}
//��ѧ����Ϣ��װ
//��������һ������Ϊ˽�У�Ȼ������صĹ��к���ȥʵ�ֶ�д
// ���ڵĺ�������ֱ��ʹ�����ڵı��������Բ������ò���
//class Person
//{
//public:
//	//���ֵ�д����������
//	void setname(string n)
//	{
//		m_name = n;
//	}
//	//���ֵĶ�����ȡ����
//	string getname()
//	{
//		return m_name;
//	}
//	//��ȡѧ��������
//	int getage()
//	{
//		return m_age;//û�����ò�����ֱ��ʹ�����ڵı���
//	}
//	//дż������֣�����ż��
//	void setidol(string i)
//	{
//		m_idol = i;
//	}
//
//private:
//	int m_age = 18;//ѧ�����䣬ֻ�ܶ�
//	string m_name;//ѧ������,�����ɶ���д
//	string m_idol;//ѧ��ż��ֻ��д
//};
//int main()
//{
//	Person p;
//	p.setname("����");
//	cout << "ѧ����������" << p.getname() << endl;
//	cout << "ѧ����������" << p.getage() << endl;
//
//	return 0;
//}
//���캯�������������Ϳ������캯��
//���캯���������������ع������ڴ����˶����������ͻ��Զ�����
//ֻ�Ǳ�����������������������û�����ݶ���
//�Լ������Ĺ��캯������û�в���ʱ�����ڴ��������Ϳ���ֱ������
// �����������������������ͬ�����캯�������в��������캯��û�з���ֵ����������ǰ�Ӹ�~
//����������Ҫ���캯������������������г����������Ż���ã����Ҳ������ò���
//class Person
//{
//public:
//	Person()
//	{
//		cout << "����һ��ѧ��" << endl;
//	}
//	~Person()
//	{
//		cout << "Person����������Ӧ��" << endl;
//	}
//};
//int main()
//{
//	Person pt;
//	cout << "good" << endl;
//
//	return 0;
//}

//���캯���ķ���͵���
//class Person
//{
//public:
//	//�޲ι��캯����Ĭ�Ϲ��캯����
//	Person()
//	{
//		cout << "�޲ι��캯���ĵ���" << endl;
//	}
//	//�вι��캯��
//	Person(int a)
//	{
//		age = a;
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//	//�������캯��
//	Person(const Person& p)//��Ϊ�ǿ�������Ҫ����const���Σ�Ȼ��������ñ������⿪�ٿ�������
//	{
//		age = p.age;
//		cout << "�������캯���ĵ���" << endl;
//	}
//	//��������
//	~Person()
//	{
//		cout << "���������ĵ���";
//	}
//
//	int age;
//};
//int main()
//{
//	//���캯���ĵ���
//	//���ŷ�
//	//Person p1;//�޲ι��캯���ĵ���
//	//Person p2(10);//�вι��캯���ĵ���
//	//Person p3(p2);//�������캯���ĵ��ã����Ե���p1��p2
//	//��ʾ��
//	Person p1;
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//	//Person(10��p2��)��Ҫʹ�������вΣ����������캯������
//	//��Ϊ�������캯���ڵ��ú���������ٲ�������������
//
//	//��ʽת����
//	Person p4 = 10;
//	return 0;
//}
// �������캯����ʹ�÷�Χ
//����һ���Ժ��ڿ���һ������
//��Ϊ�����Ĳ���fun(const Person& p);
//��Ϊ�����ķ���ֵPerson fun();
//���캯���ĵ��ù���
//д���вξͲ����ṩ�޲Σ�д�˿����Ͳ����ṩ�вκ��޲�

//ǳ���������
//class Person
//{
//public:
//	//��ʼ���б�
//	//Person(int a,int b):m_a(a),m_b(b)
//	Person(int a,int h )
//	{
//		m_age = a;
//		m_height = new int (h);
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//	~Person()//ǳ�������ж��Ƿ��ͷ�ʱ������Ϊ�ظ��ͷŶ�ʹ�������
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		//���������������ǣ������ͷ����ж��������ݣ���new�����Ŀռ䣩
//		cout << "���������ĵ���" << endl;
//	}
//
//	//��������ñ������Ŀ������캯���������Լ�дһ��
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
//	//ǳ����
//	// �����������ж�m_height��û���ͷ�ʱ����ֱ�������Ϊ�ظ��ͷ���
//	//�ñ�����д���Ŀ������캯�����п�������
//	Person p1(18,160);
//	cout << "p1������Ϊ" << p1.m_age << endl;
//	Person p2(p1);//�Ա�����д���Ŀ������캯������
//	cout << "p2������Ϊ" << p2.m_age << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}

//һ�����Ϊ��һ����ĳ�Ա
//class Phone
//{
//public:
//	//��һ�����캯��������
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
//	//��������
//	Person(string n,string N)//�ó�ʼ���б�ʱ���Բ��ö�Phone����Ĭ�Ϻ���
//	{
//		m_name = n;
//		m_pname = N;
//	}
//	//�˵�����
//	string m_name;
//
//	//�ֻ�����
//	Phone m_pname;
//};
//void test()
//{
//	Person p("����","С��");
//	cout << p.m_name << "����" << p.m_pname.m_Name << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//��̬��Ա�����;�̬��Ա����
//����Ҳ�з���Ȩ��
// ��̬��Ա��������һ���ڴ�ռ�
//��̬��Ա�����������������������ʼ��������Ҫ���������������ࣩ
//��̬����ֻ�ܰ�����̬��Ա����
//class Person
//{
//public:
//
//	static int m_age;
//
//};
//int Person::m_age = 10;//��̬��Ա�����������ʼ��
//void test1()
//{
//	//��̬��Ա��������ͨ���������
//	Person p;
//	cout << p.m_age << endl;
//	//��̬��Ա����Ҳ���������������
//	//��̬��Ա����Ҳ�����
//	cout << Person::m_age << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}

//��Ա�����ͳ�Ա�����Ƿֿ��洢��
//����ռһ���ֽڣ���Ϊ�����ֿ���ͬ�����ռλ��
//class Person
//{
//public:
//	int m_age;//�Ǿ�̬��Ա����  ������Ķ�����
//
//	void fun();//�Ǿ�̬��Ա����  ��������Ķ�����
//	
//	static int a;//��̬��Ա����  ��������Ķ�����
//
//	static void func();//��̬��Ա����  ��������Ķ�����
//	//��Ϊ��Ա�����ͳ�Ա�����Ƿֿ��洢�ģ�������������ռ�ֽڴ�СΪ 4���ֽ�
//};
// int Person::a =10;
//void test()
//{
//	Person p;
//	cout << "Person����ռ�ֽڴ�СΪ" << sizeof(p) << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

//thisָ�� ��ʹ�ã�������һ��ָ�볣��
//class Person
//{
//public:
//	//Person() {};
//	Person(int age)
//	{
//		//1��this���Է�ֹ�������ĳ�ͻ
//		// �ڲ�����ʱ���������Դ�thisָ��
//		//age = age;
//		this->age = age;//����this��age�������ڵ�age
//	}
//	//this ָ����Ϊ�����ķ���ֵ�����ر�������ֵҪ������
//	Person& Personadd(Person& p)//��Ա����ʵ������������
//	{
//		this->age += p.age;//this->age�Ǳ������age��p.age�Ǵ�������һ�����age
//		return *this;
//	}
//	int age;
//};
//int main()
//{
//	//thisָ����Ϊ����ֵʱ������ʵ����ʽ��̲���
//	Person p1(10);
//	Person p2(10);
//	p2.Personadd(p1).Personadd(p2);
//	cout << p2.age << endl;
//	return 0;
//}

//�������ͳ�����
//������ֻ�ܵ��ó�����
//class Person
//{
//public:
//	//������
//	void func()const
//	{
//		//thisָ��ı���
//		//this->m_a = 10;//���������ܸı���������
//		this-> m_b = 10;//�ھ���muutable���κ�Ϳ��Ըı�����
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
//	//������ֻ�ܷ��ʳ���Ա����
//	//p.fun();
//	p.func();
//}
//int main()
//{
//	test();
//	return 0;
//}


//��Ԫ
//ȫ�ֺ�������Ԫʹ��
//class Building
//{
//	//��friend��Ҫ���õ�ȫ�ֺ���������Ա����ʹ����������Է��ʶ�Ӧ���˽�г�Ա
//	//ֱ�ӽ����ȫ�ֺ�������ճ����������
//	friend  void building(Building& B);
//
//public:
//	Building()
//	{
//		m_liviroom = "����";
//		m_baseroom = "����";
//	}
//
//	string m_liviroom;//���еĿ���
//
//private:
//	string m_baseroom;//˽�е�����
//
//};
//void building(Building& B)
//{
//	cout << "���ڷ��ʵ��ǣ�" << B.m_liviroom << endl;
//	cout << "���ڷ��ʵ��ǣ�" << B.m_baseroom << endl;
//}

//����Ԫ��һ��������Ԫ
class Building;
//�ڽ������а���һ��������
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
		m_liviroom = "����";
		m_baseroom = "����";
	}
public:
	string m_liviroom;//���еĿ���
private:
	string m_baseroom;//˽�е�����
};
//��һ��visit��������Building�еĳ�Ա
void visit()
{

}

void test1()
{
	Building b;
	//cout << "���ڷ��ʵ��ǣ�"<<
	//����ȫ�ֺ���building
	//building(B);
}
int main()
{
	test1();
	return 0;
}
