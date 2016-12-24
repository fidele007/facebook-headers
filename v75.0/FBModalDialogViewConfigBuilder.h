/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUIConfigBuilder.h>

@class NSString, UIFont, UIColor, NSArray, FBImageDownloader, UIView;

@interface FBModalDialogViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	unsigned long long _titleMaxNumberOfLines;
	NSString* _message;
	UIFont* _messageFont;
	UIColor* _messageColor;
	unsigned long long _messageMaxNumberOfLines;
	NSString* _facepileTitle;
	UIFont* _facepileTitleFont;
	UIColor* _facepileTitleColor;
	unsigned long long _facepileTitleMaxNumberOfLines;
	NSArray* _facepileItems;
	unsigned long long _facepileItemSize;
	FBImageDownloader* _facepileImageDownloader;
	UIEdgeInsets _imageViewInsets;
	UIView* _imageView;
	BOOL _hasDismissButton;
	BOOL _hasInteractiveDismissal;
	UIColor* _separatorColor;
	UIFont* _buttonTitleFont;
	unsigned long long _buttonLayout;
	NSString* _primaryButtonTitle;
	UIColor* _primaryButtonTitleColor;
	UIColor* _primaryButtonHighlightedTitleColor;
	NSString* _secondaryButtonTitle;
	UIColor* _secondaryButtonTitleColor;
	UIColor* _secondaryButtonHighlightedTitleColor;
	NSString* _tertiaryButtonTitle;
	UIColor* _tertiaryButtonTitleColor;
	UIColor* _tertiaryButtonHighlightedTitleColor;
	UIView* _customView;
	UIEdgeInsets _edgeInsets;
	double _titleTextPadding;
	double _subtitleTextPadding;
	double _customViewPadding;
	double _separatorPadding;
	double _buttonHeight;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderForInstance:(id)arg1 ;
+(id)builderFromConfig:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setButtonTitleFont:(id)arg1 ;
-(id)setTitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setMessageMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setPrimaryButtonTitle:(id)arg1 ;
-(id)setPrimaryButtonTitleColor:(id)arg1 ;
-(id)setSecondaryButtonTitleColor:(id)arg1 ;
-(id)setHasInteractiveDismissal:(BOOL)arg1 ;
-(id)setButtonLayout:(unsigned long long)arg1 ;
-(id)setTitleTextPadding:(double)arg1 ;
-(id)setImageViewInsets:(UIEdgeInsets)arg1 ;
-(id)setFacepileItemSize:(unsigned long long)arg1 ;
-(id)setSeparatorPadding:(double)arg1 ;
-(id)setSubtitleTextPadding:(double)arg1 ;
-(id)setCustomViewPadding:(double)arg1 ;
-(id)setButtonHeight:(double)arg1 ;
-(id)setFacepileTitle:(id)arg1 ;
-(id)setFacepileTitleFont:(id)arg1 ;
-(id)setFacepileTitleColor:(id)arg1 ;
-(id)setFacepileTitleMaxNumberOfLines:(unsigned long long)arg1 ;
-(id)setFacepileItems:(id)arg1 ;
-(id)setFacepileImageDownloader:(id)arg1 ;
-(id)setPrimaryButtonHighlightedTitleColor:(id)arg1 ;
-(id)setSecondaryButtonHighlightedTitleColor:(id)arg1 ;
-(id)setTertiaryButtonTitleColor:(id)arg1 ;
-(id)setTertiaryButtonHighlightedTitleColor:(id)arg1 ;
-(id)setBackgroundColor:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)_init;
-(id)setSeparatorColor:(id)arg1 ;
-(id)setMessage:(id)arg1 ;
-(id)setTitleColor:(id)arg1 ;
-(id)setCustomView:(id)arg1 ;
-(id)setImageView:(id)arg1 ;
-(id)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)build;
-(id)setMessageFont:(id)arg1 ;
-(id)setSecondaryButtonTitle:(id)arg1 ;
-(id)setTertiaryButtonTitle:(id)arg1 ;
-(id)setTitleFont:(id)arg1 ;
-(id)setMessageColor:(id)arg1 ;
-(id)setHasDismissButton:(BOOL)arg1 ;
@end

