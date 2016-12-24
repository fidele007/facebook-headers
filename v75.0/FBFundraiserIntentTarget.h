/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString;

@interface FBFundraiserIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _fundraiserURL;

}

@property (nonatomic,readonly) unsigned long long fundraiserType; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSString * fundraiserURL;                  //@synthesize fundraiserURL=_fundraiserURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * FBID;                           //@synthesize FBID=_FBID - In the implementation block
+(id)fundraiserTargetWithFBID:(id)arg1 ;
+(id)fundraiserTargetWithCampaign:(id)arg1 ;
+(id)fundraiserTargetWithFBID:(id)arg1 type:(unsigned long long)arg2 ;
+(id)fundraiserTargetWithFundraiser:(id)arg1 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(unsigned long long)fundraiserType;
-(void)setFundraiserType:(unsigned long long)arg1 ;
-(NSString *)fundraiserURL;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
@end
