LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY func IS PORT (
	X3, X2, X1: IN STD_LOGIC;
	F: OUT STD_LOGIC
);
END func;

ARCHITECTURE structural OF func IS
	SIGNAL A1, A2, A3: STD_LOGIC;

	COMPONENT and1 IS PORT (
		a,b,c: IN STD_LOGIC;
		o: OUT STD_LOGIC
	);
	END COMPONENT;

	COMPONENT or1 IS PORT (
		a,b,c: IN STD_LOGIC;
		o: OUT STD_LOGIC
	);
	END COMPONENT;

	BEGIN
		N1: and1 PORT MAP (a => X1, b => X2, c => X3, o => A1);
		N2: and1 PORT MAP (a => X2, b => X3, c => X1, o => A2);
		N3: and1 PORT MAP (a => X3, b => X1, c => X2, o => A3);
		N4: or1 PORT MAP (a => A1, b => A2, c => A3, o => F);

END structural;
