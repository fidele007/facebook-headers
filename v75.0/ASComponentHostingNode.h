/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/CKComponentStateListener.h>

@protocol CKComponentSizeRangeProviding, OS_dispatch_queue, ASComponentHostingNodeDelegate;
@class NSObject, ASDisplayNode, NSValue, NSSet, NSString;

@interface ASComponentHostingNode : ASDisplayNode <CKComponentStateListener> {

	Class _componentProvider;
	id<CKComponentSizeRangeProviding> _sizeRangeProvider;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	ASDisplayNode* _containerNode;
	CKComponentLayout* _computedLayout;
	CKComponentLayout* _mountedLayout;
	NSValue* _constrainedSize;
	NSSet* _mountedComponents;
	ASComponentHostingViewInputs* _pendingInputs;
	id<ASComponentHostingNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASComponentHostingNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)updateModel:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)updateContext:(id)arg1 mode:(unsigned long long)arg2 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 model:(id)arg3 context:(id)arg4 ;
-(tuple<bool, CKBuildComponentResult, CKComponentLayout>*)_reloadComponent;
-(void)_setNeedsUpdateWithMode:(unsigned long long)arg1 ;
-(void)_scheduleReloadComponent;
-(pair<CKBuildComponentResult, CKComponentLayout>*)_buildComponentWithInputs:(const ASComponentHostingViewInputs*)arg1 boundingSize:(CGSize)arg2 ;
-(void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(/*^block*/id)arg3 mode:(unsigned long long)arg4 ;
-(void)setDelegate:(id<ASComponentHostingNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<ASComponentHostingNodeDelegate>)delegate;
-(void)layout;
@end
