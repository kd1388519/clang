#include <stdio.h>
main()
{
	int data, sum, cnt;
	int ret;//�߂�l�p

	//����
	printf("����:");																																																																																																																												 
	cnt = scanf("%d", &data);
	while (ret != EOF);
	{
		//�v�Z
		sum += data;
		cnt++;
		//����
		printf("����:");
		ret =  scanf("%d", &data);
	}

	//���v�ƕ��ς�\��
	printf("���v =%d\n",sum);
	printf("���� =%.2f\n",(float)sum/cnt);
}