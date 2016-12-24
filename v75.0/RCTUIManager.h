/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTBridgeModule.h>
#import <Facebook/RCTInvalidating.h>

@class NSMutableSet, NSMutableArray, RCTLayoutAnimation, NSMutableDictionary, NSDictionary, RCTBridge, NSString;

@interface RCTUIManager : NSObject <RCTBridgeModule, RCTInvalidating> {

	NSMutableSet* _rootViewTags;
	NSMutableArray* _pendingUIBlocks;
	RCTLayoutAnimation* _layoutAnimation;
	NSMutableSet* _viewsToBeDeleted;
	NSMutableDictionary* _shadowViewRegistry;
	NSMutableDictionary* _viewRegistry;
	NSDictionary* _componentDataByName;
	NSMutableSet* _bridgeTransactionListeners;
	long long _currentInterfaceOrientation;
	BOOL _unsafeFlushUIChangesBeforeBatchEnds;
	RCTBridge* _bridge;

}

@property (assign) BOOL unsafeFlushUIChangesBeforeBatchEnds;                          //@synthesize unsafeFlushUIChangesBeforeBatchEnds=_unsafeFlushUIChangesBeforeBatchEnds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__7240;
+(id)__rct_export__8311;
+(id)__rct_export__8542;
+(id)__rct_export__8783;
+(id)__rct_export__9094;
+(id)__rct_export__9975;
+(id)__rct_export__10446;
+(id)__rct_export__10567;
+(id)__rct_export__10678;
+(id)__rct_export__10759;
+(id)__rct_export__109810;
+(id)__rct_export__119511;
+(id)__rct_export__122912;
+(id)__rct_export__125713;
+(id)__rct_export__130814;
+(id)__rct_export__132415;
+(id)__rct_export__134016;
+(id)__rct_export__138617;
+(id)__rct_export__145518;
+(id)__rct_export__146519;
+(id)__rct_export__155020;
+(id)__rct_export__156721;
+(id)JSResponder;
+(void)load;
-(id)viewForReactTag:(id)arg1 ;
-(id)constantsToExport;
-(void)batchDidComplete;
-(void)partialBatchDidFlush;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)addUIBlock:(/*^block*/id)arg1 ;
-(BOOL)unsafeFlushUIChangesBeforeBatchEnds;
-(void)setUnsafeFlushUIChangesBeforeBatchEnds:(BOOL)arg1 ;
-(void)rootViewForReactTag:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)allocateRootTag;
-(void)didReceiveNewContentSizeMultiplier;
-(void)interfaceOrientationWillChange:(id)arg1 ;
-(void)_amendPendingUIBlocksWithStylePropagationUpdateForShadowView:(id)arg1 ;
-(void)flushUIBlocks;
-(void)manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6 ;
-(void)_purgeChildren:(id)arg1 fromRegistry:(id)arg2 ;
-(void)_manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6 registry:(id)arg7 ;
-(id)_childrenToRemoveFromContainer:(id)arg1 atIndices:(id)arg2 ;
-(void)_removeChildren:(id)arg1 fromContainer:(id)arg2 withAnimation:(id)arg3 ;
-(void)_removeChildren:(id)arg1 fromContainer:(id)arg2 ;
-(void)_layoutAndMount;
-(/*^block*/id)uiBlockWithLayoutUpdateForRootView:(id)arg1 ;
-(id)_rootTagForReactTag:(id)arg1 ;
-(id)shadowViewRegistry;
-(id)viewRegistry;
-(void)registerRootView:(id)arg1 withSizeFlexibility:(long long)arg2 ;
-(void)setIntrinsicContentSize:(CGSize)arg1 forView:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 forView:(id)arg2 ;
-(void)removeSubviewsFromContainerWithID:(id)arg1 ;
-(void)removeRootView:(id)arg1 ;
-(void)replaceExistingNonRootView:(id)arg1 withView:(id)arg2 ;
-(void)setChildren:(id)arg1 reactTags:(id)arg2 ;
-(void)createView:(id)arg1 viewName:(id)arg2 rootTag:(id)arg3 props:(id)arg4 ;
-(void)updateView:(id)arg1 viewName:(id)arg2 props:(id)arg3 ;
-(void)blur:(id)arg1 ;
-(void)findSubviewIn:(id)arg1 atPoint:(CGPoint)arg2 callback:(/*^block*/id)arg3 ;
-(void)dispatchViewManagerCommand:(id)arg1 commandID:(long long)arg2 commandArgs:(id)arg3 ;
-(void)measure:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)measureInWindow:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)viewIsDescendantOf:(id)arg1 ancestor:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)measureLayout:(id)arg1 relativeTo:(id)arg2 errorCallback:(/*^block*/id)arg3 callback:(/*^block*/id)arg4 ;
-(void)measureLayoutRelativeToParent:(id)arg1 errorCallback:(/*^block*/id)arg2 callback:(/*^block*/id)arg3 ;
-(void)measureViewsInRect:(CGRect)arg1 parentView:(id)arg2 errorCallback:(/*^block*/id)arg3 callback:(/*^block*/id)arg4 ;
-(void)takeSnapshot:(id)arg1 withOptions:(id)arg2 resolve:(/*^block*/id)arg3 reject:(/*^block*/id)arg4 ;
-(void)setJSResponder:(id)arg1 blockNativeResponder:(BOOL)arg2 ;
-(void)clearJSResponder;
-(void)configureNextLayoutAnimation:(id)arg1 withCallback:(/*^block*/id)arg2 errorCallback:(/*^block*/id)arg3 ;
-(void)getContentSizeMultiplier:(/*^block*/id)arg1 ;
-(void)setNeedsLayout;
-(void)invalidate;
-(void)focus:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

