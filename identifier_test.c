#include<identifier.c> 


void TestandoValidacaoParaCharDeAOuaAteZOuz(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("A"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("Z"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("D"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("G"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("Y"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("W"), "SUCCESS");

    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("a"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("z"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("d"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("g"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("y"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_s("w"), "SUCCESS");
}

void TestandoValidacaoParaCharDeAOuaAteZOuz_NumericError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, valid_s("1"), "It is supposed to be a letter and not a number");
}

void TestandoValidacaoParaCharDeAOuaAteZOuz_WordError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, valid_s("Ferias"), "It is supposed to be a letter and not a word");
}

void TestandoValidacaoParaCharDeAOuaAteZOuz_WordError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, valid_s("feriado"), "It is supposed to be a letter and not a word");
}

void TestandoValidacaoParaCharDeAOuaAteZOuz_FloatNumericError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, valid_s("8.5"), "It is supposed to be a letter and not a float number");
}


void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("A"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("Z"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("D"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("G"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("Y"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("W"), "SUCCESS");

    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("a"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("z"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("d"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("g"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("y"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("w"), "SUCCESS");

    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("0"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("9"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("5"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("8"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("7"), "SUCCESS");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("2"), "SUCCESS");
}

void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_WordError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("Abobora"), "It is supposed to be a letter or one number and not a word");
}

void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_WordError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("Orelha"), "It is supposed to be a letter or one number and not a word");
}

void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_FloatNumberError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("15.2"), "It is supposed to be a letter or one number and not a float number");
}

void TestandoValidacaoParaCharAndInteirosDeAOuaAteZOuzEDe0ate9_NumberError(char ch)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, valid_f("15"), "It is supposed to be a letter or one number and not a two digits number");
}