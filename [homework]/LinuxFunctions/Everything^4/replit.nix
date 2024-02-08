{ pkgs }: {
	deps = [
   pkgs.gcc -o main.c main
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}