LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;

ENTITY small_ckt_tb IS
END small_ckt_tb;

ARCHITECTURE behavioral OF small_ckt_tb IS
	-- component declaaration for the Unit Under Test (UUT)
	COMPONENT small_ckt
	PORT(
		A: IN STD_LOGIC;
		B: IN STD_LOGIC;
		C: IN STD_LOGIC;
		D: IN STD_LOGIC;
		F: OUT STD_LOGIC
		);
	END COMPONENT;
	
	SIGNAL input_vector: STD_LOGIC_VECTOR( 3 DOWNTO 0) := "0000";
	SIGNAL output : STD_LOGIC;
	
BEGIN
	--INSTANTIATE the unit under test
	uut: small_ckt PORT MAP(
		A => input_vector(3),
		B => input_vector(2),
		C => input_vector(1),
		D => input_vector(0),
		F => output
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
		