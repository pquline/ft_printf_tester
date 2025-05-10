# 🚀 ft\_printf\_tester 🚀

This is a simple tester for the 42 [`ft_printf`](https://github.com/pquline/ft_printf) project. It’s designed to **compare** the return values of `printf` and `ft_printf`.
Keep in mind that this tester only checks **the return values** — so you’ll need to manually inspect the outputs.

---

## 🔥 Quick Start

### 🌲 Project Structure

Here’s a quick overview of what your project should look like when using the tester:

```text
ft_printf/
├── Makefile
├── includes/*.h
├── *
└── ft_printf_tester/
```

### 🛠️ Installation

1. **Clone the repository** into your `ft_printf` project directory:

   ```bash
   git clone https://github.com/pquline/ft_printf_tester.git
   cd ft_printf_tester/
   ```

2. Once you’re in the `ft_printf_tester/` directory, make sure you have your `ft_printf` project set up and ready to go.

---

## 🚀 How to Use It

### 🏃‍♂️ Running the Tester

You can run the tester by using the following command:

```bash
./tester [b]
```

* **Optional `b` flag**: If you want to test your **bonus** features, just add the `b` flag like so: `./tester b`. Otherwise, the tester will run in normal mode!

### ⚙️ Customizing Your Include Path

If your header files aren’t in the default `includes/` directory, just edit the `INCLUDES` variable in the `run.sh` script to point to the right place:

```bash
INCLUDES=/path/to/your/includes
```

---

## 💡 Example

![screenshot](https://github.com/user-attachments/assets/62b54d36-19d3-406a-978f-f0c383b3dee7)
