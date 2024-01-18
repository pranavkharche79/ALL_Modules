drop procedure if exist go2()
delimiter #

create procedure go2(in x int,in y int)
BEGIN
    /*DECLARE x int;*/
    set x:=0;
	kkk:LOOP
	    set x=x+2
		if x>10 then
		leave kkk
		end if;
		select x*y;
	end loop GGG;

END#
delimiter;