	#include<iostream>
#include<string.h>
using namespace std;

class InstagramUploader{
	public:
		string iupload;
		void uploadcontent(){
			cout<<"enter content1 :";
			cin>>iupload;
			cout<<"\nthis is uploaded :"<<iupload;
			cout<<"\nInstagram content uploaded";
		}
		
};

class YoutubeUploader : public InstagramUploader  {
	public:
	string yupload ;
		
		void uploadcontent(){
			cout<<"enter content2 :";
			cin>>yupload;
			cout<<"this is uploaded :"<<yupload;
			cout<<"\nYoutube content uploaded";
		}
};
int main(){
	YoutubeUploader y;
	y.InstagramUploader::uploadcontent();
	y.uploadcontent();
	
	
	return 0;
}
