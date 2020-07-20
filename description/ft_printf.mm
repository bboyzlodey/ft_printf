<map version="freeplane 1.8.0">
<!--To view this file, download free mind mapping software Freeplane from http://freeplane.sourceforge.net -->
<node TEXT="ft_printf" FOLDED="false" ID="ID_1149124681" CREATED="1590086347417" MODIFIED="1595023145502" STYLE="oval">
<font NAME="JetBrains Mono" SIZE="18"/>
<hook NAME="MapStyle" zoom="1.331">
    <properties edgeColorConfiguration="#808080ff,#ff0000ff,#0000ffff,#00ff00ff,#ff00ffff,#00ffffff,#7c0000ff,#00007cff,#007c00ff,#7c007cff,#007c7cff,#7c7c00ff" fit_to_viewport="false"/>

<map_styles>
<stylenode LOCALIZED_TEXT="styles.root_node" STYLE="oval" UNIFORM_SHAPE="true" VGAP_QUANTITY="24.0 pt">
<font SIZE="24"/>
<stylenode LOCALIZED_TEXT="styles.predefined" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="default" ICON_SIZE="12.0 pt" COLOR="#000000" STYLE="fork">
<font NAME="SansSerif" SIZE="10" BOLD="false" ITALIC="false"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.details"/>
<stylenode LOCALIZED_TEXT="defaultstyle.attributes">
<font SIZE="9"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.note" COLOR="#000000" BACKGROUND_COLOR="#ffffff" TEXT_ALIGN="LEFT"/>
<stylenode LOCALIZED_TEXT="defaultstyle.floating">
<edge STYLE="hide_edge"/>
<cloud COLOR="#f0f0f0" SHAPE="ROUND_RECT"/>
</stylenode>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.user-defined" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="styles.topic" COLOR="#18898b" STYLE="fork">
<font NAME="Liberation Sans" SIZE="10" BOLD="true"/>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.subtopic" COLOR="#cc3300" STYLE="fork">
<font NAME="Liberation Sans" SIZE="10" BOLD="true"/>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.subsubtopic" COLOR="#669900">
<font NAME="Liberation Sans" SIZE="10" BOLD="true"/>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.important">
<icon BUILTIN="yes"/>
</stylenode>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.AutomaticLayout" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="AutomaticLayout.level.root" COLOR="#000000" STYLE="oval" SHAPE_HORIZONTAL_MARGIN="10.0 pt" SHAPE_VERTICAL_MARGIN="10.0 pt">
<font SIZE="18"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,1" COLOR="#0033ff">
<font SIZE="16"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,2" COLOR="#00b439">
<font SIZE="14"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,3" COLOR="#990000">
<font SIZE="12"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,4" COLOR="#111111">
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,5"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,6"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,7"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,8"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,9"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,10"/>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,11"/>
</stylenode>
</stylenode>
</map_styles>
</hook>
<hook NAME="AutomaticEdgeColor" COUNTER="3" RULE="ON_BRANCH_CREATION"/>
<node TEXT="General" POSITION="right" ID="ID_592620188" CREATED="1590086398157" MODIFIED="1595020485325" VGAP_QUANTITY="6.74999979883433 pt">
<edge COLOR="#ff0000"/>
<node TEXT="Structure format" ID="ID_969003995" CREATED="1590099683293" MODIFIED="1595020485324" HGAP_QUANTITY="22.24999975413084 pt" VSHIFT_QUANTITY="8.249999754130847 pt" BACKGROUND_COLOR="#ffffcc" STYLE="bubble" MAX_WIDTH="99.79338216176886 pt" MIN_WIDTH="99.79338216176886 pt">
<icon BUILTIN="messagebox_warning"/>
<font BOLD="true" ITALIC="false"/>
<richcontent TYPE="DETAILS" HIDDEN="true">

<html>
  <head>
    
  </head>
  <body>
    <p>
      &quot;some text %[flags][min. field-width][.precision][size]&quot;
    </p>
  </body>
</html>

</richcontent>
<node TEXT="String" ID="ID_1782143876" CREATED="1590099846585" MODIFIED="1595015791085" BACKGROUND_COLOR="#ccffcc" STYLE="rectangle" BORDER_WIDTH="1.0 px" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#99ffff" BORDER_DASH_LIKE_EDGE="false">
<edge COLOR="#ccccff" WIDTH="thin"/>
</node>
<node TEXT="" ID="ID_202992721" CREATED="1590100154120" MODIFIED="1590100154123">
<hook NAME="FirstGroupNode"/>
</node>
<node TEXT="&apos;%&apos; (ignore &quot;%%&quot;)" ID="ID_1451056761" CREATED="1590099853381" MODIFIED="1595015791085" BACKGROUND_COLOR="#ccffcc" STYLE="rectangle" BORDER_WIDTH="1.0 px" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#99ffff" BORDER_DASH_LIKE_EDGE="false">
<edge COLOR="#ccccff" WIDTH="thin"/>
</node>
<node TEXT="[flags]" ID="ID_981452313" CREATED="1590099884771" MODIFIED="1595024246423" BACKGROUND_COLOR="#ccffcc" STYLE="rectangle" BORDER_WIDTH="1.0 px" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#99ffff" BORDER_DASH_LIKE_EDGE="false">
<edge COLOR="#ccccff" WIDTH="thin"/>
<richcontent TYPE="DETAILS" HIDDEN="true">

<html>
  <head>
    
  </head>
  <body>
    <p>
      
    </p>
    <table class="wikitable">
      <tr>
        <th>
          Спецификатор
        </th>
        <th>
          <code>%d</code>, <code>%i</code>, <code>%o</code>, <code>%u</code>, <code>%x</code>, <code>%X</code>
        </th>
        <th>
          <code>%n</code>
        </th>
        <th>
          Примечание
        </th>
      </tr>
      <tr>
        <td>
          отсутствует
        </td>
        <td>
          <tt>int</tt>&nbsp;или <tt>unsigned int</tt>
        </td>
        <td>
          указатель на <tt>int</tt>
        </td>
      </tr>
      <tr>
        <th>
          <code><b>l</b></code>
        </th>
        <td>
          <tt>long int</tt>&nbsp;или <tt>unsigned long int</tt>
        </td>
        <td>
          указатель на <tt>long int</tt>
        </td>
      </tr>
      <tr>
        <th>
          <code><b>hh</b></code>
        </th>
        <td>
          Аргумент имеет тип <tt>int</tt>&nbsp;или <tt>unsigned int</tt>, но принудительно приводится к типу <tt>signed char</tt>&nbsp;или <tt>unsigned char</tt>, соответственно
        </td>
        <td>
          указатель на <tt>signed char</tt>
        </td>
        <td rowspan="6">
          формально существуют в языке Си начиная со стандарта от 1999 года, а в языке Си++ — начиная со стандарта от 2011 года.
        </td>
      </tr>
      <tr>
        <th>
          <code><b>h</b></code>
        </th>
        <td>
          Аргумент имеет тип <tt>int</tt>&nbsp;или <tt>unsigned int</tt>, но принудительно приводится к типу <tt>short int</tt>&nbsp;или <tt>unsigned short int</tt>, соответственно
        </td>
        <td>
          указатель на <tt>short int</tt>
        </td>
      </tr>
      <tr>
        <th>
          <code><b>ll</b></code>
        </th>
        <td>
          <tt>long long int</tt>&nbsp;или <tt>unsigned long long int</tt>
        </td>
        <td>
          указатель на <tt>long long int</tt>
        </td>
      </tr>
      <tr>
        <th>
          <code><b>j</b></code>
        </th>
        <td>
          <tt>intmax_t</tt>&nbsp;или <tt>uintmax_t</tt>
        </td>
        <td>
          указатель на <tt>intmax_t</tt>
        </td>
      </tr>
      <tr>
        <th>
          <code><b>z</b></code>
        </th>
        <td>
          <tt>size_t</tt>&nbsp;(или эквивалентный по размеру знаковый тип)
        </td>
        <td>
          указатель на эквивалентный по размеру <tt>size_t</tt>&nbsp;знаковый тип
        </td>
      </tr>
      <tr>
        <th>
          <code><b>t</b></code>
        </th>
        <td>
          <tt>ptrdiff_t</tt>&nbsp;(или эквивалентный по размеру беззнаковый тип)
        </td>
        <td>
          указатель на <tt>ptrdiff_t</tt>
        </td>
      </tr>
      <tr>
        <th>
          <code><b>L</b></code>
        </th>
        <td>
          <tt>__int64 или unsigned __int64</tt>
        </td>
        <td>
          указатель на <tt>__int64</tt>
        </td>
        <td>
          Для Borland Builder 6 (спецификатор <code><b>ll</b></code>&nbsp;ожидает 32-бит число)
        </td>
      </tr>
    </table>
  </body>
</html>

</richcontent>
<node TEXT="#" ID="ID_1129920802" CREATED="1590100343677" MODIFIED="1595015819373" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          «альтернативная форма» вывода значения
        </td>
      </tr>
    </table>
    <br class="Apple-interchange-newline"/>
    

    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          При выводе чисел в формате перед числом будет указываться особенность формата (см. ниже).
        </td>
      </tr>
      <tr>
        
      </tr>
    </table>
    <br class="Apple-interchange-newline"/>
    
  </body>
</html>
</richcontent>
<edge COLOR="#006666"/>
</node>
<node TEXT="0" OBJECT="java.lang.Long|0" ID="ID_1825759914" CREATED="1590100349230" MODIFIED="1595015819373" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <th style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0; background-color: rgb(234, 236, 240); text-align: center">
          
        </th>
      </tr>
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          <b>Значение: </b>дополнять поле до ширины, указанной в поле&nbsp;<tt style="font-family: monospace, monospace"><font face="monospace, monospace"><i>ширина</i></font></tt>&nbsp;управляющей последовательности, символом&nbsp;<code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px"><font face="monospace, monospace" color="rgb(0, 0, 0)">0</font></code>
        </td>
      </tr>
    </table>
    <br class="Apple-interchange-newline"/>
    

    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <th style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0; background-color: rgb(234, 236, 240); text-align: center">
          В отсутствие этого знака: д<font color="rgb(32, 33, 34)" face="sans-serif" size="14px">ополнять пробелами</font>

          <p>
            
          </p>
          <p>
            <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">Используется для типов</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">d</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">i</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">o</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">u</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">x</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">X</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">a</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">A</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">e</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">E</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">f</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">F</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">g</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">G</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">. Для типов</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">d</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">i</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">o</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">u</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">x</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">X</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">, если</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px"><i>точность</i></font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(248, 249, 250); display: inline !important; float: none">указана, этот флаг игнорируется. Для остальных типов поведение не определено.</span></font>
          </p>
        </th>
      </tr>
    </table>
  </body>
</html>
</richcontent>
<edge COLOR="#006666"/>
</node>
<node TEXT="-" ID="ID_1005527250" CREATED="1590100351233" MODIFIED="1595015819373" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 700; letter-spacing: normal; text-align: center; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(234, 236, 240); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><b>Значение:</b></font></span>&nbsp;выводимое значение выравнивается по левому краю в пределах минимальной ширины поля
        </td>
      </tr>
    </table>
    <p>
      
    </p>
    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 700; letter-spacing: normal; text-align: center; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(234, 236, 240); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><b>В отсутствие этого знака: </b></font></span>по правому
        </td>
      </tr>
    </table>
    <br class="Apple-interchange-newline"/>
  </body>
</html>
</richcontent>
<edge COLOR="#006666"/>
</node>
<node TEXT="+" ID="ID_1295256341" CREATED="1590100355564" MODIFIED="1595015819373" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 700; letter-spacing: normal; text-align: center; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(234, 236, 240); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><b>Значение:</b></font></span>&nbsp;всегда указывать знак (плюс или минус) для выводимого десятичного числового значения
        </td>
      </tr>
    </table>
    <p>
      
    </p>
    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          <b>В отсутсвие этого знака</b>: только для отрицательных чисел
        </td>
      </tr>
    </table>
    <br class="Apple-interchange-newline"/>
  </body>
</html>
</richcontent>
<edge COLOR="#006666"/>
</node>
<node TEXT="space" ID="ID_598141887" CREATED="1590100358757" MODIFIED="1595015819373" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 700; letter-spacing: normal; text-align: center; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(234, 236, 240); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><b>Значение:</b></font></span>&nbsp;<font color="rgb(32, 33, 34)" face="sans-serif" size="14px">помещать перед результатом пробел, если первый символ значения не знак </font>
    </p>
    <p>
      <font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><b>В отсутствие знака:</b>&nbsp;Вывод может начинаться с цифры </font>
    </p>
    <table class="wikitable" style="font-size: 14px; background-color: rgb(248, 249, 250); color: rgb(32, 33, 34); margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; font-family: sans-serif; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px">
      <tr>
        <td style="border-top-color: rgb(162, 169, 177); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(162, 169, 177); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(162, 169, 177); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(162, 169, 177); border-left-style: solid; border-left-width: 1px; padding-top: 0; padding-bottom: 0; padding-right: 0; padding-left: 0">
          <b>Примечание;</b>&nbsp;Символ&nbsp;<b style="font-weight: 700">+</b>&nbsp;имеет больший приоритет, чем пробел. Используется только для десятичных числовых значений.
        </td>
      </tr>
    </table>
  </body>
</html>
</richcontent>
<edge COLOR="#006666"/>
</node>
<node TEXT="" ID="ID_638119845" CREATED="1590100978256" MODIFIED="1590100978259">
<hook NAME="FirstGroupNode"/>
</node>
<node TEXT="" ID="ID_1534816744" CREATED="1590101023836" MODIFIED="1590101023839">
<hook NAME="FirstGroupNode"/>
</node>
<node TEXT="hh" ID="ID_607331018" CREATED="1590100836025" MODIFIED="1595015819373">
<edge COLOR="#006666"/>
</node>
<node TEXT="h" ID="ID_9381110" CREATED="1590100871230" MODIFIED="1595015819373">
<edge COLOR="#006666"/>
</node>
<node TEXT="l" ID="ID_1956025240" CREATED="1590100717168" MODIFIED="1595015819373">
<edge COLOR="#006666"/>
</node>
<node TEXT="L" ID="ID_201454094" CREATED="1590100724223" MODIFIED="1595015819373">
<edge COLOR="#006666"/>
</node>
<node TEXT="" ID="ID_1605922343" CREATED="1590101023831" MODIFIED="1590101405662">
<hook NAME="SummaryNode"/>
<hook NAME="AlwaysUnfoldedNode"/>
<node TEXT="d, i" ID="ID_785461442" CREATED="1590101023840" MODIFIED="1595015838454" HGAP_QUANTITY="36.49999932944777 pt" VSHIFT_QUANTITY="-5.249999843537812 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <font color="rgb(32, 33, 34)" face="sans-serif" size="14px">десятичное знаковое число, размер по умолчанию,</font><font color="rgb(32, 33, 34)" face="sans-serif">&nbsp;</font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int )</font></tt><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">. По умолчанию записывается с правым выравниванием, знак пишется только для отрицательных чисел. '</font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">%d</font></code><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">' и '</font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">%i</font></code><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">' ведут себя одинаково при выводе, но имеют разные значения при вводе с помощью функции</font><font color="rgb(32, 33, 34)" face="sans-serif">&nbsp;</font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(165, 88, 88)" size="14px"><a href="https://ru.wikipedia.org/w/index.php?title=Scanf&amp;action=edit&amp;redlink=1" class="new" title="Scanf (страница отсутствует)" style="text-decoration: none; color: rgb(165, 88, 88); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null">scanf</a></font><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">()</font></code><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">;</font>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#330099"/>
</node>
<node TEXT="o" ID="ID_1844500830" CREATED="1590101184749" MODIFIED="1595015838454" HGAP_QUANTITY="37.249999307096026 pt" VSHIFT_QUANTITY="-2.2499999329447764 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <font color="rgb(32, 33, 34)" face="sans-serif" size="14px">восьмеричное беззнаковое число, размер по умолчанию</font><font color="rgb(32, 33, 34)" face="sans-serif">&nbsp;</font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int ) </font></tt>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#330099"/>
</node>
<node TEXT="u" ID="ID_766086757" CREATED="1590101229280" MODIFIED="1595015838454" HGAP_QUANTITY="39.4999992400408 pt" VSHIFT_QUANTITY="4.499999865889553 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">десятичное беззнаковое число, размер по умолчанию</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int )</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">;</font></span>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#330099"/>
</node>
<node TEXT="x, X" ID="ID_1163624765" CREATED="1590101360555" MODIFIED="1595015838454" HGAP_QUANTITY="34.999999374151244 pt" VSHIFT_QUANTITY="7.499999776482589 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">шестнадцатеричное беззнаковое число,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">x</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">использует маленькие буквы (abcdef),</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">X</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">большие (ABCDEF), размер по умолчанию</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int )</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">;</font></span>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#330099"/>
</node>
</node>
</node>
<node TEXT="[min. field-width]" ID="ID_71859454" CREATED="1590099901353" MODIFIED="1595015791069" TEXT_SHORTENED="true" BACKGROUND_COLOR="#ccffcc" STYLE="rectangle" BORDER_WIDTH="1.0 px" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#99ffff" BORDER_DASH_LIKE_EDGE="false"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><i style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)">Ширина</i><span>&nbsp;</span><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">(десятичное число или символ</span><span>&nbsp;</span></font><a href="https://ru.wikipedia.org/wiki/%D0%97%D0%B2%D1%91%D0%B7%D0%B4%D0%BE%D1%87%D0%BA%D0%B0_(%D1%82%D0%B8%D0%BF%D0%BE%D0%B3%D1%80%D0%B0%D1%84%D0%B8%D0%BA%D0%B0)" title="Звёздочка (типографика)" style="text-decoration: none; color: rgb(11, 0, 128); background-color: rgb(255, 255, 255); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null; font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font color="rgb(11, 0, 128)" face="sans-serif" size="14px">звёздочка</font></a><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">) указывает минимальную ширину поля (включая знак для чисел). Если представление величины больше, чем ширина поля, то запись выходит за пределы поля (например,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">%2i</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">для величины 100 даст значение поля в три символа), если представление величины менее указанного числа, то оно будет дополнено (по умолчанию) пробелами слева, поведение может меняться предшествующими флагами. Если в качестве ширины указана звёздочка, ширина поля указывается в списке аргументов перед значением для вывода (например,</span><span>&nbsp;</span></font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">printf( &quot;%0*x&quot;, 8, 15 );</font></code><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">выведет текст</span><span>&nbsp;</span></font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">0000000f</font></code><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">).</font></span>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ccccff" WIDTH="thin"/>
</node>
<node TEXT="[точность] (.1)" ID="ID_640062706" CREATED="1590099915656" MODIFIED="1595015791069" MAX_WIDTH="76.23966489358459 pt" MIN_WIDTH="76.23966489358459 pt" TEXT_SHORTENED="true" BACKGROUND_COLOR="#ccffcc" STYLE="rectangle" BORDER_WIDTH="1.0 px" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#99ffff" BORDER_DASH_LIKE_EDGE="false"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <ul style="list-style-image: url(/w/skins/Vector/resources/skins.vector.styles/images/bullet-icon.svg?d4515); margin-top: 0; margin-right: 0px; margin-bottom: 0px; margin-left: 0; padding-top: 0px; padding-right: 0px; padding-bottom: 0px; padding-left: 0px; color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)">
      <li style="margin-bottom: 0">
        указывает на минимальное количество символов, которое должно появиться при обработке типов<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">d</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">i</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">o</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">u</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">x</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">X</font></tt>;
      </li>
      <li style="margin-bottom: 0">
        указывает на минимальное количество символов, которое должно появиться после десятичной запятой (точки) при обработке типов<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">a</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">A</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">e</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">E</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">f</font></tt>,<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">F</font></tt>;
      </li>
      <li style="margin-bottom: 0">
        максимальное количество значащих символов для типов<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">g</font></tt><span>&nbsp;</span>и<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">G</font></tt>;
      </li>
      <li style="margin-bottom: 0">
        максимальное число символов, которые будут выведены для типа<span>&nbsp;</span><tt style="font-family: monospace, monospace"><font face="monospace, monospace">s</font></tt>;
      </li>
    </ul>
    <p style="margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)">
      Точность задаётся в виде точки с последующим десятичным числом или звёздочкой (<tt style="font-family: monospace, monospace"><font face="monospace, monospace" color="rgb(11, 0, 128)"><a href="https://ru.wikipedia.org/wiki/*" class="mw-redirect" title="*" style="text-decoration: none; color: rgb(11, 0, 128); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null">*</a></font></tt>), если число или звёздочка отсутствует (присутствует только точка), то предполагается, что число равно нулю. Точка для указания точности используется даже в том случае, если при выводе чисел с плавающей запятой выводится запятая.
    </p>
    <p style="margin-top: 0; margin-bottom: 0; margin-right: 0px; margin-left: 0px; color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)">
      Если после точки указан символ «звёздочка», то при обработке строки форматирования значение для поля читается из списка аргументов. (При этом, если символ звёздочка и в поле ширины и в поле точности, сначала указывается ширина, потом точность и лишь потом значение для вывода). Например,<span>&nbsp;</span><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px"><font face="monospace, monospace" color="rgb(0, 0, 0)">printf( &quot;%0*.*f&quot;, 8, 4, 2.5 );</font></code><span>&nbsp;</span>выведет текст<span>&nbsp;</span><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px"><font face="monospace, monospace" color="rgb(0, 0, 0)">002.5000</font></code>.
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ccccff" WIDTH="thin"/>
</node>
<node TEXT="type" ID="ID_1730596541" CREATED="1590100219978" MODIFIED="1595015791069" BACKGROUND_COLOR="#ffcccc" STYLE="rectangle" BORDER_WIDTH="1.0 px" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#99ffff" BORDER_DASH_LIKE_EDGE="false">
<edge COLOR="#ccccff" WIDTH="thin"/>
<node TEXT="s - String" ID="ID_1858727097" CREATED="1590100248520" MODIFIED="1595015859445" HGAP_QUANTITY="34.999999374151244 pt" VSHIFT_QUANTITY="-1.4999999552965178 pt">
<edge COLOR="#ff00ff"/>
</node>
<node TEXT="p - adress of pointer" ID="ID_1541954562" CREATED="1590100493038" MODIFIED="1595015859445" TEXT_SHORTENED="true" HGAP_QUANTITY="32.74999944120647 pt" VSHIFT_QUANTITY="3.7499998882412946 pt"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">вывод</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><a href="https://ru.wikipedia.org/wiki/%D0%A3%D0%BA%D0%B0%D0%B7%D0%B0%D1%82%D0%B5%D0%BB%D1%8C_(%D1%82%D0%B8%D0%BF_%D0%B4%D0%B0%D0%BD%D0%BD%D1%8B%D1%85)" title="Указатель (тип данных)" style="text-decoration: none; color: rgb(11, 0, 128); background-color: rgb(255, 255, 255); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null; font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font color="rgb(11, 0, 128)" face="sans-serif" size="14px">указателя</font></a><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">, внешний вид может существенно различаться в зависимости от внутреннего представления в компиляторе и платформе (например, 16-битная платформа MS-DOS использует форму записи вида</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">FFEC:1003</font></code><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">, 32-битная платформа с</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><a href="https://ru.wikipedia.org/wiki/%D0%9F%D0%BB%D0%BE%D1%81%D0%BA%D0%B0%D1%8F_%D0%B0%D0%B4%D1%80%D0%B5%D1%81%D0%B0%D1%86%D0%B8%D1%8F" class="mw-redirect" title="Плоская адресация" style="text-decoration: none; color: rgb(11, 0, 128); background-color: rgb(255, 255, 255); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null; font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font color="rgb(11, 0, 128)" face="sans-serif" size="14px">плоской адресацией</font></a><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">использует адрес вида</span><span>&nbsp;</span></font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">00FA0030</font></code><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">);</font></span>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ff00ff"/>
</node>
<node TEXT="d, i - decimal integer" ID="ID_401348987" CREATED="1590101023840" MODIFIED="1595015859445" HGAP_QUANTITY="36.49999932944777 pt" VSHIFT_QUANTITY="-5.249999843537812 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <font color="rgb(32, 33, 34)" face="sans-serif" size="14px">десятичное знаковое число, размер по умолчанию,</font><font color="rgb(32, 33, 34)" face="sans-serif">&nbsp;</font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int )</font></tt><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">. По умолчанию записывается с правым выравниванием, знак пишется только для отрицательных чисел. '</font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">%d</font></code><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">' и '</font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">%i</font></code><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">' ведут себя одинаково при выводе, но имеют разные значения при вводе с помощью функции</font><font color="rgb(32, 33, 34)" face="sans-serif">&nbsp;</font><code style="font-family: monospace, monospace; color: rgb(0, 0, 0); background-color: rgb(248, 249, 250); border-top-color: rgb(234, 236, 240); border-top-style: solid; border-top-width: 1px; border-right-color: rgb(234, 236, 240); border-right-style: solid; border-right-width: 1px; border-bottom-color: rgb(234, 236, 240); border-bottom-style: solid; border-bottom-width: 1px; border-left-color: rgb(234, 236, 240); border-left-style: solid; border-left-width: 1px; padding-top: 1px; padding-bottom: 1px; padding-right: 4px; padding-left: 4px; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font face="monospace, monospace" color="rgb(165, 88, 88)" size="14px"><a href="https://ru.wikipedia.org/w/index.php?title=Scanf&amp;action=edit&amp;redlink=1" class="new" title="Scanf (страница отсутствует)" style="text-decoration: none; color: rgb(165, 88, 88); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null">scanf</a></font><font face="monospace, monospace" color="rgb(0, 0, 0)" size="14px">()</font></code><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">;</font>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ff00ff"/>
</node>
<node TEXT="u - unsigned decimal" ID="ID_1040473988" CREATED="1590101229280" MODIFIED="1595015859460" HGAP_QUANTITY="39.4999992400408 pt" VSHIFT_QUANTITY="4.499999865889553 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">десятичное беззнаковое число, размер по умолчанию</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int )</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">;</font></span>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ff00ff"/>
</node>
<node TEXT="o - octogen integer" ID="ID_381262730" CREATED="1590101184749" MODIFIED="1595015859460" HGAP_QUANTITY="37.249999307096026 pt" VSHIFT_QUANTITY="-2.2499999329447764 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <font color="rgb(32, 33, 34)" face="sans-serif" size="14px">восьмеричное беззнаковое число, размер по умолчанию</font><font color="rgb(32, 33, 34)" face="sans-serif">&nbsp;</font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int ) </font></tt>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ff00ff"/>
</node>
<node TEXT="x, X - hexodecimal int" ID="ID_810573077" CREATED="1590101360555" MODIFIED="1595015859460" HGAP_QUANTITY="34.999999374151244 pt" VSHIFT_QUANTITY="7.499999776482589 pt" TEXT_SHORTENED="true"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">шестнадцатеричное беззнаковое число,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">x</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">использует маленькие буквы (abcdef),</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">X</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">большие (ABCDEF), размер по умолчанию</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">sizeof( int )</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">;</font></span>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ff00ff"/>
</node>
<node TEXT="f - float" ID="ID_1681280483" CREATED="1590101862559" MODIFIED="1595015859460" TEXT_SHORTENED="true" HGAP_QUANTITY="34.249999396502986 pt" VSHIFT_QUANTITY="5.999999821186071 pt"><richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">числа с плавающей запятой. По умолчанию выводятся с точностью 6, если число по модулю меньше единицы, перед десятичной точкой пишется 0. Величины</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><a href="https://ru.wikipedia.org/wiki/%D0%91%D0%B5%D1%81%D0%BA%D0%BE%D0%BD%D0%B5%D1%87%D0%BD%D0%BE%D1%81%D1%82%D1%8C" title="Бесконечность" style="text-decoration: none; color: rgb(11, 0, 128); background-color: rgb(255, 255, 255); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null; font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font color="rgb(11, 0, 128)" face="sans-serif" size="14px">±∞</font></a><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">представляются в форме</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">[-]inf</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">или</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">[-]infinity</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">, Величина</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><a href="https://ru.wikipedia.org/wiki/Nan" class="mw-redirect" title="Nan" style="text-decoration: none; color: rgb(11, 0, 128); background-color: rgb(255, 255, 255); background-image: null; background-repeat: repeat; background-attachment: scroll; background-position: null; font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px"><font color="rgb(11, 0, 128)" face="sans-serif" size="14px">Nan</font></a><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">представляется как</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">[-]nan</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">или</span><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">[-]nan(любой текст далее)</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">. Использование</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">F</font></tt><span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">&nbsp;</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none">выводит указанные величины заглавными буквами (</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">-INF</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">,</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">NAN</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">). Аргумент по умолчанию имеет размер</font></span><font color="rgb(32, 33, 34)" face="sans-serif" size="14px"><span>&nbsp;</span></font><tt style="font-family: monospace, monospace; color: rgb(32, 33, 34); font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255)"><font face="monospace, monospace" color="rgb(32, 33, 34)" size="14px">double</font></tt><span style="color: rgb(32, 33, 34); font-family: sans-serif; font-size: 14px; font-style: normal; font-weight: 400; letter-spacing: normal; text-align: left; text-indent: 0px; text-transform: none; white-space: normal; word-spacing: 0px; background-color: rgb(255, 255, 255); display: inline !important; float: none"><font color="rgb(32, 33, 34)" face="sans-serif" size="14px">.</font></span>
    </p>
  </body>
</html>
</richcontent>
<edge COLOR="#ff00ff"/>
</node>
</node>
<node TEXT="" ID="ID_320053381" CREATED="1590100154096" MODIFIED="1595014900142">
<hook NAME="SummaryNode"/>
<hook NAME="AlwaysUnfoldedNode"/>
<node TEXT="ignore whitespaces" ID="ID_1042790189" CREATED="1590100154125" MODIFIED="1595014900142" HGAP_QUANTITY="90.49999772012241 pt" VSHIFT_QUANTITY="-23.249999307096026 pt"/>
</node>
</node>
</node>
<node TEXT="Functions for convert type to str" POSITION="left" ID="ID_1695753454" CREATED="1595022329154" MODIFIED="1595023109518">
<edge COLOR="#0000ff"/>
<richcontent TYPE="DETAILS">

<html>
  <head>
    
  </head>
  <body>
    <p>
      <b>ARG: </b>type
    </p>
    <p>
      <b>Return</b>: char * (allocated with malloc)
    </p>
  </body>
</html>

</richcontent>
<node TEXT="char *str(char *value)" ID="ID_763465973" CREATED="1595022349478" MODIFIED="1595023187534"/>
<node TEXT="char_str" ID="ID_806054405" CREATED="1595022730540" MODIFIED="1595022738199"/>
<node TEXT="addr_str" ID="ID_886586688" CREATED="1595022363189" MODIFIED="1595022573316"/>
<node TEXT="dec_int_str" ID="ID_410467812" CREATED="1595022382965" MODIFIED="1595022567659"/>
<node TEXT="dec_unint_str" ID="ID_1127723405" CREATED="1595022516514" MODIFIED="1595022556102"/>
<node TEXT="oct_int_str" ID="ID_1591842103" CREATED="1595022582635" MODIFIED="1595022602819"/>
<node TEXT="hex_int_str" ID="ID_1236568437" CREATED="1595022609063" MODIFIED="1595022620196"/>
<node TEXT="dec_float_str" ID="ID_179237479" CREATED="1595022660374" MODIFIED="1595022687954"/>
</node>
</node>
</map>
