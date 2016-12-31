LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY small_ckt IS PORT (
	A, B, C, D: IN STD_LOGIC;
	F:OUT STD_LOGIC
);
END small_ckt;

ARCHITECTURE structural OF small_ckt IS
	SIGNAL F1, F2, F3, F4: STD_LOGIC;
COMPONENT and1 IS PORT (
	i1,i2: IN STD_LOGIC;
	o1: OUT STD_LOGIC
);
END COMPONENT;

COMPONENT andnot IS PORT (
	i1,i2: IN STD_LOGIC;
	o1: OUT STD_LOGIC
);
END COMPONENT;

COMPONENT or1 IS PORT (
	i1,i2: IN STD_LOGIC;
	o1: OUT STD_LOGIC
);
END COMPONENT;

BEGIN
	C1: and1 PORT MAP (i1 => A, i2 => B, o1 => F1);
	C2: andnot PORT MAP (i1 => B, i2 => C, o1 => F2);
	C3: or1 PORT MAP (i1 => F1, i2 => F2, o1 => F3);
	C4: and1 PORT MAP (i1 => F2, i2 => D, o1 => F4);
	C5: or1 PORT MAP (i1 => F3, i2 => F4, o1 => F);
END structural;