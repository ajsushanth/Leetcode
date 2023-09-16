# Write your MySQL query statement below
select person.firstName, person.lastName, address.city, address.state
from Person
left join Address
on person.personId = address.personId;