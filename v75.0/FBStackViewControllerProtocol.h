/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIViewController;


@protocol FBStackViewControllerProtocol <NSObject,FBAnalyticsInfoSource>
@property (nonatomic,copy,readonly) NSArray * modalPresentationItems; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> topModalItem; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> bottomModalItem; 
@property (nonatomic,readonly) UIViewController * topModalViewController; 
@property (nonatomic,readonly) UIViewController * bottomModalViewController; 
@optional
-(void)modalItem:(id)arg1 didUpdateOcclusionState:(BOOL)arg2;

@required
-(void)addModalItem:(id)arg1;
-(NSArray *)modalPresentationItems;
-(UIViewController *)topModalViewController;
-(UIViewController *)bottomModalViewController;
-(void)removeModalItem:(id)arg1;
-(id<FBModallyPresentableItem>)topModalItem;
-(id<FBModallyPresentableItem>)bottomModalItem;

@end
