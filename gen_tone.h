/*
 * gen_tone.h
 */


int gen_tone_init (struct audio_s *pp, int amp);


//int gen_tone_open (int nchan, int sample_rate, int bit_rate, int f1, int f2, int amp, char *fname);

//int gen_tone_open_fd (int nchan, int sample_rate, int bit_rate, int f1, int f2, int amp, int fd)  ;

//int gen_tone_close (void);

void tone_gen_put_bit (int chan, int dat);

