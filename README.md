# redteam

**Ageis CyberWorks Red Team Tool**

A simple port scanning utility demonstrating red team cybersecurity capabilities.

---

## Table of Contents

1. [About](#about)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Compiling from Source](#compiling-from-source)
6. [License](#license)
7. [Contact](#contact)

---

## About

The `redteam` tool is a utility developed by **Ageis CyberWorks Red Team** for educational and authorized security testing purposes. This tool provides basic port scanning functionality that can be used to identify open ports on a target host, which is a fundamental technique in both penetration testing and network security assessment.

**Made by:** Ageis CyberWorks Red Team  
**Repository:** https://github.com/ageis-cyberworks/redteam  
**Version:** 1.0.0

---

## Features

- Scan specified port ranges on target hosts
- Display scan progress and results
- Configurable start and end port numbers
- Simple command-line interface
- lightweight and fast implementation

**Disclaimer:** This tool is intended for authorized security testing only. Use only on systems you own or have explicit permission to test.

---

## Installation

### Pre-compiled Binary

1. Download the pre-compiled binary from the [Releases](https://github.com/ageis-cyberworks/redteam/releases) page
2. Make it executable: `chmod +x redteam`
3. Move to your PATH: `sudo mv redteam /usr/local/bin/`

### From Source

See [Compiling from Source](#compiling-from-source) section.

---

## Usage

```bash
# Basic usage - scan target on default ports 1-1024
./redteam example.com

# Scan specified port range
./redteam example.com 1 100

# Scan with just start port
./redteam example.com 80

# Common port ranges
./redteam example.com 20 25     # FTP range
./redteam example.com 80 443    # HTTP/HTTPS
./redteam example.com 22        # SSH only
```

### Arguments

| Argument | Description | Default |
|----------|-------------|---------|
| `target_host` | IP address or hostname to scan | Required |
| `start_port` | Starting port number for scan | 1 |
| `end_port` | Ending port number for scan | 1024 |

### Examples

```bash
# Scan common ports (1-1024)
./redteam 192.168.1.1

# Scan top 100 ports
./redteam 192.168.1.1 1 100

# Scan SSH port only
./redteam 192.168.1.1 22 22
```

---

## Compiling from Source

### Prerequisites

- GCC or compatible C compiler
- Standard C library

### Build Instructions

```bash
# Clone the repository
git clone https://github.com/ageis-cyberworks/redteam.git

# Navigate to the project directory
cd redteam

# Compile the source code
gcc -o redteam redteam.c

# Make the binary executable
chmod +x redteam

# (Optional) Move to your PATH
sudo mv redteam /usr/local/bin/
```

### Verify Installation

```bash
redteam --help
# Should display usage information
```

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

**Copyright (c) 2024 Ageis CyberWorks Red Team**

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

---

## Contact

- **Organization:** Ageis CyberWorks Red Team
- **GitHub:** https://github.com/ageis-cyberworks
- **Repository:** https://github.com/ageis-cyberworks/redteam

---

## Acknowledgments

- Inspired by classic network security tools
- Developed with educational purposes in mind
- Part of the Ageis CyberWorks open-source initiative