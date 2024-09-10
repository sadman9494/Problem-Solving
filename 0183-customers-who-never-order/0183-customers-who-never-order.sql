/* Write your T-SQL query statement below */
select name as Customers
FROM Customers as cs
left join orders as ord on cs.id = ord.customerId
where ord.id is NULL 