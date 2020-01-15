#include <stdio.h>


int currentAccount = 0;

struct Account {
    int id;
    char name[100];
    int amount;

};
void createAccount(struct Account *input, int * accountNum){

    int id;
    char name[100];
    int amount;

    printf("Enter Name : ");
    fgets(input[*accountNum].name,100,stdin);

    printf("Enter ID : ");
    scanf("%d",&input[*accountNum].id);

    printf("Account : ");
    scanf("%d",&input[*accountNum].amount);
    

    printf(" id : %d Name : %s Amount : %d\n",input[*accountNum].id,input[*accountNum].name,input[*accountNum].amount);

    *accountNum += 1;
    



}

void depositMoney(struct Account *input, int accountNum){

    int id = 0;
    int i = 0;
    int amount = 0;
    printf("계좌 ID 입력 : ");
    scanf("%d",&id);
    printf("입금 금액 입력 : ");
    scanf("%d",&amount);

    if(amount <= 0 ){
        printf(" 입금금액을 정확히 입력 하세요\n ");
        return;
    }

    for(i = 0 ; i < accountNum; i++){
        if( input[i].id == id){
            input[i].amount += amount;
            printf("입금 완료\n");
            return;
        
        }
    }
    printf("입력하신 계좌는 존재하지 않습니다\n");
    

}

void widthrawMoney(struct Account *input,int accountNum){
    int id = 0;
    int i = 0;
    int amount = 0;
    printf("계좌 ID 입력 : ");
    scanf("%d",&id);
    printf("출금 금액 입력 : ");
    scanf("%d",&amount);

    for(i = 0 ; i < accountNum; i++){
        if( input[i].id == id){
            if( input[i].amount < amount){
                printf("출금금액 한도초과 \n");
                return;
            }else{
                input[i].amount -= amount;
                printf("출금 완료\n");
                return;
            }
        }
    }
    printf("입력하신 계좌는 존재하지 않습니다\n");
    

}

void printAllAccounts(struct Account *input, int accountNum){
    printf("------------------------------------------------------\n");
    int i = 0 ;
    for(int i = 0 ; i < accountNum ; i++){
        printf("이름 : %sID : %d\n금액 : %d\n\n",input[i].name,input[i].id,input[i].amount);
    }
}

int main(){

    struct Account accounts[100];
    int input = 0;
    int accountNum =0;
    int id;
    char name[100];
    int amount;
    while(1){

        printf("--------Menu-------\n");
        printf("1. 계좌개설\n");
        printf("2. 입 금\n");
        printf("3. 출 금\n");
        printf("4. 계좌정보 전체 출력\n");
        printf("5. 프로그램 종료\n");
        printf("선택 :");
        scanf("%d",&input);
        while(getchar() != '\n');
        // fflush(stdin);
        switch (input){

            case 1:
                // printf(" before = %d\n",accountNum);
                createAccount(accounts,&accountNum);
                // printf(" After = %d\n",accountNum);

                
                break;
            case 2:
                depositMoney(accounts,accountNum);
                break;
            case 3:
                // printf(" accountNum = %d\n",accountNum);
                widthrawMoney(accounts,accountNum);
                break;
            case 4:
                // printf("case 4\n");
                printAllAccounts(accounts,accountNum);
                break;
            case 5:
                printf("case 5\n");
                break;
            default:
                printf("input should be 1~5\n");
                // std::cout<<" input should be 1~ 5\n"<<std::endl;




        }
        input =0;

    }

}