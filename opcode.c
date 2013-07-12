#include <stdio.h>
#include <stdlib.h>
#include "frame_stack.h"
#include "structs.h"
#include "jvm.h"

extern frame_stack_t *jvm_stack;

extern pc_t jvm_pc;


/**
 * Empilha uma referÍncia nula na pilha de operandos
 *
 */
void aconst_null(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = REFERENCE;
    operand->val.reference_val.tag = NULL_REFERENCE;
    operand->val.reference_val.val.val_null = NULL;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor int -1 na pilha de operandos
 *
 */
void iconst_m1(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = -1;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor int 0 na pilha de operandos
 *
 */
void iconst_0(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = 0;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor int 1 na pilha de operandos
 *
 */
void iconst_1(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = 1;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor int 2 na pilha de operandos
 *
 */
void iconst_2(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = 2;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor int 3 na pilha de operandos
 *
 */
void iconst_3(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = 3;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor int 4 na pilha de operandos
 *
 */
void iconst_4(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = 4;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor int 5 na pilha de operandos
 *
 */
void iconst_5(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = 5;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor long 0 na pilha de operandos
 *
 */
void lconst_0(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = LONG;
    operand->val.primitive_val.val.val64 = 0;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor long 1 na pilha de operandos
 *
 */
void lconst_1(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = LONG;
    operand->val.primitive_val.val.val64 = 1;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}


/**
 * Empilha o valor float 0 na pilha de operandos
 *
 */
void fconst_0(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = FLOAT;
    operand->val.primitive_val.val.val_float = 0;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor float 1 na pilha de operandos
 *
 */
void fconst_1(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = FLOAT;
    operand->val.primitive_val.val.val_float = 1;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor float 2 na pilha de operandos
 *
 */
void fconst_2(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = FLOAT;
    operand->val.primitive_val.val.val_float = 2;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor double 0 na pilha de operandos
 *
 */
void dconst_0(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = DOUBLE;
    operand->val.primitive_val.val.val_double = 0;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha o valor double 1 na pilha de operandos
 *
 */
void dconst_1(){
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = DOUBLE;
    operand->val.primitive_val.val.val_double = 1;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha byte b como int value na pilha de operandos.
 *
 */
void bipush(){
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    u1 b = code_attribute->code[jvm_pc.code_pc+1];
    int32_t value = (int32_t) b;

    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = value;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);

}

/**
 * Empilha short b como int value na pilha de operandos.
 *
 */
void sipush(){
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    u1 b1 = code_attribute->code[jvm_pc.code_pc+1];
    u1 b2 = code_attribute->code[jvm_pc.code_pc+2];
    int16_t aux = (b1 << 8) | b2;
    int32_t value = (int32_t) aux;

    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    operand->tag = PRIMITIVE;
    operand->val.primitive_val.tag = INT;
    operand->val.primitive_val.val.val32 = value;

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}


/**
 * Empilha (String, Integer, Float) constant_pool[index] na pilha de operandos.
 *
 */
void ldc(){
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    u1 b = code_attribute->code[jvm_pc.code_pc+1];
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));
    u4 bytes;
    u2 bytes1;

    switch(jvm_pc.class->class_file.constant_pool[b].tag){
        case CONSTANT_Integer:
            bytes = jvm_pc.class->class_file.constant_pool[b].info.Integer.bytes;
            operand->tag = PRIMITIVE;
            operand->val.primitive_val.tag = INT;
            operand->val.primitive_val.val.val32 = bytes;
            break;
        case CONSTANT_Float:
            bytes = jvm_pc.class->class_file.constant_pool[b].info.Float.bytes;
            operand->tag = PRIMITIVE;
            operand->val.primitive_val.tag = FLOAT;
            operand->val.primitive_val.val.val_float = bytes;
            break;
        case CONSTANT_String:
            bytes1 = jvm_pc.class->class_file.constant_pool[b].info.String.string_index;
            Utf8_info_t *Utf8_cod = &(jvm_pc.class->class_file.constant_pool[bytes1].info.Utf8);
            operand = utf8_to_array_reference(Utf8_cod);
            break;
        default:
            printf("Erro \n");
            break;
    }

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha (String, Integer, Float) constant_pool[wide_index] na pilha de operandos.
 *
 */
void ldc_w(){
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    u1 b1 = code_attribute->code[jvm_pc.code_pc+1];
    u1 b2 = code_attribute->code[jvm_pc.code_pc+2];
    u2 b = (b1<<8)|b2;
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));

    u4 bytes;
    u2 bytes1;
    switch(jvm_pc.class->class_file.constant_pool[b].tag){
        case CONSTANT_Integer:
            bytes = jvm_pc.class->class_file.constant_pool[b].info.Integer.bytes;
            operand->tag = PRIMITIVE;
            operand->val.primitive_val.tag = INT;
            operand->val.primitive_val.val.val32 = bytes;
            break;
        case CONSTANT_Float:
            bytes = jvm_pc.class->class_file.constant_pool[b].info.Float.bytes;
            operand->tag = PRIMITIVE;
            operand->val.primitive_val.tag = FLOAT;
            operand->val.primitive_val.val.val_float = bytes;
            break;
        case CONSTANT_String:
            bytes1 = jvm_pc.class->class_file.constant_pool[b].info.String.string_index;
            Utf8_info_t *Utf8_cod = &(jvm_pc.class->class_file.constant_pool[bytes1].info.Utf8);
            operand = utf8_to_array_reference(Utf8_cod);
            break;
        default:
            printf("Erro \n");
            break;
    }

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha (Long, Double) constant_pool[index] na pilha de operandos.
 *
 */
void ldc2_w(){
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    u1 b1 = code_attribute->code[jvm_pc.code_pc+1];
    u1 b2 = code_attribute->code[jvm_pc.code_pc+2];
    u2 b = (b1<<8)|b2;
    any_type_t *operand = (any_type_t*) malloc(sizeof(any_type_t));
    u4 high_bytes;
    u4 low_bytes;

    switch(jvm_pc.class->class_file.constant_pool[b].tag){
        case CONSTANT_Long:
            high_bytes = jvm_pc.class->class_file.constant_pool[b].info.Long.high_bytes;
            low_bytes = jvm_pc.class->class_file.constant_pool[b].info.Long.low_bytes;
            operand->tag = PRIMITIVE;
            operand->val.primitive_val.tag = LONG;
            operand->val.primitive_val.val.val32 = (high_bytes<<8)|low_bytes;
            break;
        case CONSTANT_Double:
            high_bytes = jvm_pc.class->class_file.constant_pool[b].info.Long.high_bytes;
            low_bytes = jvm_pc.class->class_file.constant_pool[b].info.Long.low_bytes;
            operand->tag = PRIMITIVE;
            operand->val.primitive_val.tag = DOUBLE;
            operand->val.primitive_val.val.val32 = (high_bytes<<8)|low_bytes;
            break;
        default:
            printf("Erro \n");
            break;
    }

    frame_t* frame = peek_frame_stack(jvm_stack);
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha na pilha de operandos any_type_t value de uma local_var[index]. Valida para todos os tload()
 *
 */
void tload(){
    any_type_t* operand;

    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    u1 index = code_attribute->code[jvm_pc.code_pc+1];
    operand = (any_type_t*) malloc(sizeof(any_type_t));

    frame_t *frame = peek_frame_stack(jvm_stack);
    operand = frame->local_var.var[index];

    push_operand_stack(&(frame->operand_stack), operand);

}

/**
 * Empilha na pilha de operandos any_type_t value de uma local_var[0]. Valida para todos os tload_0()
 *
 */
void tload_0(){
    any_type_t* operand;

    frame_t *frame = peek_frame_stack(jvm_stack);
    operand = frame->local_var.var[0];

    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha na pilha de operandos any_type_t value de uma local_var[1]. Valida para todos os tload_1()
 *
 */
void tload_1(){
    any_type_t* operand;

    frame_t *frame = peek_frame_stack(jvm_stack);
    operand = frame->local_var.var[1];

    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha na pilha de operandos any_type_t value de uma local_var[2]. Valida para todos os tload_2()
 *
 */
void tload_2(){
    any_type_t* operand;

    frame_t *frame = peek_frame_stack(jvm_stack);
    operand = frame->local_var.var[2];

    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Empilha na pilha de operandos any_type_t value de uma local_var[3]. Valida para todos os tload_3()
 *
 */
void tload_3(){
    any_type_t* operand;

    frame_t *frame = peek_frame_stack(jvm_stack);
    operand = frame->local_var.var[3];

    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Carrega um anytype_t value de uma local_var[index]. Valida para todos os taload()
 *
 */
void taload(){
    any_type_t *index, *arrayref, *operand;
    uint32_t int_index;
    frame_t *frame = peek_frame_stack(jvm_stack);

    operand = (any_type_t*) malloc(sizeof(any_type_t));
    arrayref = pop_operand_stack(&(frame->operand_stack));
    index = pop_operand_stack(&(frame->operand_stack));

    int_index = index->val.primitive_val.val.val32;

    *operand = arrayref->val.reference_val.val.array.components[int_index];
    push_operand_stack(&(frame->operand_stack), operand);
}

/**
 * Atribui any_type_t value a local_var[index]. Valida para todos os tstore()
 *
 */
void tstore(){
    any_type_t *value;

    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    u1 index = code_attribute->code[jvm_pc.code_pc+1];

    frame_t *frame = peek_frame_stack(jvm_stack);
    value = pop_operand_stack(&(frame->operand_stack));

    frame->local_var.var[index] = value;
    if(value->val.primitive_val.tag == LONG|| value->val.primitive_val.tag == DOUBLE)
            frame->local_var.var[index+1] = value;
}

/**
 * Atribui any_type_t value a local_var[index]. Valida para todos os tstore_0()
 *
 */
void tstore_0(){
    any_type_t *value;

    frame_t *frame = peek_frame_stack(jvm_stack);
    value = pop_operand_stack(&(frame->operand_stack));

    frame->local_var.var[0] = value;
    if(value->val.primitive_val.tag == LONG|| value->val.primitive_val.tag == DOUBLE)
            frame->local_var.var[1] = value;
}

/**
 * Atribui any_type_t value a local_var[index]. Valida para todos os tstore_1()
 *
 */
void tstore_1(){
    any_type_t *value;

    frame_t *frame = peek_frame_stack(jvm_stack);
    value = pop_operand_stack(&(frame->operand_stack));

    frame->local_var.var[1] = value;
    if(value->val.primitive_val.tag == LONG|| value->val.primitive_val.tag == DOUBLE)
            frame->local_var.var[2] = value;
}

/**
 * Atribui any_type_t value a local_var[index]. Valida para todos os tstore_2()
 *
 */
void tstore_2(){
    any_type_t *value;

    frame_t *frame = peek_frame_stack(jvm_stack);
    value = pop_operand_stack(&(frame->operand_stack));

    frame->local_var.var[2] = value;
    if(value->val.primitive_val.tag == LONG|| value->val.primitive_val.tag == DOUBLE)
            frame->local_var.var[3] = value;
}

/**
 * Atribui any_type_t value a local_var[index]. Valida para todos os tstore_3()
 *
 */
void tstore_3(){
    any_type_t *value;

    frame_t *frame = peek_frame_stack(jvm_stack);
    value = pop_operand_stack(&(frame->operand_stack));

    frame->local_var.var[3] = value;
    if(value->val.primitive_val.tag == LONG|| value->val.primitive_val.tag == DOUBLE)
            frame->local_var.var[4] = value;
}

void tastore(){
    any_type_t *index, *arrayref, *value;
    uint32_t int_index;
    frame_t *frame = peek_frame_stack(jvm_stack);

    arrayref = pop_operand_stack(&(frame->operand_stack));
    index = pop_operand_stack(&(frame->operand_stack));
    value = pop_operand_stack(&(frame->operand_stack));

    int_index = index->val.primitive_val.val.val32;

    arrayref->val.reference_val.val.array.components[int_index] = *value;
}

void tableswitch() {
    int offset = 0;
    u4 low, high, myDefault, targetOffset;
    u1 byte1 = 0;
    u1 byte2 = 0;
    u1 byte3 = 0;
    u1 byte4 = 0;

    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);

    offset += 4 - (jvm_pc.code_pc % 4); //allignment bytes

    byte1 = code_attribute->code[jvm_pc.code_pc + offset];
    byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
    byte3 = code_attribute->code[jvm_pc.code_pc + offset + 2];
    byte4 = code_attribute->code[jvm_pc.code_pc + offset + 3];
    myDefault = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

    offset += 4; // count default

    byte1 = code_attribute->code[jvm_pc.code_pc + offset];
    byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
    byte3 = code_attribute->code[jvm_pc.code_pc + offset + 2];
    byte4 = code_attribute->code[jvm_pc.code_pc + offset + 3];
    low = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

    offset += 4; // count low

    byte1 = code_attribute->code[jvm_pc.code_pc + offset];
    byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
    byte3 = code_attribute->code[jvm_pc.code_pc + offset + 2];
    byte4 = code_attribute->code[jvm_pc.code_pc + offset + 3];
    high = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

    offset += 4; // count high

    frame_t *frame = peek_frame_stack(jvm_stack);
    any_type_t *operand = pop_operand_stack(&(frame->operand_stack));
    u4 index = operand->val.primitive_val.val.val32;

    if (index < low && index > high) {
        jvm_pc.code_pc = myDefault + jvm_pc.code_pc;
    } else {
        offset += index - low;

        byte1 = code_attribute->code[jvm_pc.code_pc + offset];
        byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
        byte3 = code_attribute->code[jvm_pc.code_pc + offset + 2];
        byte4 = code_attribute->code[jvm_pc.code_pc + offset + 3];
        targetOffset = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

        jvm_pc.code_pc = targetOffset + jvm_pc.code_pc;
    }

    jvm_pc.jumped = 1;
}

void lookupswitch() {
    int offset = 0;
    u4 npairs, myDefault, targetOffset, match;
    u1 byte1 = 0;
    u1 byte2 = 0;
    u1 byte3 = 0;
    u1 byte4 = 0;

    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);

    offset += 4 - (jvm_pc.code_pc % 4); //allignment bytes

    byte1 = code_attribute->code[jvm_pc.code_pc + offset];
    byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
    byte3 = code_attribute->code[jvm_pc.code_pc + offset + 2];
    byte4 = code_attribute->code[jvm_pc.code_pc + offset + 3];
    myDefault = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

    offset += 4; // count default

    byte1 = code_attribute->code[jvm_pc.code_pc + offset];
    byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
    byte3 = code_attribute->code[jvm_pc.code_pc + offset + 2];
    byte4 = code_attribute->code[jvm_pc.code_pc + offset + 3];
    npairs = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

    offset += 4; // count npairs

    frame_t *frame = peek_frame_stack(jvm_stack);
    any_type_t *operand = pop_operand_stack(&(frame->operand_stack));
    u4 key = operand->val.primitive_val.val.val32;

    u4 i;
    for(i = 0; i < npairs; i++) {
        byte1 = code_attribute->code[jvm_pc.code_pc + offset];
        byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
        byte3 = code_attribute->code[jvm_pc.code_pc + offset + 2];
        byte4 = code_attribute->code[jvm_pc.code_pc + offset + 3];
        match = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

        if (match == key) {
            byte1 = code_attribute->code[jvm_pc.code_pc + offset + 4];
            byte2 = code_attribute->code[jvm_pc.code_pc + offset + 5];
            byte3 = code_attribute->code[jvm_pc.code_pc + offset + 6];
            byte4 = code_attribute->code[jvm_pc.code_pc + offset + 7];
            targetOffset = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | byte4;

            jvm_pc.code_pc = targetOffset + jvm_pc.code_pc;
            break;
        } else if (match > key) {
            jvm_pc.code_pc = myDefault + jvm_pc.code_pc;
            break;
        }

        offset += 8; // count match and offset pair
    }

    jvm_pc.jumped = 1;
}

void wide() {
    any_type_t* operand;
    int offset = 0;
    u2 index;
    int16_t inc;
    u1 opcode;
    u1 byte1 = 0;
    u1 byte2 = 0;

    frame_t *frame = peek_frame_stack(jvm_stack);
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);

    offset += 1; //count wide opcode

    opcode = code_attribute->code[jvm_pc.code_pc + offset];

    offset += 1; //count operation opcode

    switch(opcode) {
        case 0x84: // caso iinc
            byte1 = code_attribute->code[jvm_pc.code_pc + offset];
            byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
            index = (byte1 << 8) | (byte2);

            offset += 2; // count index

            byte1 = code_attribute->code[jvm_pc.code_pc + offset];
            byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
            inc = (byte1 << 8) | (byte2);

            offset += 2; // count count

            operand = frame->local_var.var[index];
            switch (operand->val.primitive_val.tag) {
                case BYTE:
                    operand->val.primitive_val.val.val8 += inc;
                    break;
                case SHORT:
                    operand->val.primitive_val.val.val16 += inc;
                    break;
                case INT:
                    operand->val.primitive_val.val.val32 += inc;
                    break;
                case LONG:
                    operand->val.primitive_val.val.val64 += inc;
                    break;
                default:
                    printf("Unexpected primitive_val tag on iinc()\n");
                    break;
            }

            break;
        case 0x15: // caso iload
        case 0x17: // caso fload
        case 0x16: // caso lload
        case 0x18: // caso dload
        case 0x19: // caso aload
            byte1 = code_attribute->code[jvm_pc.code_pc + offset];
            byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
            index = (byte1 << 8) | (byte2);

            offset += 2; // count index

            operand = frame->local_var.var[index];
            push_operand_stack(&(frame->operand_stack), operand);
            break;
        case 0x36: // caso istore
        case 0x37: // caso lstore
        case 0x38: // caso fstore
        case 0x39: // caso dstore
        case 0x3a: // caso astore
            byte1 = code_attribute->code[jvm_pc.code_pc + offset];
            byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
            index = (byte1 << 8) | (byte2);

            offset += 2; // count index

            operand = pop_operand_stack(&(frame->operand_stack));

            frame->local_var.var[index] = operand;
            if(operand->val.primitive_val.tag == LONG|| operand->val.primitive_val.tag == DOUBLE)
                frame->local_var.var[index+1] = operand;
            break;
        case 0xa9: // caso ret
            byte1 = code_attribute->code[jvm_pc.code_pc + offset];
            byte2 = code_attribute->code[jvm_pc.code_pc + offset + 1];
            index = (byte1 << 8) | (byte2);

            offset += 2; // count index

            operand = frame->local_var.var[index];
            switch (operand->val.primitive_val.tag) {
                case BYTE:
                    jvm_pc.code_pc = operand->val.primitive_val.val.val8;
                    break;
                case SHORT:
                    jvm_pc.code_pc = operand->val.primitive_val.val.val16;
                    break;
                case INT:
                    jvm_pc.code_pc = operand->val.primitive_val.val.val32;
                    break;
                case LONG:
                    jvm_pc.code_pc = operand->val.primitive_val.val.val64;
                    break;
                default:
                    printf("Unexpected primitive_val tag on ret()\n");
                    break;
            }

            jvm_pc.jumped = 1;

            break;
    }
}

void ret() {
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    frame_t* frame = peek_frame_stack(jvm_stack);

    u1 index = code_attribute->code[jvm_pc.code_pc + 1];

    any_type_t* operand = frame->local_var.var[index];
    switch (operand->val.primitive_val.tag) {
        case BYTE:
            jvm_pc.code_pc = operand->val.primitive_val.val.val8;
            break;
        case SHORT:
            jvm_pc.code_pc = operand->val.primitive_val.val.val16;
            break;
        case INT:
            jvm_pc.code_pc = operand->val.primitive_val.val.val32;
            break;
        case LONG:
            jvm_pc.code_pc = operand->val.primitive_val.val.val64;
            break;
        default:
            printf("Unexpected primitive_val tag on ret()\n");
            break;
    }

    jvm_pc.jumped = 1;
}

void iinc() {
    code_attribute_t *code_attribute = getCodeAttribute(jvm_pc.class, jvm_pc.method);
    frame_t* frame = peek_frame_stack(jvm_stack);

    u1 index = code_attribute->code[jvm_pc.code_pc + 1];
    int8_t inc = code_attribute->code[jvm_pc.code_pc + 2];

    any_type_t* operand = frame->local_var.var[index];
    switch (operand->val.primitive_val.tag) {
        case BYTE:
            operand->val.primitive_val.val.val8 += inc;
            break;
        case SHORT:
            operand->val.primitive_val.val.val16 += inc;
            break;
        case INT:
            operand->val.primitive_val.val.val32 += inc;
            break;
        case LONG:
            operand->val.primitive_val.val.val64 += inc;
            break;
        default:
            printf("Unexpected primitive_val tag on iinc()\n");
            break;
    }
}

void (*jvm_opcode[])(void) = {
    NULL ,aconst_null, iconst_m1, iconst_0, iconst_1, iconst_2, iconst_3, iconst_4, iconst_5, lconst_0, lconst_1,
    fconst_0, fconst_1, dconst_0, dconst_1, bipush, sipush, ldc, ldc_w, ldc2_w, tload, tload, tload, tload, tload,
    tload_0, tload_1, tload_2, tload_3, tload_0, tload_1, tload_2, tload_3, tload_0, tload_1, tload_2, tload_3,
    tload_0, tload_1, tload_2, tload_3, tload_0, tload_1, tload_2, tload_3, taload, taload, taload, taload, taload,
    taload, taload, taload, tstore, tstore, tstore, tstore, tstore, tstore_0, tstore_1, tstore_3, tstore_0, tstore_1,
    tstore_3, tstore_0, tstore_1, tstore_3, tstore_0, tstore_1, tstore_3, tstore_0, tstore_1, tstore_3, tstore_0,
    tstore_1, tstore_3, tastore, tastore, tastore, tastore, tastore, tastore, tastore, tastore
};
