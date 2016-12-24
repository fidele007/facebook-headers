/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBVideoHomeComposerHeaderComponentModel : FBValueObject <NSCopying> {

	NSString* _userName;
	unsigned long long _onlineFriendsCount;
	SEL _tapAction;

}

@property (nonatomic,copy,readonly) NSString * userName;                           //@synthesize userName=_userName - In the implementation block
@property (nonatomic,readonly) unsigned long long onlineFriendsCount;              //@synthesize onlineFriendsCount=_onlineFriendsCount - In the implementation block
@property (nonatomic,readonly) SEL tapAction;                                      //@synthesize tapAction=_tapAction - In the implementation block
-(id)initWithUserName:(id)arg1 onlineFriendsCount:(unsigned long long)arg2 tapAction:(SEL)arg3 ;
-(unsigned long long)onlineFriendsCount;
-(SEL)tapAction;
-(NSString *)userName;
@end
