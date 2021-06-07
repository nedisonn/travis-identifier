/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);

extern void TestandoValidacaoParaCharDeAOuaAteZOuz_1(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_2(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_3(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_4(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_5(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_6(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_7(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_8(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_9(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_10(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_11(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_12(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_NumericError(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_WordError(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_WordError2(void);
extern void TestandoValidacaoParaCharDeAOuaAteZOuz_FloatNumericError(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_1(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_2(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_3(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_4(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_5(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_6(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_7(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_8(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_9(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_10(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_11(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_12(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_13(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_14(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_15(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_16(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_17(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_18(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_WordError(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_WordError2(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_FloatNumberError(void);
extern void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_NumberError(void);
extern void TestandoMain_ComecandoComNumero(void);
extern void TestandoMain_ComecandoComLetraSucesso(void);
extern void TestandoMain_ComecandoComLetraApenasLetrasSucesso(void);
extern void TestandoMain_ComecandoComLetraComNumerosInvalido(void);
extern void TestandoMain_ComecandoComLetraApenasLetrasInvalido(void);
/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("../identifier_test.c");
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_1,12);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_2,17);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_3,22);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_4,27);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_5,32);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_6,37);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_7,42);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_8,47);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_9,52);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_10,57);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_11,62);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_12,67);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_NumericError,72);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_WordError,77);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_WordError2,82);
  RUN_TEST(TestandoValidacaoParaCharDeAOuaAteZOuz_FloatNumericError,87);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_1,92);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_2,97);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_3,102);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_4,107);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_5,112);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_6,117);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_7,122);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_8,127);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_9,132);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_10,137);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_11,142);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_12,147);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_13,152);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_14,157);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_15,162);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_16,167);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_17,172);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_18,177);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_WordError,182);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_WordError2,187);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_FloatNumberError,192);
  RUN_TEST(TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_NumberError,197);
  RUN_TEST(TestandoMain_ComecandoComNumero,202);
  RUN_TEST(TestandoMain_ComecandoComLetraSucesso,208);
  RUN_TEST(TestandoMain_ComecandoComLetraApenasLetrasSucesso,214);
  RUN_TEST(TestandoMain_ComecandoComLetraComNumerosInvalido,220);
  RUN_TEST(TestandoMain_ComecandoComLetraApenasLetrasInvalido,226);

  return (UnityEnd());
}