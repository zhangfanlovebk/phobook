////phone.h 第一种
//#ifndef __PHONE_H__
//#define __PHONE_H__
// 
//#define _CRT_SECURE_NO_WARNINGS
// 
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 1000
//#define NAME 20
//#define SEX 10
//#define AGE 20
//#define PHONE 15
//#define ADDRESS 50
// 
//enum OP
//{
//    EXIT,
//    ADD,
//    DELETE,
//    FIND,
//    CHANGE,
//    SHOW,
//    EMPTY,
//    NAME_SORT,
//};
// 
//typedef struct linkman
//{
//    char name[NAME];
//    char sex[SEX];
//    int age;
//    char phone[PHONE];
//    char address[ADDRESS];
//}link;
// 
//typedef struct Phonebook
//{
//    int count;
//	link linkman[MAX];
//}Phonebook, *Pho;//Pho为指针类型
// 
//void init(Pho phobook);
//void add(Pho phobook);
//void delete(Pho phobook);
//void find(Pho phobook);
//void change(Pho phobook);
//void show(Pho phobook);
//void empty(Pho phobook);
//void name_sort(Pho phobook);
// 
//#endif


//第二种
#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <windows.h>
#include <assert.h>

#define INIT_CONTACT_SIZE 64
#define INC_SIZE 32
#define FILE_NAME "fileBak.txt"

#pragma warning(disable:4996)

typedef struct person{
	char name[32];
	char sex;
	unsigned char age;
	char phone[16];
	char addr[128];
}person_t, *person_p, **person_pp;

typedef struct contact{
	int cap;
	int size;
	person_p contactList;
}contact_t, *contact_p, **contact_pp;

void initContact(contact_pp c);
void destroyContact(contact_p c);
void addContact(contact_p c, person_p p);
void delContact(contact_p c, const char *nameKey);
//void searchContact();
//void modContact();
void showContact(contact_p c);
void clearContact(contact_p c);
//void sortContact();

int fileLoad(contact_p c);
int fileStore(contact_p c);




#endif
