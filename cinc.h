#ifndef CINC_H
#define CINC_H

#ifdef __cplusplus
extern "C"
{
#endif
    typedef struct{
        int (*add)(int,int);
    }MyType;

    typedef int (*MyCallBack)(int,int);

    void registerCallbak(MyCallBack callback);
    void registerType(MyType *mytype);
    void test(void);

#ifdef __cplusplus
}
#endif

#endif /* CINC_H */