/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface FBFacecastCreativeToolSportsFilter : NSObject {

	NSString* _labelText;
	NSString* _pageId;
	NSURL* _team1LogoImageUrl;
	NSURL* _team2LogoImageUrl;

}

@property (nonatomic,copy,readonly) NSString * labelText;                   //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageId;                      //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * team1LogoImageUrl;              //@synthesize team1LogoImageUrl=_team1LogoImageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSURL * team2LogoImageUrl;              //@synthesize team2LogoImageUrl=_team2LogoImageUrl - In the implementation block
-(NSString *)pageId;
-(id)initWithPageId:(id)arg1 team1Name:(id)arg2 team2Name:(id)arg3 team1LogoImage:(id)arg4 team2LogoImage:(id)arg5 ;
-(NSURL *)team1LogoImageUrl;
-(NSURL *)team2LogoImageUrl;
-(NSString *)labelText;
@end

