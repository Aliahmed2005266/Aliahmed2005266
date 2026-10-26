/*
 * Ageis CyberWorks Red Team Tool
 * A simple utility for demonstrating red team capabilities.
 * 
 * Made by Ageis CyberWorks Red Team
 * https://github.com/ageis-cyberworks
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Simple port scanner utility */
void scan_port(const char *host, int port) {
    printf("Scanning port %d on %s...\n", port, host);
    /* In a real implementation, this would attempt connections */
}

/* Display usage information */
void usage(const char *program_name) {
    printf("Usage: %s <target_host> [start_port] [end_port]\n", program_name);
    printf("  target_host: IP address or hostname to scan\n");
    printf("  start_port: starting port number (default: 1)\n");
    printf("  end_port: ending port number (default: 1024)\n");
}

int main(int argc, char *argv[]) {
    const char *host;
    int start_port = 1;
    int end_port = 1024;

    if (argc < 2) {
        usage(argv[0]);
        return 1;
    }

    host = argv[1];

    if (argc >= 3) {
        start_port = atoi(argv[2]);
    }

    if (argc >= 4) {
        end_port = atoi(argv[3]);
    }

    if (start_port < 1 || end_port > 65535 || start_port > end_port) {
        fprintf(stderr, "Error: Invalid port range. Ports must be 1-65535.\n");
        return 1;
    }

    if (end_port > 65535) {
        end_port = 65535;
    }

    printf("Ageis CyberWorks Red Team Tool\n");
    printf("Target: %s\n", host);
    printf("Port range: %d - %d\n\n", start_port, end_port);

    for (int port = start_port; port <= end_port; port++) {
        scan_port(host, port);
    }

    printf("Scan complete.\n");
    return 0;
}