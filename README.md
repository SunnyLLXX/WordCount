### WordCount

WordCount程序使用C语言命令行参数

### 功能说明

统计文本文件（纯英文）的单词数，字符数，行数。

要求：空格，水平制表符，换行符均算字符。由空格或逗号分隔开的都视为单词，且不做单词的有效性校验，例如：thi#,that视为用逗号隔开的2个单词。

### 输入输出说明

输入：[paramter][file name]

注： [parameter]为控制参数，取"-c"和"-w""-l"之一；[file sname]为要被处理的文本文件名，默认存放在执行文件目录下。

输出：根据[parameter]为以下形式之一
字符数：n

单词数：n

行数: n

n为数目
     

例如：

   wordCount.exe -c hello.txt &nbsp;&nbsp;&nbsp;&nbsp;  统计hello.txt中的字符数

   wordCount.exe -w hello.txt  &nbsp;&nbsp;&nbsp;&nbsp;统计hello.txt中的单词数



