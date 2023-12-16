/*
void Sed::string_replace(std::string& str, const std::string& s1, const std::string& s2) const{
	size_t size = str.find(s1);

	while(size != std::string::npos){
		str.erase(size, s1.length());
		str.insert(size, s2);
		size = str.find(s1);
	}


Bu C++ kodu, Sed sınıfının bir üye fonksiyonu olan string_replace fonksiyonunu içeriyor. 
Bu fonksiyon, bir ana dize (str), değiştirilecek bir alt dize (s1) ve bu alt dizenin yerine geçecek başka bir alt dize (s2) alır.

İşlevin adım adım açıklaması şu şekildedir:

size_t size = str.find(s1);: str içindeki ilk s1 alt dizisinin konumunu bulur. Eğer bulunamazsa, size değeri std::string::npos olacaktır.

while(size != std::string::npos) {: s1 alt dizesi bulunduğu sürece bir döngü oluşturulur.
 Bu sayede, s1 alt dizesi str içinde bir veya daha fazla kez geçiyorsa, tüm geçen yerler s2 ile değiştirilecektir.

str.erase(size, s1.length());: size konumundan başlayarak s1 alt dizisini str içinden siler.

str.insert(size, s2);: size konumuna s2 alt dizisini str içine ekler.

size = str.find(s1);: Değiştirilen str içinde bir sonraki s1 alt dizesinin konumunu bulur. 
Eğer bulunamazsa, size değeri tekrar std::string::npos olacaktır ve döngü sona erer.

*/