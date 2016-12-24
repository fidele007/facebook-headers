/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSArray;

@interface SYNFolderUserSuggestion : NSObject {

	unsigned long long _type;
	NSArray* _users;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * users;                 //@synthesize users=_users - In the implementation block
+(unsigned long long)_typeFromNativeType:(int)arg1 ;
-(id)initWithFolderUserSuggestionType:(unsigned long long)arg1 users:(id)arg2 ;
-(id)initWithNativeFolderUserSuggestion:(shared_ptr<Sync::FolderUserSuggestion>*)arg1 ;
-(unsigned long long)type;
-(NSArray *)users;
@end
