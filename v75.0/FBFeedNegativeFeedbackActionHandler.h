/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedSecondaryActionHandler.h>

@class NSString;

@interface FBFeedNegativeFeedbackActionHandler : NSObject <FBFeedSecondaryActionHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * handlerName; 
+(BOOL)canShowGuidedActions;
+(void)setCanShowGuidedActions:(BOOL)arg1 ;
-(id)actionsForFeedUnit:(id)arg1 element:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4 ;
-(id)_secondaryActionsForNegativeFeedbackActions:(id)arg1 target:(id)arg2 context:(id)arg3 helper:(id)arg4 feedUnit:(id)arg5 ;
-(id)_classicActionsForLayoutIdiom:(unsigned long long)arg1 helper:(id)arg2 ;
-(BOOL)_viewingOwnedPageForHelper:(id)arg1 ;
@end

