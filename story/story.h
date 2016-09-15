/*
Copyright 2013-2016 Yuer

This file is part of Story.

    Story is free software: you can redistribute it and/or 
	modify it under the terms of the GNU General Public 
	License as published by the Free Software Foundation, 
	either version 3 of the License, or (at your option) 
	any later version.

    Story is distributed in the hope that it will be useful, 
	but WITHOUT ANY WARRANTY; without even the implied 
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
	PURPOSE.  See the GNU General Public License for more 
	details.

    You should have received a copy of the GNU General 
	Public License along with Story.  If not, see 
	<http://www.gnu.org/licenses/>.
*/

#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#include<sys/types.h>
#include<pwd.h>
#include"conio.h"

#define size 2552                // 20+20+20+8*12+28*17+80*24
#define grade 40
#define ver "0.3.4"

struct USERINFO
{
 char username[20];
 char userpwd[20];
};

struct GOODS
{
	char name[20];               // 物品名字
	char nam;                    // 符号
	int q;                       // 数量
};

struct EQUIPMENT
{
	char name[20];               // 装备名字
	char kind[20];               // 装备种类
	int grd;                     // 装备级数
	char rank;                   // 装备级别
	double axHP;                 // 增加生命量
	double axMP;                 // 增加魔法量
	double aatc;                 // 增加攻击量
	double adef;                 // 增加防御量
};

struct MONSTER
{
	char name[20];               // 名字
	int grd;				 	 // 等级
	double HP;                   // 生命
	double atc;		 	         // 攻击力
	double def;		  	         // 防御力
	double exp;			         // 得到经验值
	double mny;	 	             // 爆出金币
	struct GOODS out[10];		 // 爆出物品
	struct EQUIPMENT oequ[10];   // 爆出装备
};

struct CHARACTER
{
	char name[20];               // 名字
	int grd;				   	 // 等级
	char prof[20];               // 职业
	double xHP;	      	         // 生命上限
	double HP;                   // 生命值
	double xMP;                  // 魔法上限
	double MP;                   // 魔法值
	double atc;				     // 攻击力
	double def;			         // 防御力
	double mny;			         // 金币
	struct EQUIPMENT equ[24];	 // 装备
	double xexp;			     // 经验上限
	double exp;		  	         // 经验值
	struct GOODS goods[17];		 // 物品
	char v[20];                  // 所在地方
	int t;						 // 物品变量
	int e;                       // 装备变量
	int n,m,q;                   // 临时变量
	double h,k;                  // 临时变量
	char filename[100];          // 文件
	int p;                       // 角色号
	int trp;                     // 队里号
	char trpname[37];            // 队名
	char buddy1[20];             // 队员
	char buddy2[20];             // 队员
	char buddy3[20];             // 队员
	char b1;                     // 准备
	char b2;                     // 准备
	char b3;                     // 准备
};

struct MONSTER Out(struct MONSTER mon,int b);
void Printf(struct CHARACTER cha);
struct CHARACTER SeeGoods(struct CHARACTER cha);
void Choice(struct CHARACTER cha);
struct CHARACTER Uptrp(struct CHARACTER cha);

struct USERINFO USER[100];
int CurCounts;
char jiami[20] = "hbxfbmphbxfbmphbxfb";
char act[20];
char storyfolder[100]="/story/";
char savefolder[100]="/story/save/";
char accountfile[100]="/story/account.ys";
char onlinefile[100]="/story/onlineact.ys";
char namefile[100]="/story/name.ys";
char troopfile[100]="/story/troops.ys";
char tfile[100]="/story/t.ys";
char logfile[100]="/story/log.txt";
