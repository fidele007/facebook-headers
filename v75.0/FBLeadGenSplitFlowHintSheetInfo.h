/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBLeadGenSplitFlowHintSheetInfo : NSObject {

	FBUserSession* _session;
	NSString* _title;
	NSString* _subtitle;
	NSString* _profileImageURLString;

}

@property (nonatomic,readonly) FBUserSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileImageURLString;              //@synthesize profileImageURLString=_profileImageURLString - In the implementation block
+(id)newWithSession:(id)arg1 title:(id)arg2 subtitle:(id)arg3 profileImageURLString:(id)arg4 ;
-(id)initWithSession:(id)arg1 title:(id)arg2 subtitle:(id)arg3 profileImageURLString:(id)arg4 ;
-(NSString *)profileImageURLString;
-(NSString *)title;
-(NSString *)subtitle;
-(FBUserSession *)session;
@end
