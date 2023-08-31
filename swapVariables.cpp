//Assume variables first and second are declared to be double and are initialized. Write C++ code that cause the values stored in first and second to be exchanged if the value of first is not less than second.

if (!(first < second))//(first > second)
{
double temp = first;
first = second;
second = temp;
}

//Consider:
//If this is your answer:

//if (first !< second)
//{
  //first = second;
  //second = first;
//}

//This will not give us the desired result because first of all, you should not use '!' sign before defining the restriction.
//Here, we can notice that if the value of first is 1 and the value of second is 2, then first will become second. However, second will get its original value, but that is not what we want.
//Because we want original value of first to be stored in second, then we must use the temp variable, which stores the value of first into the value of second.
