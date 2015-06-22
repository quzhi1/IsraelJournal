#include <iostream>
#include <assert.h> 
#include <string>
using namespace std;

enum 王道{明, 昏};
class 君{
	private:
		bool 在;
	public:
		王道 为君;

		君(){
			在 = 1;
			为君 = 明;
		}

		bool 创业(double percentage){
			if ( percentage < 0.5 ){
				在 = 0;
				cout << "崩殂！\n";
				return 0;
			}
			else{
				cout << "兴复汉室，还于旧都！\n";
				return 1;
			}
		}

		void 开张圣听(){
			cout << "光先帝遗德！\n";
		}
		void 恢弘志士之气(){}
		void 妄自菲薄(){}
		void 引喻失义(){
			cout << "塞忠谏之路！\n";
		}

		void 亲贤臣远小人(){
			为君 = 明;
		}
		void 亲小人远贤臣(){
			为君 = 昏;
		}

		void 治国(){}

		void 偏私(){
			cout << "内外异法！\n";
		};

		bool 咨之(void* 事, 侍卫之臣 臣){
			if ( 为君 == 明 && 臣.为臣 == 贤 ){
				return 1;
			}
			return 0;
		}

		bool 咨之(void* 事, 忠志之士 臣){
			if ( 为君 == 明 && 臣.为臣 == 贤 ){
				return 1;
			}
			return 0;
		}

		bool 施行(void* 事){
			return 1;
		}

		void 曰(string 言){
			cout << 言 << endl;
		}

		~君(){};
} 先帝, 陛下;

enum 臣德{贤, 奸}; 
class 侍卫之臣{
private:
	君 刘备;
	君 刘禅;
public:
	臣德 为臣;

	void 不懈于内(){ cout << "不懈于内!\n"; };

	bool 追先帝之殊遇(){
		if (刘备.为君 == 明)
			return 1;
		else{
			return 0;
		}
	}

	bool 报之于陛下(){
		if (刘禅.为君 == 明)
			return 1;
		else{
			return 0;
		}
	}
};

enum 气候{兴盛, 疲敝};
class 国{
public:
	气候 国运;
	国(){
		国运 = 兴盛;
	}
	void 付诸有司论其刑赏(侍卫之臣 臣){
		if (臣.为臣 = 贤){
			cout << "赏！\n";
		}
		else{
			cout << "刑！\n";
		}
	};
	~国(){}
} 曹魏, 东吴, 益州;

class 忠志之士{
private:
	君 刘备;
	君 刘禅;
public:
	臣德 为臣;
	void 忘身于外(){ cout << "忘身于外!\n"; };
	bool 追先帝之殊遇(){
		if (刘备.为君 == 明)
			return 1;
		else{
			return 0;
		}
	}

	bool 报之于陛下(){
		if (刘禅.为君 == 明)
			return 1;
		else{
			return 0;
		}
	}
};

class 侍中: public 侍卫之臣{} 郭攸之, 费祎;
class 侍郎: public 侍卫之臣{} 董允;
class 尚书: public 侍卫之臣{} 陈震;
class 长史: public 侍卫之臣{} 张裔;
class 参军: public 侍卫之臣{} 蒋琬;
class 中都督: public 忠志之士{} 向宠;
	
	

// 臣亮言

int main(){
	先帝.创业(0.49);
	益州.国运 = 疲敝;
	cout << "此诚危急存亡之秋也！\n";
	if( 郭攸之.追先帝之殊遇() && 郭攸之.报之于陛下() ){
		郭攸之.不懈于内();
	}
	if( 费祎.追先帝之殊遇() && 费祎.报之于陛下() ){
		费祎.不懈于内();
	}
	if( 董允.追先帝之殊遇() && 董允.报之于陛下() ){
		董允.不懈于内();
	}
	if( 向宠.追先帝之殊遇() && 向宠.报之于陛下() ){
		向宠.忘身于外();	
	}
	if (陛下.为君 == 明){
		陛下.开张圣听();
		陛下.恢弘志士之气();
	}
	else{
		陛下.妄自菲薄();
		陛下.引喻失义();
	}
	陛下.治国();
	bool 宫中 = 0;
	bool 府中 = 0;
	bool 陟臧 = 0;
	bool 罚否 = 0;
	assert(宫中 == 府中);
	assert(陟臧 == 罚否);
	
	侍卫之臣 作奸犯科者;
	作奸犯科者.为臣 = 奸;
	侍卫之臣 为忠善者;
	为忠善者.为臣 = 贤;
	if (陛下.为君 == 明){
		益州.付诸有司论其刑赏(作奸犯科者);
		益州.付诸有司论其刑赏(为忠善者);
	}
	else{
		陛下.偏私();
	}

	if (郭攸之.为臣 == 贤 && 费祎.为臣 == 贤 && 董允.为臣 == 贤 ){
		cout << "此皆良实，志虑忠纯，是以先帝简拔以遗陛下。\n";
	}

	void *事 = NULL;
	if ( 陛下.咨之(事, 郭攸之) && 陛下.咨之(事, 费祎) && 陛下.咨之(事, 董允) ){
		陛下.施行(事);
		cout << "裨补阙漏，有所广益!\n";
	}

	if (向宠.为臣 == 贤){
		cout << "性行淑均，晓畅军事。\n";
		先帝.曰("能");
		cout << "是以众议举宠为督。\n";
	}

	void *事 = NULL;
	if ( 陛下.咨之(事, 郭攸之)){
		陛下.施行(事);
		cout << "行阵和睦，优劣得所!\n";
	}

	int a;
	cin >> a;
	return 0;
}




