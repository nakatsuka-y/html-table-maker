# html-table-maker

This program wraps words with <td></td> tags and sentences with <tr></tr> tags which are originally given from a text file.

It is written in C++, so compile it with a compiler such as g++.

# How to use html-table-maker

In order to use html-table-maker, first put your original text file you want to convert into a embbeded text file.

Here's an example of an original text file named "sample.txt".

Note that each words are seperated with a *space*.
```
a b c d e
A B C D E F G
1 2 3 4 5 6
github is cool
```
Then execute the executive file you created when you compiled the program.

A terminal or command prompt will open asking:

```
Enter File Name: 
```

so enter the text file name you want to convert.

If successful, the terminal or command prompt will close and you will find a new text file with a "new_" on its head.

If not, you will be asked to enter the file name again.

The contents of the newly made "new_sample.txt" text file will look such as this:
```
<tr><td>a</td><td>b</td><td>c</td></tr>
<tr><td>A</td><td>B</td><td>C</td></tr>
<tr><td>1</td><td>2</td><td>3</td></tr>
<tr><td>github</td><td>is</td><td>cool</td></tr>
```

You can copy the contents to your html file, and you have a table!
