#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	string account, passwd, name;
	char input;
	cout << "密码管理器Beta版" << endl;
	ofstream outfile;
	system("md C:\\PasswdTee");

	//////////////////////////////////////////
	while (1)
	{
		cout << "怎么称呼你要添加的账号？:";
		getchar();
		getline(cin, name);
		cout << endl << "请输入账号名：";
		getline(cin, account);
		cout << endl << "请输入账号密码：";
		getline(cin, passwd);
		cout << endl << endl << "你输入的账号名称是  " << name << "\n账号是  " << account << "\n密码是  " << passwd<<endl;
		cout << "确定吗？(输入y/n ,默认为n)\n";
		cin >> input;
		switch (input)
		{
			case 'y':
				{
					outfile.open("C:\\PasswdTee\Passwd.txt");
					outfile << endl << name << endl << account << endl << passwd << endl;
					outfile.close();
					cout << "写入成功" << endl;
					break;
				}
			case 'n':
				{
					name = "", account = "", passwd = "";
					cout << "已停止写入" << endl;
					break;
				}
			default:
				{
					name = "", account = "", passwd = "";
					cout << "已停止写入" << endl;
					break;
				}

		}
	}
	
	/////////////////////////////////////////
	return 0;
}
