/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAppFeedSecondaryAction.h>

@protocol FBAppFeedModuleResourceProvider;
@class FBAppFeedActionRouter, NSString;

@interface FBAppFeedHideAction : NSObject <FBAppFeedSecondaryAction> {

	id<FBAppFeedModuleResourceProvider> _resourceProvider;
	FBAppFeedActionRouter* _actionRouter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithActionRouter:(id)arg1 resourceProvider:(id)arg2 ;
-(id)titleWithSponsorable:(id)arg1 ;
-(id)detailWithSponsorable:(id)arg1 ;
-(id)imageWithSponsorable:(id)arg1 ;
-(void)willPerformActionWithSponsorable:(id)arg1 parentUnit:(id)arg2 ;
-(void)performActionWithSponsorable:(id)arg1 parentUnit:(id)arg2 ;
-(BOOL)delayDismissalOfMenu;
@end

