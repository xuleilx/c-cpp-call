#include "cinc.h"
#include "stdio.h"

void registerCallbak(MyCallBack callback,void* object)
{
	printf("%s\n", __func__);
	if(callback){
		callback(object);
	}
}

void registerType(MyType *mytype){
	printf("%s\n", __func__);
	if(mytype){
		mytype->myfunc(NULL);
	}
}
void test(){
	printf("%s\n", __func__);
}