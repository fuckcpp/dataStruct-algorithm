#include"stl_test.h"
void test1()
{
	int ia[6] = { 3,4,2,1,6,5 };
	vector<int, allocator<int>> vi(ia, ia + 6);
	cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 3)));
	//predicate ÊÇ¶ÏÑÔ¡¢Ìõ¼þ
}
string& get_a_target_string()
{
	char s[10];
	string str;
	cout << "target(0~32767)" ;
	cin >> s;
	str = s;
	cout << str << endl;
	return str;
}
int numeric(const int *p1, const int *p2) {
	return(*p1 - *p2);
}
/*
void vector_test(long& value)
{
vector<string> v;

char buff[10];
clock_t timestart = clock();
	for (long i = 0; i < value; i++)
	{
		try{
			snprintf(buff, 10, "%d", rand());
			v.push_back(buff);
		}
		catch (const std::exception& ex){
			cout << "i=" << i << " " << ex.what() << endl;
			abort();
		}
	}
	
	cout << "milli-seconds:" << (clock() - timestart) << endl;
	cout << "vector.size()" << v.size() << endl;
	cout << "vector.data()" << v.data() << endl;
	//cout << "vector.front()" << v.front() << endl;
	//cout << "vector.back()" << v.back() << endl;
	cout << "vector.capacity()"<<v.capacity() << endl;
	
string target = get_a_target_string();
	{
	timestart = clock();
	cout << "target:" << target << endl;
	vector<string>::iterator pItem = ::find(v.begin(), v.end(), target);
	cout << "::find,milli-seconds:" << (clock() - timestart) << endl;

	if (pItem != v.end())
		cout << "found," << *pItem<< endl;
	else
		cout << "not found" << endl;
	}
	
	
	{
		timestart = clock();
		sort(v.begin(), v.end());
string* pItem = (string*)bsearch(&target, v.data(), v.size(), sizeof(string), (int(*)(const void *, const void *))numeric);
		if (pItem != NULL)
		cout << "found," << *pItem << endl;
		else
		cout << "not found!" << endl;
	}
	*/
//}