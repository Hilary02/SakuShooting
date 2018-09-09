//�Q�l�Fhttps://qiita.com/narumi_/items/b205e59e7fc81695f380

#pragma once
template<class T>
class Singleton {
public:
	static inline T& GetInstance() {
		static T instance;	//1��������
		return instance;
	}

protected:
	Singleton() {}; // �O���ł̃C���X�^���X�쐬�͋֎~
	virtual ~Singleton() {};

private:
	Singleton & operator=(const Singleton& obj) {}; // ������Z�q�֎~
	Singleton(const Singleton &obj) {};// �R�s�[�R���X�g���N�^�֎~
};

