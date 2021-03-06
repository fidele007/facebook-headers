/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerDestinationOptionsProviderDelegate;
@class FBComposerAuthor, FBComposerPublishTarget, FBUserSession, NSArray, NSMutableArray, FBComposerDestinationOption, NSString;

@interface FBComposerDestinationOptionsProvider : NSObject <FBComposerCompositionStateChangedListener> {

	FBComposerAuthor* _defaultAuthor;
	FBComposerPublishTarget* _defaultPublishTarget;
	long long _defaultOptionIndex;
	FBUserSession* _userSession;
	NSArray* _options;
	NSMutableArray* _retrievedOptions;
	FBComposerDestinationOption* _defaultOption;
	FBComposerAuthor* _authorRepresentingLoggedInUser;
	FBComposerPublishTarget* _publishTargetRepresentingLoggedInUser;
	unsigned long long _destinationChoosingType;
	Class _policy;
	id<FBComposerDestinationOptionsProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerDestinationOptionsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(BOOL)shouldShowTimelineOption;
-(id)getDefaultAvailableOptions;
-(void)_prepareRetrievingOptions;
-(void)_processActorQueryResponse:(id)arg1 ;
-(void)_processPagesQueryResponse:(id)arg1 ;
-(void)_concludeRetrievingOptions:(/*^block*/id)arg1 ;
-(void)_processPageEdges:(id)arg1 ;
-(void)_processViewer:(id)arg1 ;
-(id)initForDefaultAuthor:(id)arg1 defaultPublishTarget:(id)arg2 userSession:(id)arg3 destinationChoosingType:(unsigned long long)arg4 ;
-(id)getDefaultSelectedOption;
-(id)retrieveAllOptions:(/*^block*/id)arg1 ;
-(id)optionForAvatar:(id)arg1 ;
-(void)setDelegate:(id<FBComposerDestinationOptionsProviderDelegate>)arg1 ;
-(id<FBComposerDestinationOptionsProviderDelegate>)delegate;
@end

