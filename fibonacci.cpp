/* fibonacci.cpp
 *
 * Copyright (c) 2015, Tomas Jonsson
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#include <iostream>

unsigned int fibonacci1(unsigned int n);
unsigned int fibonacci2(unsigned int n);

int main(int argc, char *argv[])
{
    std::cout << fibonacci1(46) << std::endl;
    std::cout << fibonacci2(46) << std::endl;
}

// Iterative version.
// Worst-case: O(N)
unsigned int fibonacci1(unsigned int n)
{
    unsigned int first = 1, second = 0, next;
    for (int k = 1; k <= n; k++) {
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}

// Recursive version.
// Worst-case: O(N!)
unsigned int fibonacci2(unsigned int n)
{
    if (n < 2)
        return n;
    else
        return fibonacci2(n - 1) + fibonacci2(n - 2);
}
