#include <stdio.h>
#include <string.h>

struct Programmer{
    char name[50];
    char language[30];
    int age;
};

void call_by_refer(struct Programmer *old){
    strncpy(old->name, "Rocky", 50);
    strncpy(old->language, "C", 30);
    old->age = old->age - 10;
}

int main(){
    struct Programmer dev1 = {
            "Khazar",
            "Python",
            21
    };

    printf("Name: %s\nLanguage: %s\nAge: %d\n",
        dev1.name,
        dev1.language,
        dev1.age
           );

    call_by_refer(&dev1);

    printf("Name: %s\nLanguage: %s\nAge: %d\n",
           dev1.name,
           dev1.language,
           dev1.age
    );


}