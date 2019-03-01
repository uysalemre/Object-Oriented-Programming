# DessertShop

HOW TO RUN ?

  In windows you can use VISUAL STUDIO IDE.
  
  In Linux you can use;
  
        g++ Candy.cpp Candy.h DessertShop.cpp Icecream.cpp Icecream.h cookie.cpp cookie.h shop.h -o output
        ./output

Shop, Cookie, Candy, and Icecream classes in support of a Dessert Shop which sells candy by the kg, cookies by the dozen  and  ice cream  by litre. 

You will use these classes for the checkout system and the classes are described below. You should take into account some rules and if the given rules are not met, error messages must be thrown.

  Candy class has a weight and a price per kg which are used to determine its cost.

  Cookie class has a number and a price per dozen which are used to determine its cost.

  Icecream class has a litre and a price per litre which are used to determine its cost.

  Discount percentage for any item must be in range of [0, 30] and an exception should be thrown 
for an invalid value. 

  Any  type  of  dessert  or  shop  (e.g.  cookie,  candy,  icecream,  shop<cookie>)  can  be  stored  as  a dynamic array and the total cost can be calculated  according to tax rate  (static defined  8%)  and discount rate.

  All the dynamic data members should be declared as private. 

  You  should  successfully  deallocate  all  of  the  allocated  memory  before  termination  of  your program. 

  You are also required to read dessert stock from a text file (“stock.txt”) and customer order from 
(“order.txt”) and then write the total cost with 10% discount to “checkout.txt”.
