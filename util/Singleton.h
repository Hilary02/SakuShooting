//参考：https://qiita.com/narumi_/items/b205e59e7fc81695f380

#pragma once
template<class T>
class Singleton {
public:
	static inline T& GetInstance() {
		static T instance;	//1つだけ存在
		return instance;
	}

protected:
	Singleton() {}; // 外部でのインスタンス作成は禁止
	virtual ~Singleton() {};

private:
	Singleton & operator=(const Singleton& obj) {}; // 代入演算子禁止
	Singleton(const Singleton &obj) {};// コピーコンストラクタ禁止
};

