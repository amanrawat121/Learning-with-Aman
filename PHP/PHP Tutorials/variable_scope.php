<?php
echo "A variable scope is the area where the variable will be effective in that page";
echo "<br>";
echo "There are three types of variable scope:<br>
1. Global Scope: Variable declared outside of PHP function is global scope variable, using this within function will throw out an error.<br>
2. Local Scope: Variable declared within the function is called local scope variable. Using this outside the function will throw out an error. You can use local scope variable outside function with the same name because local variable is only recognized by the function within which you are using it. If you want to use a global scope variable within a function, you have to add a term 'global' next to the variable.<br>
3. Static Scope: When a function is executed, all the values of a local variable are deleted. use the term 'static' next to variable if you want to retain the value of it<br>";




?>