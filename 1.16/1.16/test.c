#include <stdio.h>
//struct A
//{
//	int _a : 3;
//	int _b : 4;
//	int _c : 15;
//	int _d : 20;
//};
//int main()
//{
//	printf("%d", sizeof(struct A));
//	return 0;
//}
//struct S
//{
//	char a : 4;
//	char b : 5;
//	char c : 3;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 12;
//	s.b = 10;
//	s.c = 4;
//	s.d = 3;
//	return 0;
//}
//空间是如何开辟的呢？
//#define MAX_SIZE 5
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d", sizeof(struct _Record_Struct));
//	return 0;
//}
int main()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
}