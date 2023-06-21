# C-get-answer
C语言问答程序
#include <stdio.h>：包含标准输入输出函数的头文件，以便进行输入和输出操作。
#include <string.h>：包含字符串处理函数的头文件，以便使用字符串比较函数。
void getAnswer(const char* question)：声明了一个名为getAnswer的函数，它接受一个名为question的常量字符指针参数，无返回值。
if (strcmp(question, "你好") == 0)：如果问题和"你好"相等，执行下面的语句块。
printf("你好\n");：输出"你好"作为回答。
else if (strcmp(question, "你的名字是什么") == 0)：如果问题和"你的名字是什么"相等，执行下面的语句块。
printf("黄文定\n");：输出"黄文定"作为回答。
else if (strcmp(question, "你的生日是什么时候") == 0)：如果问题和"你的生日是什么时候"相等，执行下面的语句块。
printf("2009年7月18日\n");：输出"2009年7月18日"作为回答。
else if (strcmp(question, "你是中国人吗") == 0)：如果问题和"你是中国人吗"相等，执行下面的语句块。
printf("我是中国人\n");：输出"我是中国人"作为回答。
else if (strcmp(question, "台湾是中国的吗") == 0)：如果问题和"台湾是中国的吗"相等，执行下面的语句块。
printf("台湾是中国的\n");：输出"台湾是中国的"作为回答。
else if (strcmp(question, "你爱我吗") == 0)：如果问题和"你爱我吗"相等，执行下面的语句块。
printf("这是一个由我决定的选项，我需要认真，但是我还是爱着你\n");：输出"这是一个由我决定的选项，我需要认真，但是我还是爱着你"作为回答。
else if (strcmp(question, "你喜欢去哪里") == 0)：如果问题和"你喜欢去哪里"相等，执行下面的语句块。
printf("中国大陆和中国台湾\n");：输出"中国大陆和中国台湾"作为回答。
else if (strcmp(question, "你有朋友吗") == 0)：如果问题和"你有朋友吗"相等，执行下面的语句块。
printf("没有\n");：输出"没有"作为回答。
else if (strcmp(question, "你的心情怎么样") == 0)：如果问题和"你的心情怎么样"相等，执行下面的语句块。
printf("自卑，孤独\n");：输出"自卑，孤独"作为回答。
else：如果前面的条件都不满足，执行下面的语句块。
printf("抱歉，我黄文定无法回答你的问题。\n");：输出"抱歉，我黄文定无法回答你的问题。"作为默认回答。
char question[100];：定义一个长度为100的字符数组question，用于存储用户的问题。
printf("请输入你的问题（输入'退出'结束程序）: ");：输出提示，要求用户输入一个问题。
fgets(question, sizeof(question), stdin);：使用fgets函数从标准输入中读取用户的输入，并将其存储在question数组中。
question[strcspn(question, "\n")] = '\0';：将question数组中的换行符替换为字符串结束符'\0'，以便正确处理用户输入的问题。
if (strcmp(question, "退出") == 0)：如果问题和"退出"相等，执行下面的语句块。
break;：跳出循环，结束程序的执行。
getAnswer(question);：调用getAnswer函数，传递用户输入的问题作为参数。
return 0;：程序执行成功，返回0作为退出状态码。
