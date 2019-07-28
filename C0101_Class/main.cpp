#include <string>
#include <iostream>

// 経理クラス(クラスの定義)
class Accounting {
private:
	// 名前
	std::string name;
	// 資産
	long asset;
public:
	// コンストラクタ
	Accounting(std::string name, long asset)
	{		
		this -> name = name;
		this->asset = asset;
	}
	std::string GetName()
	{
		return name;
	}
	long GetAsset()
	{
		return asset;
	}
	// 収入
	void Earn(long yen)
	{
		asset += yen;
	}
	// 支出
	void Spend(long yen)
	{
		asset -= yen;
	}
};

// エントリポイント
int main()
{
	Accounting nakano("中野",1000);
	Accounting yamada("山田", 500);

	nakano.Spend(200);
	yamada.Earn(100);

	std::cout << nakano.GetName() << " : " << nakano.GetAsset() << "円" << std::endl;
	std::cout << yamada.GetName() << " : " << yamada.GetAsset() << "円" << std::endl;

	return 0;
}