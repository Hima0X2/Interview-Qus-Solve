SELECT Product.product_name, Sales.year, Sales.price
FROM Sales 
LEFT JOIN Product using(product_id);
