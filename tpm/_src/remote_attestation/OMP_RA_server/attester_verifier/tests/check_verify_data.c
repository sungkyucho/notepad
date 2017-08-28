#include <stdlib.h>
#include <check.h>
#include <string.h>
#include <unistd.h>

#include "ra_com.h"
#include "verify_data.h"


START_TEST(test_verify_pcr_nonce)
{
    int r;

	unsigned char *pcrComposite="\x00\x36\x51\x55\x54\x32\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F\x10\x11\x12\x00\x00\x03\x06\x00\x00\x01\x27\xE0\x07\x6B\xAC\x89\x0C\x09\x60\x7E\x8C\x93\x87\xD5\x00\x25\x1A\x22\x08\xF5";
	BYTE *nonce= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F\x10\x11\x12\x00";
	BYTE *nonce1="\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F\x10\x11\x12\x01";

    r = verify_pcr_nonce(pcrComposite, nonce);
    ck_assert_int_eq(r, SUCCESS);

    r = verify_pcr_nonce(pcrComposite, nonce1);
    ck_assert_int_eq(r, FAILED);
}
END_TEST

START_TEST(test_verify_pcr_digest)
{
    int r;

	unsigned char *pcrComposite="\x00\x36\x51\x55\x54\x32\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F\x10\x11\x12\x00\x00\x03\x06\x00\x00\x01\x27\xE0\x07\x6B\xAC\x89\x0C\x09\x60\x7E\x8C\x93\x87\xD5\x00\x25\x1A\x22\x08\xF5";
	unsigned char *pcr_answer= "\x27\xE0\x07\x6B\xAC\x89\x0C\x09\x60\x7E\x8C\x93\x87\xD5\x00\x25\x1A\x22\x08\xF5";
	unsigned char *pcr_answer1= "\x27\xE0\x07\x6B\xAC\x89\x0C\x09\x60\x7E\x8C\x93\x87\xD5\x00\x25\x1A\x22\x08\xF4";

    r = verify_pcr_digest(pcrComposite, pcr_answer);
    ck_assert_int_eq(r, SUCCESS);

    r = verify_pcr_digest(pcrComposite, pcr_answer1);
    ck_assert_int_eq(r, FAILED);
}
END_TEST

START_TEST(test_verify_pcr_composite)
{
    int r;
	unsigned char *pcrComposite="\x00\x36\x51\x55\x54\x32\xbd\x1c\x55\xc1\xbd\xc8\x58\x54\x5d\xc4\x3a\xfc\x57\xee\xac\x07\x2e\xfa\x04\x28\x00\x03\x20\x00\x01\x01\x87\x0b\x0d\x7b\x8a\x5b\x0e\x52\x71\x4d\xdd\x5e\x8c\x9a\x50\xff\xf0\xb5\x33\x07";

	unsigned char *keyPub = "\x96\x21\x05\x43\xcf\xb1\xfd\x2c\xde\x44\xb4\xcd\xbc\xdf\x2d\x9e\x7b\xc0\x6b\x73\x5f\xc3\x3c\x66\x82\xa5\x4a\x18\xcf\xc3\x6a\xc1\xf4\xda\x13\x62\x8f\x97\xe4\xd4\xee\x1c\xd5\x1b\x29\x78\x79\x88\xd2\x39\x19\x0e\xa7\x49\x8b\xcd\xa4\x60\x43\x0b\x8d\xe6\xf4\xec\x30\x9e\xf7\x51\xe8\xea\xfe\x32\x5a\x8f\xb1\x38\x15\x00\x4e\x94\xa3\xbc\x2b\x7b\x31\x69\xa6\x7c\xb3\x2b\x14\x16\x40\xc5\xba\x36\x8b\x57\x74\x57\xb3\x87\x67\x02\x15\xab\x9e\x78\xbd\xf4\x05\xc9\x0b\xff\x90\x40\xe9\x13\x45\x01\x82\x55\x69\x3f\xc6\x3f\x82\x25\xed\x66\x4a\x57\xc4\x4f\xe0\x9a\x75\xbb\x0b\x3a\x62\xbf\x2c\x43\x11\x2b\xa7\xdf\xb9\x08\xd8\x7b\x16\x34\x7f\x1e\xfd\x52\xfc\x16\x1e\xeb\xbd\x60\xe1\x73\x4b\x89\x92\x4b\xcf\xee\x28\xc2\x62\x4a\xc7\x8d\xdb\x61\xe9\x35\x11\x2a\x13\xa0\xe5\xe5\xbf\x33\xae\x16\x1d\x29\x7e\xc9\xdb\xe8\x3b\x40\x59\x1c\xfa\x5d\x0b\x54\x34\x7a\x2d\x66\xa4\x99\x26\x62\x92\xe4\xd7\xdf\x47\xde\xca\x0e\x2b\x49\xb2\x99\xab\x3c\xb9\x2c\x45\x10\xb3\xa8\x8f\x6f\x21\x23\x33\x68\x6d\xfd\xab\xcb\xdd\xa8\x68\x6b\x3f\xce\x38\x3a\x8e\x92\xea\x4d";
	unsigned char *keyPub1 = "\x96\x21\x05\x43\xcf\xb1\xfd\x2c\xde\x44\xb4\xcd\xbc\xdf\x2d\x9e\x7b\xc0\x6b\x73\x5f\xc3\x3c\x66\x82\xa5\x4a\x18\xcf\xc3\x6a\xc1\xf4\xda\x13\x62\x8f\x97\xe4\xd4\xee\x1c\xd5\x1b\x29\x78\x79\x88\xd2\x39\x19\x0e\xa7\x49\x8b\xcd\xa4\x60\x43\x0b\x8d\xe6\xf4\xec\x30\x9e\xf7\x51\xe8\xea\xfe\x32\x5a\x8f\xb1\x38\x15\x00\x4e\x94\xa3\xbc\x2b\x7b\x31\x69\xa6\x7c\xb3\x2b\x14\x16\x40\xc5\xba\x36\x8b\x57\x74\x57\xb3\x87\x67\x02\x15\xab\x9e\x78\xbd\xf4\x05\xc9\x0b\xff\x90\x40\xe9\x13\x45\x01\x82\x55\x69\x3f\xc6\x3f\x82\x25\xed\x66\x4a\x57\xc4\x4f\xe0\x9a\x75\xbb\x0b\x3a\x62\xbf\x2c\x43\x11\x2b\xa7\xdf\xb9\x08\xd8\x7b\x16\x34\x7f\x1e\xfd\x52\xfc\x16\x1e\xeb\xbd\x60\xe1\x73\x4b\x89\x92\x4b\xcf\xee\x28\xc2\x62\x4a\xc7\x8d\xdb\x61\xe9\x35\x11\x2a\x13\xa0\xe5\xe5\xbf\x33\xae\x16\x1d\x29\x7e\xc9\xdb\xe8\x3b\x40\x59\x1c\xfa\x5d\x0b\x54\x34\x7a\x2d\x66\xa4\x99\x26\x62\x92\xe4\xd7\xdf\x47\xde\xca\x0e\x2b\x49\xb2\x99\xab\x3c\xb9\x2c\x45\x10\xb3\xa8\x8f\x6f\x21\x23\x33\x68\x6d\xfd\xab\xcb\xdd\xa8\x68\x6b\x3f\xce\x38\x3a\x8e\x92\xea\x4c";

	unsigned char *signedPCR = "\x90\xfc\x9b\x35\xcf\xf5\xc1\x7f\x6a\x9c\xd8\x15\xf0\xdd\x63\x4f\xb2\x09\x5d\x9a\x07\x02\xd6\x93\x52\x8d\xd0\xac\xad\x62\x6e\x5e\xb1\x75\x3d\xf0\xd7\xcc\x94\x1c\x08\xae\xfd\x17\x01\x5a\x74\xc8\xe5\x39\xcc\x59\x5d\x02\xb3\xd9\x80\x74\x0b\x3c\x9b\x10\x71\xcb\x5d\xf5\x04\xf0\x9b\xef\xb1\x24\xe0\xf8\x68\x65\x24\x7f\x96\x06\x5c\xad\xc0\x7c\x80\xe4\x36\x69\xbb\xa5\xc7\xa8\x58\x48\x96\x43\xad\xa6\x49\x12\xbc\x89\xd7\x6a\xfe\x85\x28\x81\x7f\xd2\x0e\x8d\x86\x69\x6e\x73\xcc\x13\x67\x2d\x79\x61\x21\xf3\x3d\x17\xd7\x00\x51\xdd\xbf\x7b\x74\x60\x06\x29\x6e\x3e\x7e\x74\xf0\x38\xc6\x68\xf5\xd8\x7d\x1a\x23\x21\x7c\xb3\x9b\x55\x23\x34\x60\x92\xad\x19\x49\x54\xf6\x76\xb3\x5d\xab\x2d\xe2\xbf\xa3\xf0\x29\xbc\xe8\xfa\x2e\xe2\x8a\x31\x8d\x2b\x46\xce\x74\xe4\x2d\xb3\xe2\x53\x86\x49\xfd\xa6\x65\x53\x22\xa6\x69\x43\xe8\x13\xd4\x29\x37\x93\xb2\xd5\x0c\x43\xbd\xc9\x7d\xa0\x8f\x32\x4d\x5e\xbc\x3e\x12\xd1\x02\xd2\x5b\x91\xce\x49\xe6\xc1\x1b\x94\x4e\xbf\xae\x1f\xeb\x12\xed\x13\x19\x30\xe3\xd0\x3e\x1a\xe1\x3b\xdd\x9a\x82\x4f\xf3\xd2\x1e\x18";
	unsigned char *signedPCR1 = "\x90\xfc\x9b\x35\xcf\xf5\xc1\x7f\x6a\x9c\xd8\x15\xf0\xdd\x63\x4f\xb2\x09\x5d\x9a\x07\x02\xd6\x93\x52\x8d\xd0\xac\xad\x62\x6e\x5e\xb1\x75\x3d\xf0\xd7\xcc\x94\x1c\x08\xae\xfd\x17\x01\x5a\x74\xc8\xe5\x39\xcc\x59\x5d\x02\xb3\xd9\x80\x74\x0b\x3c\x9b\x10\x71\xcb\x5d\xf5\x04\xf0\x9b\xef\xb1\x24\xe0\xf8\x68\x65\x24\x7f\x96\x06\x5c\xad\xc0\x7c\x80\xe4\x36\x69\xbb\xa5\xc7\xa8\x58\x48\x96\x43\xad\xa6\x49\x12\xbc\x89\xd7\x6a\xfe\x85\x28\x81\x7f\xd2\x0e\x8d\x86\x69\x6e\x73\xcc\x13\x67\x2d\x79\x61\x21\xf3\x3d\x17\xd7\x00\x51\xdd\xbf\x7b\x74\x60\x06\x29\x6e\x3e\x7e\x74\xf0\x38\xc6\x68\xf5\xd8\x7d\x1a\x23\x21\x7c\xb3\x9b\x55\x23\x34\x60\x92\xad\x19\x49\x54\xf6\x76\xb3\x5d\xab\x2d\xe2\xbf\xa3\xf0\x29\xbc\xe8\xfa\x2e\xe2\x8a\x31\x8d\x2b\x46\xce\x74\xe4\x2d\xb3\xe2\x53\x86\x49\xfd\xa6\x65\x53\x22\xa6\x69\x43\xe8\x13\xd4\x29\x37\x93\xb2\xd5\x0c\x43\xbd\xc9\x7d\xa0\x8f\x32\x4d\x5e\xbc\x3e\x12\xd1\x02\xd2\x5b\x91\xce\x49\xe6\xc1\x1b\x94\x4e\xbf\xae\x1f\xeb\x12\xed\x13\x19\x30\xe3\xd0\x3e\x1a\xe1\x3b\xdd\x9a\x82\x4f\xf3\xd2\x1e\x19";

    r=verify_pcr_composite(pcrComposite, 52, keyPub, 256, signedPCR, 256);
    ck_assert_int_eq(r, SUCCESS);
	
    r=verify_pcr_composite(pcrComposite, 52, keyPub1, 256, signedPCR, 256);
    ck_assert_int_eq(r, FAILED);

    r=verify_pcr_composite(pcrComposite, 52, keyPub, 256, signedPCR1, 256);
    ck_assert_int_eq(r, FAILED);
}
END_TEST


Suite * setting_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Setting");

    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_verify_pcr_composite);
    tcase_add_test(tc_core, test_verify_pcr_nonce);
    tcase_add_test(tc_core, test_verify_pcr_digest);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = setting_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed ==0) ? EXIT_SUCCESS: EXIT_FAILURE;
}
/* vi: set ai sw=4 ts=8 sts=4: */