LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY add_sub IS PORT (
	X3, X2, X1, X0, Y3, Y2, Y1, Y0, A_S: IN STD_LOGIC;
	S4, S3, S2, S1, S0: OUT STD_LOGIC
);
END add_sub;

ARCHITECTURE structural OF add_sub IS
	SIGNAL F0, F1, F2, F3, C1, C2, C3 : STD_LOGIC;

COMPONENT xor1 IS PORT (
	i1,i2: IN STD_LOGIC;
	o1: OUT STD_LOGIC
);
END COMPONENT;

COMPONENT full_adder IS PORT (
	i1,i2,cin: IN STD_LOGIC;
	sum,cout: OUT STD_LOGIC
);
END COMPONENT;

BEGIN
	A0: xor1 PORT MAP (i1 => A_S, i2 => Y0, o1 => F0);
	A1: full_adder PORT MAP (i1 => X0, i2 => F0, cin => A_S, sum => S0, cout => C1);
	
	A2: xor1 PORT MAP (i1 => A_S, i2 => Y1, o1 => F1);
	A3: full_adder PORT MAP (i1 => X1, i2 => F1, cin => C1, sum => S1, cout => C2);
	
	A4: xor1 PORT MAP (i1 => A_S, i2 => Y2, o1 => F2);
	A5: full_adder PORT MAP (i1 => X2, i2 => F2, cin => C2, sum => S2, cout => C3);
	
	A6: xor1 PORT MAP (i1 => A_S, i2 => Y3, o1 => F3);
	A7: full_adder PORT MAP (i1 => X3, i2 => F3, cin => C3, sum => S3, cout => S4);
END structural;