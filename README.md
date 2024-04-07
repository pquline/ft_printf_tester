# FT_PRINTF_TESTER

## Summary

My tester for 42 [```ft_printf```](https://github.com/pquline/ft_printf) project.</br>
- It **only works with the mandatory part** of the project
- It **only checks for differences between the return values** of ```printf``` and ```ft_printf``` (the outputs are to be manually checked)

## Usage

### Tree structure

```bash
$> ls -l ft_printf
```
```text
-rw-r--r--	1	XX	XX	XX Jan  1 00:00	Makefile
-rw-r--r--	1	XX	XX	XX Jan  1 00:00	*.h, */*.h
-rw-r--r--	1	XX	XX	XX Jan  1 00:00	*.c, */*.c
drwxr-xr-x	1	XX	XX	XX Jan  1 00:00	ft_printf_tester
```
### Installation
- Clone the repository at the root of ```ft_printf```'s project :
```bash
git clone https://github.com/pquline/ft_printf_tester.git
```
- Change the working directory :
```bash
cd ft_printf_tester/
```
- Run the script :
```bash
./run.sh
```
*Note: If the .h files are not located in the ```ìncludes/``` folder, change the ```$INCLUDES``` value according to their location.*

## Example

![ft_printf_tester](https://github.com/pquline/ft_printf_tester/assets/13948473/96e09a43-d1a9-4808-b712-e179fb1ed9c7)
