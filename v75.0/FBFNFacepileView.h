/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFNFacepileViewDataSource, FBFNFacepileViewDelegate;
@class FBFNFacepileAppearanceConfiguration, NSAttributedString, NSArray, FBRichTextView;

@interface FBFNFacepileView : UIView {

	FBFNFacepileAppearanceConfiguration* _appearanceConfiguration;
	id<FBFNFacepileViewDataSource> _dataSource;
	unsigned long long _layout;
	long long _friendsCount;
	NSAttributedString* _titleText;
	NSArray* _facepileImageViews;
	FBRichTextView* _titleTextView;
	id<FBFNFacepileViewDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long layout;                               //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic,__weak) id<FBFNFacepileViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAppearanceConfiguration:(id)arg1 dataSource:(id)arg2 ;
-(void)_didTapTitleText;
-(double)_facepileHeight;
-(CGRect)layoutFixedHeightFacepile:(double)arg1 ;
-(CGRect)layoutVariableHeightFacepile:(double)arg1 ;
-(void)_buildTextForLayout:(unsigned long long)arg1 ;
-(void)_buildFacepile:(unsigned long long)arg1 ;
-(id)_createStringAttributeForObject:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)_positionForPersonAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(CGSize)_imageSizeAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)_processImage:(id)arg1 forImageView:(id)arg2 ;
-(unsigned long long)_personIndexForPosition:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBFNFacepileViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFNFacepileViewDelegate>)delegate;
-(unsigned long long)layout;
-(void)_updateLayout;
@end

