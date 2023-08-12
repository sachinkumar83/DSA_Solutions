/* Write your T-SQL query statement below */
Select firstName,lastName,city,state from    Person Left join  Address
on Person.personId=Address.personId