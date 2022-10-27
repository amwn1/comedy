
function abc()
{
 
function count(n) {

    
   document.write(n);

    
    const newNumber = n-1;

    
    if (newNumber > 0) {
        count(newNumber);
    }
}
count(4);
}
