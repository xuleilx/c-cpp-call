#ifndef CINC_H
#define CINC_H

#ifdef __cplusplus
extern "C"
{
#endif
    typedef int (*MyCallBack)(int,int);
    typedef struct{
        MyCallBack add;
    }MyType;

    void registerCallbak(MyCallBack callback);
    void registerType(MyType *mytype);
    void test(void);

#ifdef __cplusplus
}
#endif

#endif /* CINC_H */
