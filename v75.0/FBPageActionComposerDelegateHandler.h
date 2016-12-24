/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBPublishingCompletionEventListener.h>

@class FBUserSession, FBPageActionHandlerToolbox, FBPublishingCompletionEventForwarder, NSString;

@interface FBPageActionComposerDelegateHandler : NSObject <FBComposerFlowDelegate, FBPublishingCompletionEventListener> {

	FBUserSession* _session;
	FBPageActionHandlerToolbox* _toolbox;
	FBPublishingCompletionEventForwarder* _publishingEventForwarder;
	BOOL _refreshViewAfterFinishing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)cleanUpPublicationHandling;
-(void)publicationCompletedThroughTerminalFailureOfPublication:(id)arg1 withError:(id)arg2 ;
-(void)publicationCompletedThroughSuccessOfPublication:(id)arg1 withResponse:(id)arg2 ;
-(void)publicationCompletedThroughCancellationOfPublication:(id)arg1 ;
-(id)initWithSession:(id)arg1 toolbox:(id)arg2 refreshViewAfterFinshing:(BOOL)arg3 ;
-(void)_startTrackingPublicationWithIdentifier:(id)arg1 ;
@end
