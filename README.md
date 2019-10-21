# RISC-V
Introduction To Our Single-Cycle Core

###Designed by Muhammed Monis
First of all get started by Cloning this repository in your machine.
```ruby
git clone https://github.com/monisj/PracticeScala.git
```

Create a .txt file and place the ***hexadecimal*** code of your instructions simulated on ***Venus*** (RISC-V Simulator)\
Each instruction's hexadecimal code must be on seperate line as following. This program consists of 9 instructions.
```
00500113
00500193
014000EF
00120293
00502023
00002303
00628663
00310233
00008067
```
Then perform the following step
```ruby
cd practice/Ghaznavi/src/main/scala/datapath
```
Open **InstructionMem.scala** with this command. You can also manually go into the above path and open the file in your favorite text editor.
```ruby
open InstructionMem.scala
```
Find the following line
``` python
loadMemoryFromFile(mem, "/Users/mbp/Desktop/abc.txt")
```
Change the .txt file path to match your file that you created above storing your own program instructions.\
After setting up the InstructionMem.scala file, go inside the Nano-H folder.
```ruby
cd practice/Ghaznavi
```
And enter
```ruby
sbt
```
When the terminal changes to this type
```ruby
sbt:Ghaznavi>
```
Enter this command
```ruby
sbt:Ghaznavi> test:runMain datapath.Launcher Top
```
After you get success
```ruby
sbt:Ghaznavi> test:runMain datapath.Launcher Top --backend-name verilator
```
After success you will get a folder ***test_run_dir*** on root of your folder. Go into the examples folder inside.\
There you will find the folder named Top. Enter in it and you can find the Top.vcd file which you visualise on **gtkwave** to\
see your program running.


