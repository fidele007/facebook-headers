/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString, UIView, UIColor, UIImage;

@interface FBComposerOpenAnimationStatusViewLayout : NSObject {

	BOOL _isProfilePictureVisible;
	NSString* _fillerText;
	UIView* _fillerTextView;
	UIColor* _fillerTextColor;
	double _fillerTextFontSize;
	UIView* _profilePictureView;
	UIView* _profileBadgeView;
	UIImage* _profilePicture;
	UIImage* _profileBadge;
	CGRect _cardFrameInView;
	CGRect _profilePictureFrameInView;
	CGRect _profileBadgeFrameInView;
	CGRect _fillerTextFrameInView;

}

@property (nonatomic,readonly) BOOL isProfilePictureVisible;                  //@synthesize isProfilePictureVisible=_isProfilePictureVisible - In the implementation block
@property (nonatomic,readonly) CGRect cardFrameInView;                        //@synthesize cardFrameInView=_cardFrameInView - In the implementation block
@property (nonatomic,readonly) CGRect profilePictureFrameInView;              //@synthesize profilePictureFrameInView=_profilePictureFrameInView - In the implementation block
@property (nonatomic,readonly) CGRect profileBadgeFrameInView;                //@synthesize profileBadgeFrameInView=_profileBadgeFrameInView - In the implementation block
@property (nonatomic,readonly) CGRect fillerTextFrameInView;                  //@synthesize fillerTextFrameInView=_fillerTextFrameInView - In the implementation block
@property (nonatomic,copy,readonly) NSString * fillerText;                    //@synthesize fillerText=_fillerText - In the implementation block
@property (nonatomic,readonly) UIView * fillerTextView;                       //@synthesize fillerTextView=_fillerTextView - In the implementation block
@property (nonatomic,readonly) UIColor * fillerTextColor;                     //@synthesize fillerTextColor=_fillerTextColor - In the implementation block
@property (nonatomic,readonly) double fillerTextFontSize;                     //@synthesize fillerTextFontSize=_fillerTextFontSize - In the implementation block
@property (nonatomic,readonly) UIView * profilePictureView;                   //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,readonly) UIView * profileBadgeView;                     //@synthesize profileBadgeView=_profileBadgeView - In the implementation block
@property (nonatomic,readonly) UIImage * profilePicture;                      //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,readonly) UIImage * profileBadge;                        //@synthesize profileBadge=_profileBadge - In the implementation block
-(UIView *)profilePictureView;
-(UIImage *)profilePicture;
-(UIImage *)profileBadge;
-(id)initWithIsProfilePictureVisible:(BOOL)arg1 cardFrameInView:(CGRect)arg2 profilePictureFrameInView:(CGRect)arg3 profileBadgeFrameInView:(CGRect)arg4 fillerTextFrameInView:(CGRect)arg5 fillerText:(id)arg6 fillerTextColor:(id)arg7 fillerTextFontSize:(double)arg8 fillerTextView:(id)arg9 profilePictureView:(id)arg10 profileBadgeView:(id)arg11 profilePicture:(id)arg12 profileBadge:(id)arg13 ;
-(BOOL)isProfilePictureVisible;
-(CGRect)cardFrameInView;
-(CGRect)profilePictureFrameInView;
-(CGRect)profileBadgeFrameInView;
-(CGRect)fillerTextFrameInView;
-(NSString *)fillerText;
-(UIView *)fillerTextView;
-(UIColor *)fillerTextColor;
-(double)fillerTextFontSize;
-(UIView *)profileBadgeView;
@end

