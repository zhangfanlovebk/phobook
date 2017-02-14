////main.c   ��һ��
//#include"phone.h"
//#include<stdlib.h>
// 
//void menu()
//{
//    printf("\n\t\t*************����ͨѶ¼*************\n");
//    printf("\t\t\t    1.�����ϵ����Ϣ\n");
//    printf("\t\t\t    2.ɾ��ָ����ϵ����Ϣ\n");
//    printf("\t\t\t    3.����ָ����ϵ����Ϣ\n");
//    printf("\t\t\t    4.�޸�ָ����ϵ����Ϣ\n");
//    printf("\t\t\t    5.��ʾ������ϵ����Ϣ\n");
//    printf("\t\t\t    6.���������ϵ��\n");
//    printf("\t\t\t    7.����������������ϵ��\n");
//    printf("\t\t\t    0.�˳�ϵͳ\n");
//}
// 
//int main()
//{
//    Phonebook phob;
//    int input=1;
//    init(&phob);
//    while (input)
//    {
//        menu();
//        printf("��������Ҫѡ������>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case ADD: add(&phob);break;				//���
//        case DELETE: delete(&phob); break;		//ɾ��
//        case FIND: find(&phob); break;			//����
//        case CHANGE:change(&phob); break;		//�޸�
//        case SHOW: show(&phob); break;			//��ʾ
//        case EMPTY: empty(&phob); break;		//���
//        case NAME_SORT:name_sort(&phob); break;	//��������
//        case EXIT:
//            printf("��лʹ�ã�\n"); system("pause"); return 0;
//        default:
//            printf("��������������������>"); break;
//        }
//    }
//    system("pause");
//    return 0;
//}


//�ڶ���
#include "phone.h"

static void usage()
{
	printf("Usage: Please Enter Right code[0-7]!\n");
}

static void myAdd(contact_p c)
{
	person_t p;
	assert(c);
	printf("Please Enter<name, sex, age, phone, addr> ");
	scanf("%s %c %d %s %s", p.name, &p.sex, &p.age, p.phone, p.addr);
	addContact(c, &p);
}

static void myDelete(contact_p c)
{
	char name[32];
	printf("Please Enter The name which you want to delete: ");
	scanf("%s", name);
	delContact(c, name);
}

int main()
{
	
	volatile int done = 0;
	int s = -1;
	contact_p myContact = NULL;
	initContact(&myContact);
	while (!done){
		s = -1;
		printf("######################################\n");
		printf("##1. add    ############# 2. delete ##\n");
		printf("##3. modify ############# 4. search ##\n");
		printf("##5. show   ############# 6. clear  ##\n");
		printf("##7. sort   ############# 0. exit   ##\n");
		printf("######################################\n");
		printf("Please Select<0~7>: ");
		scanf("%d", &s);
		switch (s){
		case 0:
			printf("bye~\n");
			done = 1;
			break;
		case 1:
			myAdd(myContact);
			break;
		case 2:
			myDelete(myContact);
			break;
		case 3:
			//Modify();
			break;
		case 4:
			//mySearch();
			break;
		case 5:
			showContact(myContact);
			break;
		case 6:
			clearContact(myContact);
			break;
		case 7:
			//mySort();
			break;
		default:
			usage();
			break;
		}
	}
	destroyContact(myContact);
	system("pause");
	return 0;
}
