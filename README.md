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

### Install dependency:
```bash
conda install git
conda install ninja
conda install cmake
conda install -c statiskit clang 
```

### compile and configure 
python $DPCPP_HOME/llvm/buildbot/configure.py
python $DPCPP_HOME/llvm/buildbot/compile.pys

### configure workspace
export DPCPP_HOME=~/sycl_workspace
export PATH=$DPCPP_HOME/llvm/build/bin:$PATH
export LD_LIBRARY_PATH=$DPCPP_HOME/llvm/build/lib:$LD_LIBRARY_PATH


### Install requiriments: 
