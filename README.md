<h1>TASK-1:</h1>

In this the code demonstrates how 'C' supports only "Call by Value".

<h3>Inside main() function:</h3>
 <p> 1. 'a' is a variable that holds the value 10.</p>
 <p> 2. 'ptr' is the pointer that points to the address of 'a'.</p>
     
<h3>Inside modifypointer() function:</h3>
 <p> 1. 'p' is the copy of the original pointer 'ptr' when we change p=&temp we only modify the copy not the original
     pointer 'ptr' so 'ptr' in 'main()' is unaffected.</p>
 <p> 2. Now we modify the value of address  pointed to by 'p' since 'p' is now points to a local variable(temp) it does
     not affects the values in the 'main()' function.</p>

 <div>After the function call the value of 'a' and 'ptr' remained unchanged this tells that 'C' only supports call by value. </div>

 


 
     
