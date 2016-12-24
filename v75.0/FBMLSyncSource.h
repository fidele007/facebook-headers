/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBMLSyncSource : NSObject {

	int _syncInterface;
	int _suggestionType;
	unsigned long long _originalPhotoCount;
	unsigned long long _originalVideoCount;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _originalUserUUIDs;
	unsigned long long _photoPickerInterface;

}

@property (nonatomic,readonly) unsigned long long photoPickerInterface;              //@synthesize photoPickerInterface=_photoPickerInterface - In the implementation block
-(int)suggestionType;
-(id)initWithPhotoPickerInterface:(unsigned long long)arg1 ;
-(id)initWithSyncInterface:(int)arg1 suggestionType:(int)arg2 originalPhotoCount:(unsigned long long)arg3 originalVideoCount:(unsigned long long)arg4 originalUserUUIDs:(const vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg5 ;
-(int)syncInterface;
-(unsigned long long)originalPhotoCount;
-(unsigned long long)originalVideoCount;
-(const vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)originalUserUUIDs;
-(unsigned long long)photoPickerInterface;
@end

