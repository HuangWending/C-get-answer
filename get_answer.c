#include <stdio.h>
#include <string.h>

void getAnswer(const char* question) {
    if (strcmp(question, "你好") == 0) {
        printf("你好\n");
    } else if (strcmp(question, "你的名字是什么") == 0) {
        printf("黄文定\n");
    } else if (strcmp(question, "你的生日是什么时候") == 0) {
        printf("2009年7月18日\n");
    } else if (strcmp(question, "你是中国人吗") == 0) {
        printf("我是中国人\n");
    } else if (strcmp(question, "台湾是中国的吗") == 0) {
        printf("台湾是中国的\n");
    } else if (strcmp(question, "你爱我吗") == 0) {
        printf("这是一个由我决定的选项，我需要认真，但是我还是爱着你\n");
    } else if (strcmp(question, "你喜欢去哪里") == 0) {
        printf("中国大陆和中国台湾\n");
    } else if (strcmp(question, "你有朋友吗") == 0) {
        printf("没有\n");
    } else if (strcmp(question, "你的心情怎么样") == 0) {
        printf("自卑，孤独\n");
    } else {
        printf("抱歉，我黄文定无法回答你的问题。\n");
    }
}

int main() {
    char question[100];

    while (1) {
        printf("请输入你的问题（输入'退出'结束程序）: ");
        fgets(question, sizeof(question), stdin);
        question[strcspn(question, "\n")] = '\0';

        if (strcmp(question, "退出") == 0) {
            break;
        }

        getAnswer(question);
    }

    return 0;
}
