/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ASDisplayNode.h>

@protocol _FBNativeArticleScrollNodeDelegate;
@class FBNativeArticleScrollView;

@interface _FBNativeArticleScrollNode : ASDisplayNode {

	id<_FBNativeArticleScrollNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_FBNativeArticleScrollNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNativeArticleScrollView * scrollView; 
-(void)_staticInitialize;
-(void)subnodeDisplayDidFinish:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 delegate:(id)arg2 scrollViewDelegate:(id)arg3 scrollViewGestureHandler:(id)arg4 ;
-(void)setDelegate:(id<_FBNativeArticleScrollNodeDelegate>)arg1 ;
-(id<_FBNativeArticleScrollNodeDelegate>)delegate;
-(FBNativeArticleScrollView *)scrollView;
-(void)didLoad;
@end

