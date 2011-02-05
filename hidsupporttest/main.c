#include <stdio.h>
#include <math.h>
#include <unistd.h>

#include <hid-support.h>

void hid_inject_mouse_rel_move_test(int buttons, float dx, float dy){
	printf("Button %u, dx = %f, dy = %f\n", buttons, dx, dy);
}

int main(int argc, char **argv, char **envp) {
	
#if 0
	printf("Simulating left & right swipes until CTRL-C\n");
	
	float last_x = 0;
	
	hid_inject_mouse_rel_move(0, 160, 240);
	hid_inject_mouse_rel_move(1, 0, 0);
	float angle = 0;
	while (1){
		sleep(1);
		angle += 30;
		float new_x = sin( angle / 180.0 * 3.14159);
		hid_inject_mouse_rel_move(1, (new_x-last_x) * 100, 0);
		last_x = new_x;
	}
#endif
	
#if 0
	if (argc > 1) {
		hid_inject_text(argv[1]);
	}
#endif
	
	printf("hidsupport test query screen dimension\n");
	int width, height;
	int result = hid_get_screen_dimension(&width, &height);
	printf("Screen dimension: %u width, %u height (res=%d)\n", width, height, result);
	
	return 0;
}

// vim:ft=objc
