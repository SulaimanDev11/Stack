#include<iostream>
#define MAX 6
using namespace std;
class stack{
	private:
		int top,STACK[MAX],data;
	public:
		stack(){
			top=-1;
		}
		void PUSH(int val){
			if(top>MAX){
				cout<<"OVERFLOW"<<endl;
			}else
			{
				top++;
				cout<<STACK[top];
			}
		}
		int POP(){
			if(top<0){
				cout<<"UNDER FLOW"<<endl;
			}else
			{
				data=STACK[top];
				top--;
			}
			return data;
		}
};
int main(){
	stack obj;
	obj.POP();
}
