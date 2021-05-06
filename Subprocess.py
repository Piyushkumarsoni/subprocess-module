import subprocess
var1="gcc"
var2="c_code.c"
var3="-o"
var4="out"
subprocess.run([var1,var2,var3,var4])
subprocess.run("./out")

