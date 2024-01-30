#include <stdio.h>

int main ()
{
    // Let's define two variables. These will hold the result of the expression

    // before and after adding the parenthesis 

    float expression_without_parenthesis, expression_with_parenthesis;

    //.1 Expression 
    expression_without_parenthesis = 1+3/2;
    expression_with_parenthesis = (1+(3/2)) ;

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.2 Expression 
    expression_without_parenthesis = 2-3*4;
    expression_with_parenthesis = (2-(3*4));

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.3 Expression
    expression_without_parenthesis = 2/3*4;
    expression_with_parenthesis = ((2/3)*4);

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.4 Expression
    expression_without_parenthesis = 2*3/4;
    expression_with_parenthesis = ((2*3)/4);

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.5 Expression
    expression_without_parenthesis = 2/3/4;
    expression_with_parenthesis = ((2/3)/4);

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.6 Expression
    expression_without_parenthesis = 4/3*2/5;
    expression_with_parenthesis = (((4/3)*2)/5);

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.7 Expression
    expression_without_parenthesis = 6*3/4*5;
    expression_with_parenthesis = (((6*3)/4)*5);

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.8 Expression
    expression_without_parenthesis = 4*3*3;
    expression_with_parenthesis = (4*(3*3));

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.9 Expression
    expression_without_parenthesis = 2-2*2*2*2;
    expression_with_parenthesis = (2 - ((2*2*2)*2));

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.10 Expression
    expression_without_parenthesis = 2/3*4*4;
    expression_with_parenthesis = ((2/3)*(4*4));

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.11 Expression
    expression_without_parenthesis = 1+2/3*4+5;
    expression_with_parenthesis = ((1+((2/3)*4))+5);

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    
    //.12 Expression
    expression_without_parenthesis = 5/2*2+4%3+9-3;
    expression_with_parenthesis = (((5/2)*2)+((4%3)+9)-3);

    printf("Expression 1 - wihtout parenthesis: %f, with parenthesis: %f\n", expression_without_parenthesis, expression_with_parenthesis);
    

    return(0);
}
