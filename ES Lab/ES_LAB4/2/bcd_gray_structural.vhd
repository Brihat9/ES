LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY bcd_gray IS PORT (
	X3, X2, X1, X0: IN STD_LOGIC;
	Y3, Y2, Y1, Y0: OUT STD_LOGIC
);
END bcd_gray;

ARCHITECTURE structural OF bcd_gray IS

COMPONENT xor_nor IS PORT (
	a,b: IN STD_LOGIC;
	o: OUT STD_LOGIC
);
END COMPONENT;

BEGIN
	C0: xor_nor PORT MAP (a => X3, b => '0', o => Y3);
	C1: xor_nor PORT MAP (a => X3, b => X2, o => Y2);
	C2: xor_nor PORT MAP (a => X2, b => X1, o => Y1);
	C3: xor_nor PORT MAP (a => X1, b => X0, o => Y0);

END structural;
