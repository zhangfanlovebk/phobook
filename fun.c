////fun.c   ��һ��
//#include"phone.h"
////����ɾ������һ��޸���ϵ�˶���Ҫ�ж��Ƿ���ڸ���ϵ�ˣ�
////��������һ����̬�����ж���ϵ���Ƿ����
//static int search_linkman(Pho phobook, const char *name)
//{
//	int i = 0;
//    for (i = 0; i < (phobook->count); i++)
//    {
//        if (0 == strcmp(name, (phobook->linkman[i]).name))
//        {
//            return i;
//        }
//    }
//    return -1;
//}
// 
//void init(Pho phobook)
//{
//    phobook->count = 0;
//}
// 
//void add(Pho phobook)//ͨѶ¼�������ϵ��
//{
//    if ((phobook->count) > MAX)
//    {
//        printf("ͨѶ¼������������������ӣ�");
//        return;
//    }
//    printf("������Ҫ��ӵ���ϵ������>");
//    scanf("%s", (phobook->linkman)->name);
//    printf("������Ҫ��ӵ���ϵ���Ա�>");
//    scanf("%s", (phobook->linkman)->sex);
//    printf("������Ҫ��ӵ���ϵ������>");
//    scanf("%d", &(phobook->linkman)->age);
//    printf("������Ҫ��ӵ���ϵ�˵绰>");
//    scanf("%s", (phobook->linkman)->phone);
//    printf("������Ҫ��ӵ���ϵ�˵�ַ>");
//    scanf("%s", (phobook->linkman)->address);
//    printf("\n��ӳɹ�\n");
//    (phobook->count)++;
//}
// 
//void delete(Pho phobook)
//{
//    char nam[10];
//    int ret = 0;
//    if ((phobook->count) <= 0 || (phobook->count) > MAX)
//    {
//        printf("��ͨѶ¼��û�д���ϵ�ˣ�\n");
//    }
//    printf("��������ϵ�˵�����>");
//    scanf("%s", &nam);
//    ret = search_linkman(phobook, nam);
//    if (ret != -1)
//    {
//		int j = ret;
//        for (j = ret; j < (phobook->count-1); j++)
//        {
//            phobook->linkman[j]=phobook->linkman[j+1];
//        }
//        (phobook->count)--;
//        printf("ɾ���ɹ�!\n");
//    }
//    else printf("��ͨѶ¼��û�д���ϵ�ˣ�\n");
//}
// 
//void find(Pho phobook)
//{
//    char nam[10];
//    int ret = 0;
//    if ((phobook->count) <= 0 || (phobook->count) > MAX)
//    {
//        printf("��ͨѶ¼��û�д���ϵ�ˣ�\n");
//        return;
//    }
//    printf("��������ϵ�˵�����>");
//    scanf("%s", &nam);
//    ret = search_linkman(phobook, nam);
//    if (ret != -1)
//    {
//        printf("����ҵ���ϵ����ϢΪ��\n");
//        printf("---------������%s\n", phobook->linkman[ret].name);
//        printf("---------�Ա�%s\n", phobook->linkman[ret].sex);
//        printf("---------���䣺%d\n", phobook->linkman[ret].age);
//        printf("---------�绰��%s\n", phobook->linkman[ret].phone);
//        printf("---------��ַ��%s\n\n", phobook->linkman[ret].address);
//    }
//    else printf("û���ҵ���Ҫ���ҵ���ϵ�ˣ�\n");
//}
// 
//void change(Pho phobook)
//{
//    char nam[10];
//    int ret = 0;
//    if ((phobook->count) <= 0 || (phobook->count) > MAX)
//    {
//        printf("��ͨѶ¼��û�д���ϵ�ˣ�\n");
//        return;
//    }
//    printf("��������ϵ�˵�����>");
//    scanf("%s", &nam);
//    ret = search_linkman(phobook, nam);
//    if (ret != -1)
//    {
//        printf("��������ϵ���µ�����>");
//        scanf("%s", (phobook->linkman[ret]).name);
//        printf("��������ϵ���µ��Ա�>");
//        scanf("%s", (phobook->linkman[ret]).sex);
//        printf("��������ϵ���µ�����>");
//        scanf("%d", &(phobook->linkman[ret]).age);
//        printf("��������ϵ���µĵ绰����>");
//        scanf("%s", (phobook->linkman[ret]).phone);
//        printf("��������ϵ���µĵ�ַ>");
//        scanf("%s", (phobook->linkman[ret]).address);
//        printf("�޸ĳɹ�\n");
//    }
//    else printf("��ͨѶ¼�д���ϵ�˲�����!\n");
//}
// 
//void show(Pho phobook)
//{
//	int i = 0;
//    if ((phobook->count) == 0)
//    {
//        printf("��ͨѶ¼��û����ϵ�ˣ�\n");
//    }
//    else
//    {
//        printf("***********��ͨѶ¼����������Ϣ����>\n");
//        printf("%10s\t%5s\t%3s\t%10s\t%10s\t\n","����","�Ա�","����","�绰����","��ַ");
//		
//        for ( i = 0; i < phobook->count; i++)
//        {
//            printf("%10s\t%5s\t%3d\t%10s\t%10s\t",(phobook->linkman[i]).name,
//                (phobook->linkman[i]).sex, (phobook->linkman[i]).age, 
//                (phobook->linkman[i]).phone, (phobook->linkman[i]).address);
//        }
//    }
//}
// 
//void empty(Pho phobook)
//{
//    if ((phobook->count) == 0)
//        printf("��ͨѶ¼��û����ϵ��!\n");
//    else
//    {
//        (phobook->count) = 0;
//        printf("��ճɹ���\n");
//    }
//}
// 
//void name_sort(Pho phobook)//ð������ͨѶ¼��������ϵ��
//{
//    int i = 0, j = 0;
//    int k = phobook->count;
//    if ((phobook->count) == 0)
//    {
//        printf("��ͨѶ¼��û����ϵ��!\n");
//        return;
//    }
//    for (i = 0; i < (phobook->count) - 1; i++)
//    {
//        for (j = 0; j < (phobook->count) - i - 1; j++)
//        {
//            if (strcmp((phobook->linkman[j]).name, (phobook->linkman[j+1]).name)>0)
//            {
//                link temp = phobook->linkman[j];
//                phobook->linkman[j] = phobook->linkman[j+1];
//                phobook->linkman[j+1] = temp;
//            }
//        }
//    }
//}


//�ڶ���

#include "phone.h"

static void swap(person_p xp, person_p yp)
{
	person_t tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
// 1->full, 0->not full
static int isContactFull(contact_p c)
{
	assert(c);

	return c->size >= c->cap ? 1 : 0;
}
//1->inc success, 0->failed 
static int incContact(contact_p c)
{

	person_p new_c = realloc(c->contactList,\
		(c->cap + INC_SIZE)*sizeof(person_t));
	assert(c);
	if ( NULL == new_c ){
		perror("realloc");
		return 0;
	}
	c->contactList = new_c;
	c->cap += INC_SIZE;

	printf("room is little, inc success!\n");
	return 1;
}

void initContact(contact_pp c)
{
	assert(c);
	*c = (contact_p)malloc(sizeof(contact_t));
	if (NULL == *c){
		perror("malloc");
		exit(1);
	}

	(*c)->contactList = (person_p)malloc(sizeof(person_t)*INIT_CONTACT_SIZE);
	if (NULL == (*c)->contactList){
		perror("malloc");
		exit(2);
	}

	(*c)->cap = INIT_CONTACT_SIZE;
	(*c)->size = 0;

	fileLoad(*c);
}

int fileLoad(contact_p c)
{
	person_t p;
	FILE *fp = fopen(FILE_NAME, "rb");
	assert(c);
	if (NULL == fp){
		perror("fopen");
		return -2;
	}

	while (1){
		fread(&p, sizeof(person_t), 1, fp);
		if (feof(fp)){//?
			break;
		}
		addContact(c, &p);
	}

	fclose(fp);
}

int fileStore(contact_p c)
{
	int i = 0;
	FILE *fp = fopen(FILE_NAME, "wb");
	assert(c);
	if ( NULL == fp ){
		perror("fopen");
		return -1;
	}

	for (i = 0; i < c->size; i++){
		fwrite(c->contactList+i, sizeof(person_t), 1, fp);
	}

	fclose(fp);
}

void destroyContact(contact_p c)
{
	assert(c);

	fileStore(c); 

	free(c->contactList);
	c->contactList = NULL;
	free(c);
	c = NULL;
}

void addContact(contact_p c, person_p p)
{
	assert(c);
	assert(p);

	if (!isContactFull(c) || incContact(c)){
		int pos = c->size;
		c->contactList[pos] = *p;
		c->size++;
	}
}

void showContact(contact_p c)
{
	int i = 0;
	assert(c);
	for (i = 0; i < c->size; i++){
		printf("%-16s | %-1c | %-3d | %-16s | %-32s\n", c->contactList[i].name,\
			c->contactList[i].sex ,c->contactList[i].age ,\
			c->contactList[i].phone ,c->contactList[i].addr);
	}
}

void clearContact(contact_p c)
{
	assert(c);
	c->size = 0;
}

void delContact(contact_p c, const char *nameKey)
{
	int i = 0;
	assert(c);
	assert(nameKey);
	for (i = 0; i < c->size; i ++){
		if (strcmp(c->contactList[i].name, nameKey) == 0){
			swap(c->contactList + i, c->contactList + c->size - 1);
			c->size--;
		}
	}
}