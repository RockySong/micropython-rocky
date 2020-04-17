#### pyb.Pin.OUT
<lang=chs>
配置管脚为推挽式输出
</lang>
<lang=dft>
Configure the pin to push-pull output mode, default driving strength.
</lang>

#### OUT
<link=pyb.Pin.OUT>

#### Pin.OUT
<link=pyb.Pin.OUT>

#### help
<lang=chs>
+ help(key)
  当key是字符串时，如'welcome', 'help', 查找字符串关键字对应的文档词条，如果找到则以当前语言显示；否则显示"str"类的属性和方法
  当key是其它变量时，会显示该变量所属的类的属性和方法
+ help('key', '语言名')
  类似上面，但是第1个参数必须是字符串，指定本次及**后续**显示的语言
  语言名都是3个字符，包括chs(简中), eng(英语)等。
+ help()
  ==> help('welcome')，也就是显示"welcome"词条  
<lang=dft>
+ help(key)
  If key is a string, such as "welcome", 'help', searchs the content for the key and shows in current language if found, otherwise, show the attributes and methods for the "str" class
  If key is a variable, such as help([1,2,3]), then show the attributes and methods of the class of the key variable
+ help('key', 'language')
  Similar to the above, but the 1st parameter **MUST** be a string. Specifies the language for this time and **from now on**.
  Language names are all 3 chars len, including chs (Simplified Chinese), eng (English), etc.
+ help()
  ==> a.k.a help('welcome')

#### ?
<link=help>
