
drop procedure if exists addUser;
delimiter $
create procedure addUser(name varchar(1000), password varchar(1000), emailid varchar(1000))
BEGIN
	create table login(name varchar(1000), password varchar(1000), emailid varchar(1000));
	insert into login VALUES(name,password, emailid);
end $
delimiter ;


