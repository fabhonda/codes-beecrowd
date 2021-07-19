SELECT customers.name, orders.id
FROM customers JOIN orders
ON customers.id = orders.id_customers
WHERE extract(month from orders.orders_date) <= 6