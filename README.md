# Big_Integer_Division

This program is about dividing a very large integer N that could not be fit into any type of array or integer variable with another number D which is a normal integer and can be fit into any normal integer variable.

Now if we observe the problem statement it is clearly stated that N is very large so we can only store it in a string variable.

D can be stored in any integer variable.

Let us suppose N = 2564, D = 4

Now comes the division part. So what we do is.....

1) We take a variable eachDigit which extracts the digits from left side of N one by one.

2) So at first we extract 2 from N so eachDigit becomes 2.

3) Now we check whether eachDigit>=D(4)

4) NO, so extract next digit from N and appent it to eachDigit so eachDigit becomes 25.

5) Now we check whether eachDigit>=D

6) Yes, so divide it by D, and append this temporary quotient to another variable named quotient.

7) So now let's decide what would be the data type of quotient and eachDigit.

8) Calculate remainder = eachDigit%D and store remainder to eachDigit.

9) Is it necessary for quotient to be string?? Yes it is because quotient might also be very long. For example 	   23454324532453214532453/1 here quotient becomes very long.

10) Is it necessary for remainder to be string??? No because remainder will be in the range of 0 to (D-1).

11) Repeat these steps until parsing of N is completed.

12) Display quotient.

