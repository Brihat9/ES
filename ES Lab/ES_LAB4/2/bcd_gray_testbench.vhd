LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;

ENTITY bcd_gray_tb IS
END bcd_gray_tb;

ARCHITECTURE behavioral OF bcd_gray_tb IS
	-- component declaaration for the Unit Under Test (UUT)
	COMPONENT bcd_gray
	PORT(
		X3: IN STD_LOGIC;
		X2: IN STD_LOGIC;
		X1: IN STD_LOGIC;
		X0: IN STD_LOGIC;
		Y3: OUT STD_LOGIC;
		Y2: OUT STD_LOGIC;
		Y1: OUT STD_LOGIC;
		Y0: OUT STD_LOGIC
	);
	END COMPONENT;
	
	SIGNAL input_vector: STD_LOGIC_VECTOR( 3 DOWNTO 0) := "0000";
	SIGNAL output_vector: STD_LOGIC_VECTOR( 3 DOWNTO 0) := "0000";
		
BEGIN
	--INSTANTIATE the unit under test
	uut: bcd_gray PORT MAP(
		X3 => input_vector(3),
		X2 => input_vector(2),
		X1 => input_vector(1),
		X0 => input_vector(0),
		
		Y3 => output_vector(3),
		Y2 => output_vector(2),
		Y1 => output_vector(1),
		Y0 => output_vector(0)
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
		