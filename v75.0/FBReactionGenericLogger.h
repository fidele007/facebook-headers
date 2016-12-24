/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionLogging.h>

@protocol FBReactionInteractionLoggingIndexProvider;
@class NSString, FBReactionSessionInfo;

@interface FBReactionGenericLogger : NSObject <FBReactionLogging> {

	NSString* _analyticsModule;
	FBReactionSessionInfo* _reactionSessionInfo;
	id<FBReactionInteractionLoggingIndexProvider> _interactionLoggingIndexProvider;

}

@property (assign,nonatomic,__weak) id<FBReactionInteractionLoggingIndexProvider> interactionLoggingIndexProvider;              //@synthesize interactionLoggingIndexProvider=_interactionLoggingIndexProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logUserInteraction:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(id)initWithAnalyticsModule:(id)arg1 reactionSessionInfo:(id)arg2 ;
-(id<FBReactionInteractionLoggingIndexProvider>)interactionLoggingIndexProvider;
-(void)setInteractionLoggingIndexProvider:(id<FBReactionInteractionLoggingIndexProvider>)arg1 ;
@end
