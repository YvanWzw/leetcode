//找出数组中重复的数字。
//
//
//在一个长度为 n 的数组 nums 里的所有数字都在 0～n - 1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。
//
//示例 1：
//
//输入：
//[2, 3, 1, 0, 2, 5, 3]
//输出：2 或 3
//
//
//限制：
//
//2 <= n <= 100000
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

//int findRepeatNumber(vector<int>& nums) {
//	int returnNum = -1;
//	unordered_map<int, int> map1;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		unordered_map<int, int>::iterator iter = map1.find(nums[i]);
//		if (iter != map1.end())
//		{
//			returnNum = nums[i];
//			break;
//		}
//		else
//			map1[nums[i]] = 1;
//	}
//	return returnNum;
//}

//int findRepeatNumber(vector<int>& nums) {
//	int returnNum = -1;
//	int* nn = new int[nums.size()]();
//	for (int i = 0; i < nums.size(); i++)
//	{
//		// map<int, int>::iterator iter = map1.find(nums[i]);
//		if (nn[nums[i]] == 1)
//		{
//			returnNum = nums[i];
//			break;
//		}
//		else
//			nn[nums[i]] = 1;
//	}
//	delete[] nn;
//	return returnNum;
//}

int findRepeatNumber(vector<int>& nums) {
	int returnNum = -1;
	set<int> set1;
	for (int i = 0; i < nums.size(); i++) {
		if (!set1.insert(nums[i]).second) {
			returnNum =  nums[i];
		}
	}
	return returnNum;
}

/*
### 小结：
解题方法很常见，较常用的有标记法、排序法等，尝试了用map/unordered_map/set/array四种，以leetcode的测试用例为标准：
map和unordered_map耗时接近，后者占用空间稍小于前者（27.9MB VS 28.7MB）
array的时间消耗与空间消耗都远小于上两者（72ms VS 212ms, 23.1MB VS 27.9MB)
同时测试了用常数标记与bool标记两种，两者耗时接近（测试中bool耗时要高于常数，但在波动误差范围内，可忽略），bool占用空间更小
set的耗时与空间消耗介于map与array之间（152ms, 28.5MB）
但是同样的算法，还是远不如C++题解的27ms

### 评论区：
根据实际情况
如果时间优先则使用map
如果空间优先则使用指针+原地排序数组
若要求空间复杂度O(1)且不能修改原数组则使用二分法
*/