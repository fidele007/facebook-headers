/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInvalidating.h>

@protocol FBFeedbackObserverDelegate;
@class FBMemFeedback, FBUserSession, FBConsistentLookasideCacheObservationHandle, NSString;

@interface FBFeedbackObserver : NSObject <FBInvalidating> {

	FBMemFeedback* _feedback;
	FBUserSession* _session;
	FBConsistentLookasideCacheObservationHandle* _consistentLookasideCacheHandle;
	BOOL _invalidated;
	id<FBFeedbackObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFeedbackObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)initWithFeedback:(id)arg1 session:(id)arg2 ;
-(void)_feedbackDidUpdate:(id)arg1 ;
-(void)_observeUpdatesForFeedback:(id)arg1 ;
-(void)_triggerUpdateWithFeedback:(id)arg1 ;
-(void)setDelegate:(id<FBFeedbackObserverDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFeedbackObserverDelegate>)delegate;
-(void)invalidate;
-(BOOL)isValid;
@end

