#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int drink_cost = 0;
	char userans_cost_char[10];
	int userans_cost = 0;
	char userans_kind[10];
	int cost[4] = { 1000,1100, 1200, 1300, };
	printf("메뉴 : \n사이다 : 1000원\n콜라 : 1100원\n아이스티 : 1200원\n알로에 : 1300\n");
	printf("얼마를 지불하실건가요?\n");
	while (1) {
		
		scanf("%s",&userans_cost_char);
		userans_cost = atoi(userans_cost_char);
		if (userans_cost > 999 && userans_cost%1 == 0) break;
		else if (userans_cost < 999) {
			printf("돈이 부족하거나 답변이 잘못됐습니다.\n");
			continue;
		} else continue;
	}
	printf("음료수를 골라주세요.\n");
	char cmp[20] = "사이다";
	while (1)
	{
		scanf("%s", &userans_kind);
		printf("userans_kind = %s\n", userans_kind);
		printf("비교결과값 = %d\n", (strcmp(userans_kind, cmp)));
		if (!(strcmp(userans_kind, "사이다"))) {
			drink_cost = 1000;
			break;
		} else if (!(strcmp(userans_kind, "콜라"))) {
			drink_cost = 1100;
			break;
		}
		else if (!(strcmp(userans_kind, "아이스티"))) {
			drink_cost = 1200;
			break;
		}
		else if (!(strcmp(userans_kind, "알로에"))) {
			drink_cost = 1300;
			break;
		}
		else {
			printf("답변이 잘못되었습니다.\n");
			continue;
		}
	}
	if (drink_cost > userans_cost) {
		printf("돈이 부족합니다.\n");
		return 0;
	}
	else if (drink_cost <= userans_cost) {
		userans_cost -= drink_cost;
		if (userans_cost == 0)
		{
			printf("주문하신 %s가 나왔습니다.\n", userans_kind);
			printf("거스름돈은 없습니다.\n");
		}
		else{
			printf("주문하신 %s와 거스름돈 %d원이 나왔습니다.\n",userans_kind,userans_cost);
		}
	}
	return 0;
}