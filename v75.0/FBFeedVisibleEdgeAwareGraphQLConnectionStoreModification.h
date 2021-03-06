/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreStateModifying.h>

@protocol FBFeedVisibleEdgeAwareGraphQLConnectionStoreModificationDelegate;
@class NSArray, NSMutableDictionary, NSLock, NSString;

@interface FBFeedVisibleEdgeAwareGraphQLConnectionStoreModification : NSObject <FBGraphQLConnectionStoreStateModifying> {

	NSArray* _visibleEdges;
	/*^block*/id _modificationResultBlock;
	NSMutableDictionary* _results;
	NSLock* _resultsLock;
	id<FBFeedVisibleEdgeAwareGraphQLConnectionStoreModificationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<FBFeedVisibleEdgeAwareGraphQLConnectionStoreModificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transitionsFromState:(id)arg1 ;
-(BOOL)willApplyTransitions:(id)arg1 asynchronouslyComputedFromState:(id)arg2 ;
-(id)initWithVisibleEdges:(id)arg1 modificationResultBlock:(/*^block*/id)arg2 delegate:(id)arg3 ;
-(void)recordResult:(id)arg1 forTransitions:(id)arg2 ;
-(id)resultForTransitions:(id)arg1 ;
-(id<FBFeedVisibleEdgeAwareGraphQLConnectionStoreModificationDelegate>)delegate;
@end

