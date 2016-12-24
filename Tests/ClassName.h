//
// Created by uriel on 28/11/16.
//

#ifndef SETTINGUOGOOGLETEST_CLASSNAME_H
#define SETTINGUOGOOGLETEST_CLASSNAME_H


class ClassName {
public:
    int age;

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        ClassName::age = age;
    }
};


#endif //SETTINGUOGOOGLETEST_CLASSNAME_H
