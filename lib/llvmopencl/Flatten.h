// LLVM module pass to inline required functions (those accessing
// per-workgroup variables) into the kernel.
// 
// Copyright (c) 2011 Universidad Rey Juan Carlos
//               2012-2015 Pekka Jääskeläinen
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


#ifndef _POCL_FLATTEN_H
#define _POCL_FLATTEN_H

#include "config.h"
#if (defined LLVM_3_1 || defined LLVM_3_2)
#include "llvm/Module.h"
#else
#include "llvm/IR/Module.h"
#endif
#include "llvm/Pass.h"

namespace pocl {
  class Flatten : public llvm::ModulePass {
  
  public:
    static char ID;
    Flatten() : ModulePass(ID) {}
    
    virtual bool runOnModule(llvm::Module &M);

  };
}

#endif