/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBFeedZombie : FBValueObject <NSCopying> {

	NSString* _UUID;
	NSString* _zombieString;
	NSString* _descriptionText;
	NSString* _unitType;

}

@property (nonatomic,copy,readonly) NSString * UUID;                         //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * zombieString;                 //@synthesize zombieString=_zombieString - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitType;                     //@synthesize unitType=_unitType - In the implementation block
-(id)initWithUUID:(id)arg1 zombieString:(id)arg2 descriptionText:(id)arg3 unitType:(id)arg4 ;
-(NSString *)zombieString;
-(NSString *)UUID;
-(NSString *)descriptionText;
-(NSString *)unitType;
@end

