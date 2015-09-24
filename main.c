#include <stdint.h>
#include <stdbool.h>
#include "bl_config.h"

extern void CallApplication(void);

void HandleUpdate() {
	ConfigureDevice();
	Updater();
}

void main(void) {
	if(CheckForceUpdate()) {
		HandleUpdate();
	} else {
		CallApplication();
	}
}

