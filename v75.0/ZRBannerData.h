/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ZRBannerData : NSObject <NSCoding> {

	NSString* _campaignId;
	NSString* _uid;
	NSString* _title;
	NSString* _body;
	NSString* _actionText;
	NSString* _actionUrl;
	NSString* _hashString;

}

@property (nonatomic,retain) NSString * campaignId;              //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,retain) NSString * uid;                     //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * body;                    //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * actionText;              //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,retain) NSString * actionUrl;               //@synthesize actionUrl=_actionUrl - In the implementation block
@property (nonatomic,copy) NSString * hashString;                //@synthesize hashString=_hashString - In the implementation block
+(id)bannerDataFromFile:(id)arg1 ;
-(void)setActionText:(NSString *)arg1 ;
-(NSString *)actionText;
-(NSString *)campaignId;
-(void)setCampaignId:(NSString *)arg1 ;
-(id)initWithCampaignId:(id)arg1 uid:(id)arg2 title:(id)arg3 body:(id)arg4 actionText:(id)arg5 actionUrl:(id)arg6 ;
-(BOOL)matchesTokenData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(NSString *)uid;
-(NSString *)hashString;
-(void)setBody:(NSString *)arg1 ;
-(void)setHashString:(NSString *)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)actionUrl;
-(void)setActionUrl:(NSString *)arg1 ;
-(void)writeToFile:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
@end

