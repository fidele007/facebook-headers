/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBComposerActionSheetPresenter.h>

@class FBComposerActionSheet, UIView, NSString;

@interface FBSystemActionSheetPresenter : NSObject <UIActionSheetDelegate, FBComposerActionSheetPresenter> {

	id _currentActionListener;
	FBComposerActionSheet* _currentlyDisplayedActionSheet;
	id _presentationListener;
	UIView* _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithView:(id)arg1 presentationListener:(id)arg2 ;
-(void)presentActionSheet:(id)arg1 actionListener:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
