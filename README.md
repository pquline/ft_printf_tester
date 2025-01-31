# FT_PRINTF_TESTER

## Summary

A basic tester for 42 [```ft_printf```](https://github.com/pquline/ft_printf) project.</br>
It **only checks for differences between the return values** of ```printf``` and ```ft_printf```, so the outputs are to be manually checked

## Usage

### Tree structure

```text
ft_printf/
├─Makefile
├─includes/*.h
├─*
└─ft_printf_tester/
```

### Installation

- Clone the repository at the root of ```ft_printf``` project and change the working directory:

```bash
git clone https://github.com/pquline/ft_printf_tester.git
cd ft_printf_tester/
```

### Run tester

- `b`: run the tester in `bonus` mode

```bash
./tester [b]
```

**Note: If your header files are not located in the `ìncludes/` directory, edit the `INCLUDES` value according to their current location in [run.sh](./run.sh).**

## Example

![screenshot](https://github.com/user-attachments/assets/62b54d36-19d3-406a-978f-f0c383b3dee7)
