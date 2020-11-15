### References:

* https://docs.oneapi.com/versions/latest/dpcpp/model/sample-program.html


### Useful links:

* https://github.com/intel/llvm/tree/sycl/sycl/doc/extensions
* https://intel.github.io/llvm-docs/GetStartedGuide.html#create-dpc-workspace

### First step:

```bash
export DPCPP_HOME=~/sycl_workspace
mkdir $DPCPP_HOME
cd $DPCPP_HOME

git clone https://github.com/intel/llvm -b sycl
```

### anaconda3 activate
```
source <path>/anaconda3/bin/activate
conda activate base
```

### Where is clang?

```
<path>/sycl_workspace/llvm/build/bin/clang
<path>/sycl_workspace/llvm/build/bin/clang++
```

### Install dependency:
```bash
conda install git
conda install ninja
conda install cmake
```

### compile and configure 
```
python $DPCPP_HOME/llvm/buildbot/configure.py
python $DPCPP_HOME/llvm/buildbot/compile.py
```

### configure workspace
```
export DPCPP_HOME=~/sycl_workspace
export PATH=$DPCPP_HOME/llvm/build/bin:$PATH
export LD_LIBRARY_PATH=$DPCPP_HOME/llvm/build/lib:$LD_LIBRARY_PATH
```

### Run compilaction
```
clang++ -fsycl simple.cpp -o simple
```

### Recommended build instructions: 

##### Unix/MacOS

```
sh path_set.sh
mkdir build && cd build
cmake .. 
cmake --build .
```

### Install conan -- C/C++ package manager
```
pip install conan
```

### Run tests:
```
cd build
conan install ..
bin/main-test
```

### for debug:
```
clang++ app/main.cpp qubo.cpp -I include/ -L build/src/ -l IsingSolver -o main
```
