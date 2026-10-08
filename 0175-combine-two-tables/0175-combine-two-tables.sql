# Write your MySQL query statement below
SELECT Person.FirstName, Person.LastName, Address.city, Address.state FROM Person
LEFT JOIN Address ON Person.PersonID = Address.PersonID;


