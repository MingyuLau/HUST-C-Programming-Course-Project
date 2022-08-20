本系统可以在 win2000/winxp/vista/win7 下完美使用 Borland C/C++ 3.1，包括图形程序。
所有环境均已经配置好，不用修改。
双击执行“Borland C++ 3.1”即可。

由于虚拟了 DOS 环境，文件夹 DISK_C 就是 C:\，使用文件路径的时候需要注意。
例如，图形程序中初始化图形环境的代码：
int gdriver=VGA, gmode=VGAHI;
initgraph(&gdriver, &gmode, "C:\\BORLANDC\\BGI");

路径说明：
dosbox		虚拟 DOS 环境的软件 DosBox 0.72
DISK_C		虚拟的 DOS 环境的 C:\
  └BORLANDC	Borland C/C++ 3.1 程序文件

Alt + Enter 可以切换全屏/窗口。