#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int drink_cost = 0;
	char userans_cost_char[10];
	int userans_cost = 0;
	char userans_kind[10];
	int cost[4] = { 1000,1100, 1200, 1300, };
	printf("�޴� : \n���̴� : 1000��\n�ݶ� : 1100��\n���̽�Ƽ : 1200��\n�˷ο� : 1300\n");
	printf("�󸶸� �����Ͻǰǰ���?\n");
	while (1) {
		
		scanf("%s",&userans_cost_char);
		userans_cost = atoi(userans_cost_char);
		if (userans_cost > 999 && userans_cost%1 == 0) break;
		else if (userans_cost < 999) {
			printf("���� �����ϰų� �亯�� �߸��ƽ��ϴ�.\n");
			continue;
		} else continue;
	}
	printf("������� ����ּ���.\n");
	char cmp[20] = "���̴�";
	while (1)
	{
		scanf("%s", &userans_kind);
		printf("userans_kind = %s\n", userans_kind);
		printf("�񱳰���� = %d\n", (strcmp(userans_kind, cmp)));
		if (!(strcmp(userans_kind, "���̴�"))) {
			drink_cost = 1000;
			break;
		} else if (!(strcmp(userans_kind, "�ݶ�"))) {
			drink_cost = 1100;
			break;
		}
		else if (!(strcmp(userans_kind, "���̽�Ƽ"))) {
			drink_cost = 1200;
			break;
		}
		else if (!(strcmp(userans_kind, "�˷ο�"))) {
			drink_cost = 1300;
			break;
		}
		else {
			printf("�亯�� �߸��Ǿ����ϴ�.\n");
			continue;
		}
	}
	if (drink_cost > userans_cost) {
		printf("���� �����մϴ�.\n");
		return 0;
	}
	else if (drink_cost <= userans_cost) {
		userans_cost -= drink_cost;
		if (userans_cost == 0)
		{
			printf("�ֹ��Ͻ� %s�� ���Խ��ϴ�.\n", userans_kind);
			printf("�Ž������� �����ϴ�.\n");
		}
		else{
			printf("�ֹ��Ͻ� %s�� �Ž����� %d���� ���Խ��ϴ�.\n",userans_kind,userans_cost);
		}
	}
	return 0;
}