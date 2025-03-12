# 本文與段落
Markdown 段落沒有特殊的格式，直接編寫文字就好。
段落的換行是使用兩個以上空格加上Enter。  (但若裝了==Markdown Preview Enhance==插件就可以直接換行)
或在段落後面使用一個空行來表示重新開始一個段落。

但這樣會與前段有一空白行的間距，但若在行尾使用兩個以上空格加上`Enter`就不會與前段落有間隔。  





^^^ 上面加入一空白行 ^^^ (連續空白行只會顯示一空白行)

# 字型式樣
- 一般字體  
- 一個 * 或 _ 包裹： *斜體文本* ， _斜體文本_  
- 二個 * 或 _ 包裹：**粗體文本** ，__粗體文本__  
- 三個 * 或 _ 包裹：***粗斜體文本***  ，___粗斜體文本___  
- 一個 ^ 包裹：這是 ^{上標字}^ 2^3^
- 一個 ~ 包裹：這是~下標字~
- 二個 ~ 包裹：這是~~刪除線文字~~ ，請在字符前後使用一個波浪號tilde symbol (~)
- 二個 = 包裹：highlight(螢光筆)：請在單詞前後使用兩個等號==。例如：
  I need to highlight these ==very important words==.

  *** 雖然Markdown沒有統一標準，各家都有各家方言，但是Github的Markdown語法是可以看作規範的，GFM上標和下標語法就是 \<sup>和\<sub>，而不是^和~，上標\^和下標\~樣式直接粘貼到GitHub是失效的，vscode預設不支持，需要裝 ==Markdown Preview Enhance== 等插件。

混合以上：
- __~~粗體刪除線~~__  
- ~~__不同組合方式的粗體刪除線__~~  
- __~~不同組合方式的粗體刪除線~~__  
- ~~***不同組合方式的粗體刪除線***~~  
- ==*~~不同組合方式的粗體刪除線~~*==  
- ==***不同組合方式的粗斜體***==  

其他表示法
- 以 \`文字凸顯(文字有灰色背景)\`  `文字凸顯(文字有灰色背景)`  
- 底線：<u>帶下劃線文本</u> : 通過HTML的\<u> ... \</u>標籤來實現。 
- Subscript(下標字)：以\<sub>...\</sub>包裹。
  - H~2~O，H<sub>2</sub>O，
  - CO~2~，CO<sub>2</sub>，~3~O，
- Superscript(上標字)：請在字符前後使用一個插入號caret symbol (^) ，\<sup>...\</sup>包裹。
  - X^2^，X<sup>3</sup>，Y<sup>6</sup>X<sub>0</sub>

# 分隔線
在一行中用三個以上的星號、減號、底線來建立一個分隔線，行內不能有其他東西。也可以在星號或是減號中間插入空格。下面每種寫法都可以建立分隔線：

***
* * *
*****
- - -
----------


# 使用標題
標題由大到小，一共有六個等級，也就是我們常說的H1字體到H6字體。
# 一級標題
## 二級標題
### 三級標題
#### 四級標題
##### 五級標題
###### 六級標題
####### 沒有七級標題  
記得！！！使用#字號，後面一定要跟一個空白鍵！！！  

# 引用
以下為引用的示範：
> 第一層 文字內容
>> 第二層 縮行
>>> 第三層 縮行
(以此類推)  
一個｛>｝符號就能影響多段文字，__若要結束引用__，請先用一個`空白行`開來，不然無法離開語法。
>>
>> 退回到第二層
>
> 退回到第一層

引用結束

# 程式碼區塊
基本的 Markdown 語法允許您通過將行縮進四個空格或一個製表符來創建代碼塊。如果您覺得這不方便，請嘗試使用受保護的代碼塊。根據您的 Markdown 處理器或編輯器，您將在代碼塊前後的行上使用三個反引號 ( ```) 或三個波浪號 ( ~~~)。您不必進行任何排縮！

    // C# 程式碼區塊
    public class MyClass
    {
    public string String1 { get; set; }
    public int Int1 { get; set; }

    public MyClass()
    {
      Console.WriteLine("建構子");
    }
    }

```csharp
// C# 程式碼區塊
public class MyClass
{
  public string String1 { get; set; }
  public int Int1 { get; set; }

  public MyClass()
  {
      Console.WriteLine("建構子");
  }
}
```

程式碼區塊支援的語言種類：  
<https://github.com/github/linguist/blob/master/vendor/README.md>

# 列表
##無序列表
無序列表開頭為 * 或 + 或 -

> AA
  blob
  CC
  >>  DD
      EE
  
* Item 1
  - 項目1的說明
* Item 2
  + Item 2a
  + Item 2b
    - 項目2b的說明
      其他
      * HHH
* Item 3
    > - 可搭配引言符號 `>`
    > 1. 可搭配有序列表 `數字` + `.` + `空白鍵`
    > 2. 可搭配有序列表 `數字` + `.` + `空白鍵`
    > 3. 可搭配有序列表 `數字` + `.` + `空白鍵`

##有序列表
有序列表開頭為 數字 + . + 空白鍵
1. 有序列表 1
1. 有序列表 2
   1. 有序列表 1-1
   1. 有序列表 1-2
      > 1. 可搭配引言符號 `>`
      > * 可搭配無序列表符號 *
      > + 可搭配無序列表符號 +
      > - 可搭配無序列表符號 -
   1. 有序列表 1-3 結尾加 `兩個空白鍵` + `換行` __  
      這行文字就會對齊
   1. 有序列表 1-4
1. 有序列表 3


# 任務列表
能夠有像任務清單一樣旁邊有小方框讓你標示打勾與否的小圖示。  
- [x] A任務  
- [ ] B任務  
- [x] C任務  
- [ ] D任務  

# 表格
Markdown 製作表格時使用 | 來分隔不同的單元格，使用 - 來分隔表頭和其他列。
語法格式如下：
| 表頭1    | 表頭2    | 表頭3    | 表頭4    |
| -------- | -------- | -------- | -------- |
| 單元格00 | 單元格01 | 單元格02 | 單元格03 |
| 單元格10 | 單元格11 | 單元格12 | 單元格13 |
| 單元格20 | 單元格21 | 單元格22 | 單元格23 |
| 單元格30 | 單元格31 | 單元格32 | 單元格33 |

第二列是設置對齊方式，不會顯示 ( 至少三個 - 符號表示內容位置， : 表示對齊位置 )
| 表頭100000:預設 | 表頭200000:靠左 | 表頭300000:置中 | 表頭400000:靠右 |
| --------------- | :-------------- | :-------------: | --------------: |
| 00              | 01              |       02        |              03 |
| 10              | 11              |       12        |              13 |

# 超連結
鏈結使用方法如下：  
[鏈結名稱](鏈結地址)  
###：](中間不能有空格  
例如：  
[Google首頁](https://www.google.com)  
或者直接顯示鏈結
<鏈結地址>  
例如：  
<https://www.google.com>

# 插入圖片
語法  
![這是圖片不見時的文字說明(可以不寫)](圖片位址 "滑鼠hover時顯示的圖片標題")  
Use [Google](https://www.markdownguide.org "My search engine!").
You can optionally add a title for a link. This will appear as a tooltip when the user hovers over the link. To add a title, enclose it in parentheses after the URL.
- - -
1. example 1  
![這是圖片不見時的文字說明](./684-600x400.jpg "雄偉大山")
___
2. example 2  
![](https://www.google.com/photos/about/static/images/google.svg)  


## 指定圖片大小. 
Markdown 不支持指定圖片大小，但可以直接插入\<img ... />標籤來指定屬性：  
<img src="https://www.google.com/photos/about/static/images/google.svg" title="width='100'" width="100" />  
<img src="https://www.google.com/photos/about/static/images/google.svg" title="width='200'" width="200" />  
<img src="https://www.google.com/photos/about/static/images/google.svg" title="height='50'" height="50" />  
<img src="https://www.google.com/photos/about/static/images/google.svg" title="zoom='10%'" style="zoom:10%" />  

# 數學公式及符號
- 有行內公式與獨立公式兩種：
  - $ 行內公式 $
  - $$ 獨立公式 $$  
ex:  
  - 行內公式 $F=ma$
  - 獨立公式 $$F=ma$$

- 上下標
上標符號，符號 ^， ex: $x^2$，與文字的上標略有不同 x^21^
下標符號，符號：_，ex: $x_2$，與文字的下標略有不同 x~22~
若上下標超過一個以上時要用組合符號：{}，ex: $x_{12345}$，$x^{12345}$  

- 括號  
()、[] 和 | 表示符號本身，用 \{\} 來表示 {} 。當要顯示"大號的"括號或分隔符時，要用 \left 和 \right 命令。
  - 一些特殊的括號：
>   | 輸入 | 顯示 | 輸入 | 顯示 |
>   | ---- | --- | ---- | --- |
>   | \langle	| ⟨	   | \rangle	| ⟩   |
>   | \lceil | ⌈	| \rceil	| ⌉ |
>   | \lfloor	| ⌊	| \rfloor	| ⌋ |
>   | \lbrace	| {	| \rbrace	| } |
Ex.
$$ f(x,y,z) = 3y^2z ( 3+\frac{7x+5}{1+y^2}) $$  
$$ f(x,y,z) = 3y^2z \left( 3+\frac{7x+5}{1+y^2} \right) $$
$$ f(x,y,z) = 3y^2z \langle 3+\frac{7x+5}{1+y^2} \rangle $$

更多使用教學請參考:   
- [如何在 Markdown 輸入數學公式及符號](https://blog.maxkit.com.tw/2020/02/markdown.html). 
- <https://personal.math.ubc.ca/~pwalls/math-python/jupyter/latex/>  

# 註解參照
這個鏈接用 1 作為網址變量[Google][^1]。然後在文檔的結尾為變量賦值（網址）  
變量 2 為[Google logo][^2]。  

[^1]: [Google首頁](https://www.google.com)
[^2]: https://www.google.com/photos/about/static/images/google.svg

# Markdown文件：
- Markdown guide: https://www.markdownguide.org
- Markdown 指南中文版: https://www.markdown.xyz
- Markdown線上編輯器：https://www.mdeditor.tw/


dsdsdsd
sdsdsd
sdsdsds
