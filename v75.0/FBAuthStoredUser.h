/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBAuthUserInfo;

@interface FBAuthStoredUser : FBValueObject <NSCopying> {

	unsigned long long _userType;
	FBAuthUserInfo* _userInfo;

}

@property (nonatomic,readonly) unsigned long long userType;                 //@synthesize userType=_userType - In the implementation block
@property (nonatomic,copy,readonly) FBAuthUserInfo * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithUserType:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(FBAuthUserInfo *)userInfo;
-(unsigned long long)userType;
@end
