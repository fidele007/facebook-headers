/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString;

@interface FBLeadGenerationIntentTarget : FBIntentTarget {

	NSString* _leadGenDataID;
	NSString* _adID;

}

@property (nonatomic,copy,readonly) NSString * leadGenDataID;              //@synthesize leadGenDataID=_leadGenDataID - In the implementation block
@property (nonatomic,copy,readonly) NSString * adID;                       //@synthesize adID=_adID - In the implementation block
+(id)leadGenIntentTargetWithLeadGenDataID:(id)arg1 adID:(id)arg2 ;
-(NSString *)adID;
-(NSString *)leadGenDataID;
@end

