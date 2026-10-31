#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/* 求字符串长度：自己搭，不用 strlen */
int changdu(const char *s)
{
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}

/* 判断 s2 是不是 s1 旋转得到的字符串。
   思路：s1 一共只有 n 种旋转，逐一"隔着比"，
   不做任何拷贝、不动原串、也没有长度上限。 */
int panduan(const char *s1, const char *s2)
{
	int n = changdu(s1);
	int k, i;

	/* 长度不同，一定不可能是旋转 */
	if (n != changdu(s2))
		return 0;

	/* 两个空串，看作"旋转 0 次" */
	if (n == 0)
		return 1;

	/* 试第 k 种旋转：
	   要比的是 s2[i]，对应 s1 里下标 (i + k) % n 的那个字符。
	   % n 让越过末尾的下标自动绕回开头，这就是"环形读"。 */
	for (k = 0; k < n; k++)
	{
		i = 0;
		while (i < n && s1[(i + k) % n] == s2[i])
			i++;

		if (i == n)	/* n 个字符全对上，就是它 */
			return 1;
	}

	return 0;
}

int main(void)
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";

	printf("%d\n", panduan(s1, s2));          /* 题目例子：1 */
	printf("%d\n", panduan("abcd", "ACBD"));  /* 题目例子：0 */

	/* 下面几组是自测，看看边界对不对 */
	printf("%d\n", panduan("AABCD", "ABCDA"));  /* 左旋 1 位 → 1 */
	printf("%d\n", panduan("AABCD", "DAABC"));  /* 右旋 1 位 → 1 */
	printf("%d\n", panduan("AABCD", "AAABC"));  /* 顺序不对 → 0 */
	printf("%d\n", panduan("abc", "abcd"));     /* 长度不同 → 0 */
	printf("%d\n", panduan("a", "a"));          /* 单个字符 → 1 */
	printf("%d\n", panduan("", ""));            /* 两个空串 → 1 */

	return 0;
}
