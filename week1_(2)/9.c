#include <stdio.h>
#include <stdbool.h>

/*
구현의 핵심이 되는 부분은 모든 가능한 3자리 숫자에 대해서, 조건을 모두 만족하는지 test를 해보겠다. 실제
로 test를 할 때는 strike의 갯수와 ball의 갯수를 세서 예제로 들어온 strike의 갯수와 ball의 갯수와
똑같다면, 그러면 우리가 조건을 통과한다. 하나라도 다르다. 그러면 답이 될 수 없다. 
*/
int main() {
  //들어오는 개수 
	int n;
	//3인 이유는 숫자가 3개 들어오니까! [0]번째에는 3자리 숫자가 들어오고, [1]번째에는 strike 개수,
	//[2]번쨰에는 ball의 개수가 들어온다.
  int information[105][3];
  //result라는 변수를 통해, 조건을 만족하는 개수를 넣을 것임. 곧 정답에 해당함.
	int result =0;
  //n읇 받고,
	scanf("%d", &n);
  //n개의 줄에 대해서, 숫자 3개를 받아야 된다.
  for(int i=0; i<n; i++){
    scanf("%d %d %d", &information[i][0], &information[i][1], &information[i][2]);
  }
  //모든 가능한 3자리 숫자에 대해서, 저 조건을 만족하는지 test를 해봐야 한다.
	//ijk가 만들어지는데, 백의 자리가 i, 십의 자리가 j, 일의 자리가 k인 숫자로 생각하고 싶음.
	//문제는 3개의 숫자가 달라야 한다. 하나라도 똑같으면 안된다.
  for(int i=1; i<=9; i++){
    for(int j=1; j<=9; j++){
      for(int k=1; k<=9; k++){
				//따라서 i와 j와 k가 다르다면, 즉 3개의 숫자가 다르다면, 그때만 test릃 해볼 것이다.
        if(i != j && j != k && i != k){
					//본격적으로 information 배열에 있는 모든 정보를 보면서, strike의 개수와 ball의
					//개수가 똑같은지를 보아야 한다.
					//flag라는 boolean 함수를 선언. 이 친구는 맨처음에는 false이다.
          bool flag = false;
          for(int p=0; p<n; p++){
						//information[p] 와 ijk가 조건을 만족하느냐를 체크
						//327 first second third
						//236 ijk
						//p가 0이라면, 첫번쨰 질문과 대답 비교하는 것이고, p가 1이라면, 2번쨰 질문과 대답을
						//비교하는 것이다. 이런 식으로 n개의 질문과 대답 모두 비교하겠다.
						//첫번쨰, strike와 ball의 개수를 센다.
						//->그러기 위해서는 information에서 백의 자리, 십의 자리, 일의자리가 무엇인지 알아야함.
						//first에 백의 자리를 먼저 넣는다. information[p][0]에 3자리 수가 들어가 있다. 우리가
						//관심을 가지고 있는 것은 오로지 백의 자리 숫자. 그러므로 100을 나눠주면 백의 자리 숫자를
						//가져올 수 있다(EX. 327/100 = 3)
            int first = information[p][0]/100;
						//십의 자리 숫자를 알기 위해서 10을 나누게 되면 32가 나오고 % 10을 하게 되면 2가 나오게 된다.
            int second = (information[p][0]/10) % 10;
						//일의 자리 숫자를 알기 위해서는 % 10을 하게 되면 7이 나오게 된다.
            int third = information[p][0] % 10;
            //strike와 ball의 개수를 세기 위한 변수
            int strike =0, ball =0;
            //strike 개수부터 세보자. first가 i와 똑같다면, 백의 자리 숫자 2개가 똑같은 것. 그러면
						//이제 strike라고 이야기 할 수가 있다.
						//중요한 것은 else if이면 안된다. 만약 else if가 되면, first가 i와 똑같은 순간 strike++;
						//시키고 그대로 나와 버리게 된다. 지금은 if 여야 하는 이유는 백의 자리 확인하고, 십의 자리 확인하고,
						//일의 자리 확인하고! 3개를 모두 확인해야 하기 떄문에 first가 되었다고 나머지를 확인 안하고 하는 것이
						//아니다. 
            if(first == i){
              strike++;
            }
						//second가 j와 똑같다면, strike ++;
            if(second == j){
              strike++;
            }
						//third가 k와 똑같다면, strke ++;
            if(third == k){
              strike++;
            }
            //ball은 어떻게 확인해야 하는가! 예를 들어 327과 236이 있다. 그러면 ball이라는 것은 지금 327의
						//십의 자리 2와 236의 백의 자리 2와 같은 경우 ball이 추가가 되는 것이다. 236의 백의 자리 수 2의
						//입장에서 327의 십의 자리수 2와 일의 자리수 7가 236의 백의 자리 수 2와 일치하다면 ball이 되는 것
						//236의 십의 자리수 3의 입장에서는 327의 백의 자리 수 3과 일의 자리수 7 중에 일치한다면 ball이 되는 것
						//236의 일의 자리수 6 같은 경우 327의 백의 자리 수 3과 십의 자리 수 2 중에 일치한다면 ball이 되는 것.
            if(i == second || i == third){
              ball++;
            }
            if(j == first || j == third){
              ball++;
            }
            if(k==first || k == second){
              ball++;
            }
            /*
						결론적으로, strike는 숫자와 자리까지 똑같아야 하고, ball은 자리는 아니지만 숫자는 똑같아야 한다. 그래서
						strike와 ball의 개수를 세어주었고, 이제 우리에게 남은 것은 그래서 strike와 볼의 개수가 주어진 예제와
						똑같느냐를 비교해야 하는 것. 
						*/
						//information[p][1]은 strike와 똑같고 information[p][2]가 ball이랑 똑같다면 이것은 괜찮은 것.
						//이게 아니면 문제가 생기는 것. 하나라도 아니면 문제가 생기는 것. 모두가 다 만족한다면 괜찮은 것.
						//구현 방법은 모두가 이것을 만족해야 되고, 하나라도 틀리면 안되는 것.
						//만약 information[p][1]이 strike와 다르거나, 혹은 information[p][2]가 ball과 다르다면,
						//flag를 true로 만들어 줄 것이다.
            if(information[p][1] != strike || information[p][2] != ball){
              flag = true;
            }
            
          }
          if(flag == false){
            result ++;
          }
        }
      }
    }
  }
  printf("%d\n", result);
  return 0;
}