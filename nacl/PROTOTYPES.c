extern int crypto_verify(const unsigned char *,const unsigned char *);
extern int crypto_core(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_hashblocks(unsigned char *,const unsigned char *,unsigned long long);
extern int crypto_hash(unsigned char *,const unsigned char *,unsigned long long);
extern int crypto_stream(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_stream_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_stream_beforenm(unsigned char *,const unsigned char *);
extern int crypto_stream_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_stream_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_onetimeauth(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *);
extern int crypto_onetimeauth_verify(const unsigned char *,const unsigned char *,unsigned long long,const unsigned char *);
extern int crypto_auth(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *);
extern int crypto_auth_verify(const unsigned char *,const unsigned char *,unsigned long long,const unsigned char *);
extern int crypto_secretbox(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_secretbox_open(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_scalarmult(unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_scalarmult_base(unsigned char *,const unsigned char *);
extern int crypto_box(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_box_open(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_box_keypair(unsigned char *,unsigned char *);
extern int crypto_box_beforenm(unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_box_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_box_open_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
