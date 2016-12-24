/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNProfileImageInfo;

@interface MNBadgedProfileImageInfo : FBValueObject <NSCopying, NSCoding> {

	MNProfileImageInfo* _profileImageInfo;
	long long _style;
	long long _badgeType;

}

@property (nonatomic,copy,readonly) MNProfileImageInfo * profileImageInfo;              //@synthesize profileImageInfo=_profileImageInfo - In the implementation block
@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long badgeType;                                     //@synthesize badgeType=_badgeType - In the implementation block
-(id)initWithProfileImageInfo:(id)arg1 style:(long long)arg2 badgeType:(long long)arg3 ;
-(MNProfileImageInfo *)profileImageInfo;
-(long long)style;
-(long long)badgeType;
@end

