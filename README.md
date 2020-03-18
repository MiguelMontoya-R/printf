# _printf

This is our own version of the well know Printf function.

## Getting Started

Clone this repository to get all the files you need to run this basic version of printf on your machine. Each part needed to make _printf works is in a single file, so you can connect and trace all the steps of the function and you can make your own changes and upgrades.

### Prerequisites

This function was made and tested using Ubuntu 14.04.3 LTS and compiled with gcc 4.8.4. We recommend you to test this _printf with under this conditions.

# Format Specifiers

Format is a character string. The format string is composed of zero or more directives.
The format specifier follow this basic prototype: `%type`
List of supported specifiers:

| Type   | Output |
|--------|--------|
| d or i | Signed decimal integer |
| c      | Single character |
| s      | String of characters |
| %      | A % followed by another % character will write a single % |

## Return Value

Returns: the number of characters printed (excluding the null byte used to end output to strings)

## Built With

* Ubuntu 14.04.3 LTS
* gcc 4.8.4
* GNU Emacs 24.3.1

## Authors

* **Luis Miguel Vargas** - *Initial work* - [GitHub](https://github.com/luismvargasg)
* **Miguel Montoya Ramirez** - *Initial work* - [GitHub](https://github.com/MiguelMontoya-R)

## License

Opensource project.

## Acknowledgments

* Project made at Holberton School - Colombia.
