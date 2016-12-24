/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerSproutSheetBannerProfilePicture, UIImage, NSString, UIColor, FBMemFeedStory, FBComposerSproutHeaderComponentSpecifier;

@interface FBComposerSproutSheetHeaderSpecifier : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBComposerSproutSheetBannerProfilePicture* _banner_profilePicture;
	CGSize _banner_profilePictureSize;
	UIImage* _banner_profileBadgeImage;
	NSString* _banner_text;
	UIColor* _banner_textColor;
	double _banner_textFontSize;
	FBMemFeedStory* _storyComponent_story;
	FBComposerSproutHeaderComponentSpecifier* _storyComponent_componentSpecifier;

}
+(id)bannerWithProfilePicture:(id)arg1 profilePictureSize:(CGSize)arg2 profileBadgeImage:(id)arg3 text:(id)arg4 textColor:(id)arg5 textFontSize:(double)arg6 ;
+(id)storyComponentWithStory:(id)arg1 componentSpecifier:(id)arg2 ;
-(void)matchBanner:(/*^block*/id)arg1 storyComponent:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

