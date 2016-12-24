/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedVisibleEdgeAwareGraphQLConnectionModificationResult.h>

@class FBGraphQLConnectionStoreStateTransitions, FBFeedDeduplicationResult, NSString;

@interface FBFeedDeduplicationModificationResult : NSObject <FBFeedVisibleEdgeAwareGraphQLConnectionModificationResult> {

	FBGraphQLConnectionStoreStateTransitions* _transitions;
	FBFeedDeduplicationResult* _result;

}

@property (nonatomic,readonly) FBFeedDeduplicationResult * result;              //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isModificationStillNeeded;
-(id)transitionsToApply;
-(id)initWithResult:(id)arg1 transitions:(id)arg2 ;
-(NSString *)description;
-(FBFeedDeduplicationResult *)result;
@end
