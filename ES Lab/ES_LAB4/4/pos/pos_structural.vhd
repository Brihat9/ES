LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY pos IS PORT (
	X1, X2, X3, X4: IN STD_LOGIC;
	Y: OUT STD_LOGIC
);
END pos;

ARCHITECTURE structural OF pos IS
	SIGNAL NX1, NX2, NX4, I1, I2, I3, I4, F: STD_LOGIC;

	COMPONENT not1 IS PORT (
		a: IN STD_LOGIC;
		o: OUT STD_LOGIC
	);
	END COMPONENT;
	
	COMPONENT and1 IS PORT (
		a,b: IN STD_LOGIC;
		o: OUT STD_LOGIC
	);
	END COMPONENT;

	COMPONENT or1 IS PORT (
		a,b: IN STD_LOGIC;
		o: OUT STD_LOGIC
	);
	END COMPONENT;

	BEGIN
		N1: not1 PORT MAP (a => X1, o => NX1);
		N2: not1 PORT MAP (a => X2, o => NX2);
		N3: not1 PORT MAP (a => X4, o => NX4);
		
		O1: or1 PORT MAP (a => X3, b => NX4, o => I1);
		O2: or1 PORT MAP (a => X2, b => X3, o => I2);
		O3: or1 PORT MAP (a => NX1, b => NX2, o => I3);
		O4: or1 PORT MAP (a => I3, b => NX4, o => I4);
		
		A1: and1 PORT MAP (a => I1, b => I2, o => F);
		A2: and1 PORT MAP (a => F, b => I4, o => Y);

END structural;
