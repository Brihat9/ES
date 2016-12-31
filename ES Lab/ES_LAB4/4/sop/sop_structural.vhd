LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY sop IS PORT (
	X1, X2, X3, X4: IN STD_LOGIC;
	Y: OUT STD_LOGIC
);
END sop;

ARCHITECTURE structural OF sop IS
	SIGNAL NX1, NX2, NX3, I1, I2, I3, I4, F: STD_LOGIC;

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
		N3: not1 PORT MAP (a => X3, o => NX3);
		
		A1: and1 PORT MAP (a => NX1, b => NX3, o => I1);
		A2: and1 PORT MAP (a => NX2, b => NX3, o => I2);
		A3: and1 PORT MAP (a => X1, b => X2, o => I3);
		A4: and1 PORT MAP (a => I3, b => X3, o => I4);
		
		O1: or1 PORT MAP (a => I1, b => I2, o => F);
		O2: or1 PORT MAP (a => F, b => I4, o => Y);

END structural;
