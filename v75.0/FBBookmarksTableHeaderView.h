/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@class FBRichTextView, NSString;

@interface FBBookmarksTableHeaderView : UIView <FBAccessibilityInvalidationEventsListener> {

	BOOL _editing;
	FBRichTextView* _titleView;
	FBRichTextView* _editView;
	/*^block*/id _editAction;
	FBBookmarksTableHeaderViewOptions _options;
	double _horizontalPadding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForTitle:(id)arg1 ;
+(id)_configuredTextView;
-(void)didReceiveAccessibilityInvalidation;
-(id)initWithTitle:(id)arg1 editTapAction:(/*^block*/id)arg2 options:(FBBookmarksTableHeaderViewOptions)arg3 ;
-(void)_editButtonTapped;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
@end

