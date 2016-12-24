/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBBrowserRelatedStoryTileViewDelegate;
@class UIImageView, UILabel, NSString, FBUserSession;

@interface FBBrowserRelatedStoryTileView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _sourceLabel;
	NSString* _imageURL;
	NSString* _storyURL;
	FBUserSession* _session;
	id<FBBrowserRelatedStoryTileViewDelegate> _relatedStoryTileViewDelegate;

}
-(void)downloadImage;
-(void)storyTapped:(id)arg1 ;
-(id)initWithTitle:(id)arg1 source:(id)arg2 storyURL:(id)arg3 imageURL:(id)arg4 relatedStoryTileViewDelegate:(id)arg5 session:(id)arg6 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
