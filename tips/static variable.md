# TIPs C PROGRAMMING #
by soizensun 

~~~~~~~ ����ͧ   ��� Declare variable Ẻ  static ~~~~~~~~~

������ҧ  code Ẻ ������ 

	#include<stdio.h>

	int fn(int x){
		int a = 3;
		printf("a_start = %d\n",a );
		printf("a = a+x => %d = %d+%d\n",a+x,a,x );
		a = a+x;
		printf("a_end = %d\n",a );
		printf("============================================\n");
	}
	int main(){
		fn(2);
		fn(4);
		fn(6);
		fn(8);
	}

code ��� �������ҧ function �������  fn() ����� �����С�ȵ���� a ��Դ int ����� �·ӡ�úǡ �Ѻ��� x 
��š�� run �͡�Ҵѧ���

	a_start = 3
	a = a+x => 5 = 3+2
	a_end = 5
	============================================
	a_start = 3
	a = a+x => 7 = 3+4
	a_end = 7
	============================================
	a_start = 3
	a = a+x => 9 = 3+6
	a_end = 9
	============================================
	a_start = 3
	a = a+x => 11 = 3+8
	a_end = 11
	============================================

���������� � function ����� a ��١��С�Ȣ�鹷ء����
������һ�С�� ����� a Ẻ static �ҡ  int a = 3; ��  static int a = 3; �ѧ���

������ҧ code Ẻ ��С��Ẻ static

	#include<stdio.h>

	int fn(int x){
		static int a = 3;
		printf("a_start = %d\n",a );
		printf("a = a+x => %d = %d+%d\n",a+x,a,x );
		a = a+x;
		printf("a_end = %d\n",a );
		printf("============================================\n");
	}
	int main(){
		fn(2);
		fn(4);
		fn(6);
		fn(8);
	}

�ѧࡵ����÷Ѵ��� 4 ���С����� static int a = 3;   �Ҵټš�� run ��Ҩ��Դ���â��

	a_start = 3
	a = a+x => 5 = 3+2
	a_end = 5
	============================================
	a_start = 5
	a = a+x => 9 = 5+4
	a_end = 9
	============================================
	a_start = 9
	a = a+x => 15 = 9+6
	a_end = 15
	============================================
	a_start = 15
	a = a+x => 23 = 15+8
	a_end = 23
	============================================
�������� �����  a �������¹�� 3  ������� �����  int a �ж١�ͧ��鹷��� memory ���������
�� ��û�С��  static int a; �зӧҹ����� function ����
 
