LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;

ENTITY sop_tb IS
END sop_tb;

ARCHITECTURE behavioral OF sop_tb IS
	-- component declaaration for the Unit Under Test (UUT)
	COMPONENT sop
	PORT(
		X1: IN STD_LOGIC;
		X2: IN STD_LOGIC;
		X3: IN STD_LOGIC;
		X4: IN STD_LOGIC;
		Y: OUT STD_LOGIC
	);
	END COMPONENT;
	
	SIGNAL input_vector: STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
	SIGNAL output: STD_LOGIC:= '0';
		
BEGIN
	--INSTANTIATE the unit under test
	uut: sop PORT MAP(
		X1 => input_vector(3),
		X2 => input_vector(2),
		X3 => input_vector(1),
		X4 => input_vector(0),
		Y => output
	);
	
	--stimulus process
	stim_proc: PROCESS
	
	BEGIN
		FOR index IN 0 TO 15 LOOP
			input_vector <= std_logic_vector(to_unsigned(index,4));
			WAIT FOR 50 ns;
		END LOOP;
	END PROCESS;
END behavioral;
		