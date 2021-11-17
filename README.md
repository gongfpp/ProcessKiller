# ProcessKiller
Use Qt to established a ProcessKiller with Gui


点击查找进程将目前所有进程显示，点击“杀杀杀杀”按钮弹出模态对话框，输入欲杀进程的PID，即可干烂（此图中PID为自己，即自杀）
查找进程按钮杀鸡用牛刀用了多线程。核心功能为调用cmd的tasklist和taskkill。
实现总时间约为2小时，一小时写多线程，一小时解决中文乱码问题。
https://img-blog.csdnimg.cn/47d72e90c4df4507844a610eaed40edf.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAZ29uZ2ZwcA==,size_20,color_FFFFFF,t_70,g_se,x_16

