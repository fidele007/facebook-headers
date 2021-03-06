/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTEventEmitter.h>
#import <Facebook/RCTBridgeModule.h>
#import <Facebook/RCTValueAnimatedNodeObserver.h>
#import <Facebook/RCTEventDispatcherObserver.h>

@class RCTNativeAnimatedNodesManager, NSMutableArray, NSString, RCTBridge;

@interface RCTNativeAnimatedModule : RCTEventEmitter <RCTBridgeModule, RCTValueAnimatedNodeObserver, RCTEventDispatcherObserver> {

	RCTNativeAnimatedNodesManager* _nodesManager;
	NSMutableArray* _operations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__541;
+(id)__rct_export__723;
+(id)__rct_export__956;
+(id)__rct_export__1098;
+(id)__rct_export__460;
+(id)__rct_export__622;
+(id)__rct_export__794;
+(id)__rct_export__875;
+(id)__rct_export__1027;
+(id)__rct_export__1179;
+(id)__rct_export__12510;
+(id)__rct_export__13211;
+(id)__rct_export__13912;
+(id)__rct_export__14713;
+(id)__rct_export__15714;
+(id)__rct_export__16515;
+(void)load;
-(void)batchDidComplete;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(id)supportedEvents;
-(void)animatedNode:(id)arg1 didUpdateValue:(double)arg2 ;
-(void)createAnimatedNode:(id)arg1 config:(id)arg2 ;
-(void)connectAnimatedNodes:(id)arg1 childTag:(id)arg2 ;
-(void)disconnectAnimatedNodes:(id)arg1 childTag:(id)arg2 ;
-(void)startAnimatingNode:(id)arg1 nodeTag:(id)arg2 config:(id)arg3 endCallback:(/*^block*/id)arg4 ;
-(void)setAnimatedNodeValue:(id)arg1 value:(id)arg2 ;
-(void)setAnimatedNodeOffset:(id)arg1 offset:(id)arg2 ;
-(void)flattenAnimatedNodeOffset:(id)arg1 ;
-(void)extractAnimatedNodeOffset:(id)arg1 ;
-(void)connectAnimatedNodeToView:(id)arg1 viewTag:(id)arg2 ;
-(void)disconnectAnimatedNodeFromView:(id)arg1 viewTag:(id)arg2 ;
-(void)dropAnimatedNode:(id)arg1 ;
-(void)addAnimatedEventToView:(id)arg1 eventName:(id)arg2 eventMapping:(id)arg3 ;
-(void)removeAnimatedEventFromView:(id)arg1 eventName:(id)arg2 ;
-(void)eventDispatcherWillDispatchEvent:(id)arg1 ;
-(void)startListeningToAnimatedNodeValue:(id)arg1 ;
-(void)stopListeningToAnimatedNodeValue:(id)arg1 ;
-(void)dealloc;
-(void)stopAnimation:(id)arg1 ;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

