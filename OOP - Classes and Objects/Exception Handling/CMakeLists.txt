cmake_minimum_required(VERSION 3.7)
project(Inheritance)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Account.cpp Account.h Saving_Account.cpp Saving_Account.h Checking_Account.cpp Checking_Account.h Account_Util.cpp Account_Util.h Trust_Account.cpp Trust_Account.h I_Printable.cpp I_Printable.h IllegalBalanceException.h InsuficientFundsException.h)
add_executable(Inheritance ${SOURCE_FILES})