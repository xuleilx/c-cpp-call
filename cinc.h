#ifndef CINC_H
#define CINC_H

#ifdef __cplusplus
extern "C"
{
#endif
    typedef void (*MyCallBack)(void*);
    typedef struct{
        MyCallBack myfunc;
    }MyType;

    void registerCallbak(MyCallBack callback,void* object);
    void registerType(MyType *mytype);
    void test(void);

#ifdef __cplusplus
}
#endif

#endif /* CINC_H */
