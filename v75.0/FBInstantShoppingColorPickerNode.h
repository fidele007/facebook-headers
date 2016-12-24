/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ASDisplayNode.h>

@protocol FBInstantShoppingColorPickerNodeDelegate;
@class FBUserSession;

@interface FBInstantShoppingColorPickerNode : ASDisplayNode {

	FBUserSession* _session;
	double _textColorPosition;
	id<FBInstantShoppingColorPickerNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantShoppingColorPickerNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(void)_addTextBoxToScrollView:(id)arg1 withColor:(id)arg2 index:(unsigned long long)arg3 selectedIndex:(unsigned long long)arg4 ;
-(void)_addCircleToScrollView:(id)arg1 withColor:(id)arg2 index:(unsigned long long)arg3 selectedIndex:(unsigned long long)arg4 ;
-(void)handleCircleTap:(id)arg1 ;
-(void)handleButtonTap:(id)arg1 ;
-(id)initWithColorTypes:(id)arg1 selectedIndex:(unsigned long long)arg2 session:(id)arg3 ;
-(void)setDelegate:(id<FBInstantShoppingColorPickerNodeDelegate>)arg1 ;
-(id<FBInstantShoppingColorPickerNodeDelegate>)delegate;
@end
