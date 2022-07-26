#ifdef ENABLE_RGB_MATRIX_CYCLE_BAND_SPIRAL_SAT
RGB_MATRIX_EFFECT(CYCLE_BAND_SPIRAL_SAT)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV CYCLE_BAND_SPIRAL_SAT_math(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint8_t time) {
    hsv.s = scale8(hsv.s + dist - time - atan2_8(dy, dx), hsv.s);
	hsv.h = time;
    return hsv;
}

bool CYCLE_BAND_SPIRAL_SAT(effect_params_t* params) { return effect_runner_dx_dy_dist(params, &CYCLE_BAND_SPIRAL_SAT_math); }

#    endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif
