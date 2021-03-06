/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSArray, NSDate;

@interface FBEventCreateIntentTarget : FBIntentTarget {

	NSString* _surface;
	NSArray* _recipientFBIDs;
	NSString* _pageID;
	NSString* _title;
	NSString* _themeID;
	NSString* _themeURI;
	NSDate* _startTime;
	long long _privacyType;

}

@property (nonatomic,copy,readonly) NSString * surface;                    //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientFBIDs;              //@synthesize recipientFBIDs=_recipientFBIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                     //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeID;                    //@synthesize themeID=_themeID - In the implementation block
@property (nonatomic,copy,readonly) NSString * themeURI;                   //@synthesize themeURI=_themeURI - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) long long privacyType;                      //@synthesize privacyType=_privacyType - In the implementation block
+(id)eventCreateTargetWithSurface:(id)arg1 recipientFBIDs:(id)arg2 pageID:(id)arg3 title:(id)arg4 themeID:(id)arg5 themeURI:(id)arg6 startTime:(id)arg7 privacyType:(long long)arg8 ;
-(id)fallbackURLs;
-(long long)privacyType;
-(NSString *)themeID;
-(NSString *)themeURI;
-(NSArray *)recipientFBIDs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSDate *)startTime;
-(NSString *)pageID;
-(NSString *)surface;
@end

