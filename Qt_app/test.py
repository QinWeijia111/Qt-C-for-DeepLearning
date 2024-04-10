import sys
import time

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python program.py <csv_file>")
        sys.exit(1)
    time.sleep(5)
    csv_file_path = sys.argv[1]
    print("Received file path from Qt program:", csv_file_path)
