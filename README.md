# Chemistry project - A history of population in Chemistry

[![Build Status](https://travis-ci.com/TheOdd/Chemistry.svg?token=dfSE1qYjxpgtga9sUFaC&branch=master)](https://travis-ci.com/TheOdd/Chemistry)

## Current lines of code: 726

This project briefly covers the role that Chemistry has had in population growth and decline over the last century. This includes, but is not limited to

 - Birth control
 - Antibiotics
 - GMO's

Please make sure you have all of the required dependencies before attempting to compile. You can do so by using

    sudo apt-get install cmake g++

After that, you can check your g++ version with

    gcc --version | grep gcc | grep -Po '\d.+$'

Look for the number that has two dot points. For example, 5.2.0 or 6.2.3, etc.

If your number is lower than 6.0.0, then you must update in order to compile.

To do this, follow these instructions

    sudo add-apt-repository ppa:ubuntu-toolchain-r/test
    sudo apt-get update
    sudo apt-get install gcc-6 g++-6
    sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-6 60 --slave /usr/bin/g++ g++ /usr/bin/g++-6

Before compiling the program, clone the repository with

    git clone https://github.com/TheOdd/Chemistry

Then, go into the repository and compile the project

    cd Chemistry
    cmake .
    make

Finally, to run the program do

    ./Chemistry

You're all set now!

### Note about Update_LOC script

If you want to use the `Update_LOC` script included in this repository, you must have the `loc` package installed. If you don't have it installed, you can get it [here](https://github.com/cgag/loc).
