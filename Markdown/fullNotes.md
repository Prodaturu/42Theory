# Markdown Full Notes


## Basic Syntax:

Markdown is finally rendered into html to display so html elements can also be used instead of the syntax if some or the other flavoured feature which we want to use doesnt exist in that particular place.

### Normal Text

1. Typing just normal text would make it rendered as plain normal text paragraph.
2. To start a new paragraph we a empty line should be left between them.
3. For text to stay within the sama paragraph but on a new line, we end the last line with double space.
4. Adding "number + ." before lines to start of a list makes markdown interpret it as a part of a list and creates one if it is the first in the paragraph.
5. The number of "#" is the number after h, like its "h1 for  #, ### for h3 etc.,".

### Text Highlighting

#### Generic
1. "** Content **" or "__ Content __"can be used to write a bold text in markdown  
ex: **Bold text**
2. "* Content *" or "_ Content _" can be used to write text in Italics.  
ex: *Italic text*
3. "*** Content ***" or "___ Content ___" can be used to have both Bold and Italic combined.  
ex: ***Bold and Italic text***
4. Back ticks can be used to write code blocks
	1. in-line -> 1 backtick
	2. multi-line -> 3 backticks.
5. As we can see from earlier examples different Text Highlighting features can be combined with each other to combine their effects in rendered markdown.

#### Flavoured (*commonly used*)
Many things were not in the base spec of markdown so in most places they are flavoured by the place you are using it.  
Some examples of such syntaxes are:-
1. "~~ Content ~~" can be used to cross off text  
ex : ~~Text Crossed off~~
2. "== Content ==" can be used to highlight text.  
ex : ==Highlighted Text==  -> This may not work for some as Github flavoured MD doesnt support this.
3. In such cases we could use the html way using the "mark" element of html as said earlier.  
ex : <mark>Highlighted text</mark>
		ex: Github flavoured markdown used by Github etc.;
4. We can enclose text within "^" or "sup" tag to superscript text.
5. Similarly, we can enclose text within "~" or "sub" tag to superscript text.
6. Emojis can be rendered using actual emojis like using :smile: for 😊 etc.; (:smile: diretcly is not supported by Github flavour but copy pasting works).
7. Back ticks can be used for generating code blocks  
	-> Triple black ticks : Mutli-line code block.  
	-> Single black ticks : In-line code block.  
	-> Some times adding the extension for language being used can syntax highlight it specific to the language.  
	-> ex :  The follwing is a piece of code to print "Hellpp World!" rendered in C language.
	```c
	#include <stdio.h>

	int	main(void)
	{
		printf("Hello World!");
		return (0);
	}
	```
	-> We can also make something as code by just indenting it. (**Advice:** *prefer using backticks*)
	8. Links can be inserted in Mardown using square braackets  
	-> The syntax is to use square brackets followed by parantheses:  
	-> square bracket: contains display text; parantheses contain: link  
	-> Ex : This is the link to my personal **[Github profile](https://github.com/Prodaturu)** .  
	-> Angle brackets "<link to website>" are used to directly add a link without masking with text.  
	-> Ex : <https://github.com/Prodaturu> This is also a link to my **[Github Profile](https://github.com/Prodaturu)**  
	-> By adding ! mark before links we can add links to pngs and make then display on our Markdown page.  
	>	**![Google Logo](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2f/Google_2015_logo.svg/500px-Google_2015_logo.svg.png)**  

	-> Adding a closed angled brackets followed by a space is be used to create a block styled text block.
	-> we can also nest them just by using multiple of them
	-> Ex:
	> This is an example of block styled text
	>> Nested block 1,  
	>> Nested block 2.
	>>> Inner nest 1,  
	>>> Inner nest 2.
	>>>> We could go on like this by increasing the number of ">" used at start.

	-> We can also draw a horizontal line by seprating two paras of code with a empty line then atleast 3 of "# or - or _ or *" and a new line again between the two lines (--- or ### etc)
	-> Ex :  

	This is **Paragraph 1** with a line below.

	***

	This is **Paragraph 2** with a line above.

	-> To make a list we can use ordered numbers for Ordered list or simply the same number or a "- or + or *" at start (both are followed by space) for an unordered list.  
	-> Ex :  
	1. Ordered list:  
	> 1. Line item 1
	> 2. List item 2
	> 3. List item 3

	2. Unordered list:  
	> + Item a
	> + Item b
	> + Item c

	-> All the above can be combined to form some complex mixture of those

	#### Extended Markdown Features by Github

	-> We can create checck boxes using "-" follwed by a space and square brackets  
	-> A space within squared brackets means unchecked and a cross (x or X) within means checked checkbox.

	-> We can use pipes "|" to create a table.  
	-> we use atleast 3 "-" to differentiate row / column of the table from the rest  
	-> Ex :  
	> **Table** (*Default type*)
	> | Col 1 | Col 2  |  
	> | ----- | ------ |
	> | This  | is     |
	> | an    | example|
	> | for   | a      |
	> | table | with   |
	> | 2 cols| 7 rows |

	-> We can use colons ":" after dashes to align text within that particular col of the table, right or left for right/left aligned text and on both sides for center alignment  
	-> Ex :  
	> **Table**  (Col1: *Left Aligned*, Col2 : *Center Aligned*, Col3 : *Right Aligned*)
	> | Col 1  | Col 2  |  Col 3 |
	> | :----- | :-----:|  -----:|
	> | This   | This   | This   |
	> | is     | is     | is     |
	> | Left   | Center | Right  |
	> | Aligned| Aligned| Aligned|
