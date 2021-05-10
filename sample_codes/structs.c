#include <stdio.h>

struct Developers{
    char full_name[100];
    int age;
    char profession[50];
};

struct Application{
    char title[50];
    char version[5];
    int size_in_mb;
    char company[50];
    struct Developers dev1,dev2;
};

void print_application(struct Application app){
    printf("%s\n", app.title);
    printf("%s\n", app.version);
    printf("%d\n", app.size_in_mb);
    printf("%s\n", app.company);
}

void print_dev(struct Developers dev){
    printf("%s\n", dev.full_name);
    printf("%s\n", dev.profession);
    printf("%d\n", dev.age);
}

struct Application add_app(){
    struct Application new;
    printf("Please enter app data by spaces (title version size company)\n: ");
    scanf("%s %s %d %s", &new.title,&new.version,&new.size_in_mb,&new.company);
    return new;
}

struct Developers add_dev(){
    struct Developers new;
    printf("Please enter dev data by spaces (full_name profession age):\n");
    scanf("%s %s %d", &new.full_name,&new.profession,&new.age);
    return new;
}


int main()
{
    struct Application app1 = add_app();
    app1.dev1 = add_dev();
    app1.dev2 = add_dev();

    print_application(app1);
    print_dev(app1.dev1);
    print_dev(app1.dev2);
    return 0;
}
