#include <string>
#include <iostream>

// �o���N���X(�N���X�̒�`)
class Accounting {
private:
	// ���O
	std::string name;
	// ���Y
	long asset;
public:
	// �R���X�g���N�^
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
	// ����
	void Earn(long yen)
	{
		asset += yen;
	}
	// �x�o
	void Spend(long yen)
	{
		asset -= yen;
	}
};

// �G���g���|�C���g
int main()
{
	Accounting nakano("����",1000);
	Accounting yamada("�R�c", 500);

	nakano.Spend(200);
	yamada.Earn(100);

	std::cout << nakano.GetName() << " : " << nakano.GetAsset() << "�~" << std::endl;
	std::cout << yamada.GetName() << " : " << yamada.GetAsset() << "�~" << std::endl;

	return 0;
}