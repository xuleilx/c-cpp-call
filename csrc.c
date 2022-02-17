#include "cinc.h"
#include "stdio.h"

void registerCallbak(MyCallBack callback)
{
	printf("%s\n", __func__);
	if(callback){
		callback(1,2);
	}
}
void registerType(MyType *mytype){
	printf("%s\n", __func__);
	if(mytype){
		mytype->add(3,4);
	}
}
void test(){
	printf("%s\n", __func__);
}