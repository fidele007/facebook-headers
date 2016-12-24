/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBFeedGraphQLConnectionInfo : FBValueObject <NSCopying> {

	NSString* _targetID;
	long long _feedType;

}

@property (nonatomic,copy,readonly) NSString * targetID;              //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,readonly) long long feedType;                    //@synthesize feedType=_feedType - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(long long)feedType;
-(id)initWithTargetID:(id)arg1 feedType:(long long)arg2 ;
-(NSString *)targetID;
@end
