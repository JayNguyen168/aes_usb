#ifndef AES_DEMO_H
#define AES_DEMO_H

#include <stdint.h>

#define AES_BLOCK_SIZE 16
#define AES_KEY_SIZE   16
#define AES_ROUNDS     10
#define MAX_USERNAME_LEN 32

// ================= USER AUTH STRUCT =================
typedef struct {
    char username[MAX_USERNAME_LEN];
    uint8_t public_key[32];     // Placeholder cho Ed25519 sau này
    uint8_t signature[64];      // Placeholder cho chữ ký
    uint8_t authenticated;      // 0 = no, 1 = yes
} UserAuthContext;

// ================= AES CONTEXT =================
typedef struct {
    uint8_t round_key[176];     // 11 * 16 = 176 bytes
} AES_ctx;

// ================= TOKEN CONTEXT (gộp 2 struct) =================
typedef struct {
    UserAuthContext user;
    AES_ctx aes;
} TokenContext;

// ================= API =================
void AES_init_ctx(AES_ctx *ctx, const uint8_t *key);
void AES_encrypt(AES_ctx *ctx, uint8_t *buf);

void token_init(TokenContext *token, const char *username, const uint8_t *key);
void token_encrypt_and_log(TokenContext *token, uint8_t *plaintext);

#endif
