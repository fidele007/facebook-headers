/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBInspirationExperimentConfiguration;
@class FBUserSession;

@interface FBInspirationStateManager : NSObject {

	FBUserSession* _session;
	id<FBInspirationExperimentConfiguration> _context;
	BOOL _shouldUseSnacksCamera;
	BOOL _hasAcceptedAllRequiredPermissions;

}

@property (nonatomic,readonly) BOOL shouldEnableInlineSnacks; 
@property (nonatomic,readonly) BOOL shouldEnableStickySnacks; 
@property (nonatomic,readonly) BOOL shouldShowCameraInLeftSidebar; 
@property (nonatomic,readonly) BOOL shouldShowNUX; 
@property (nonatomic,readonly) BOOL shouldShowNUXAtTheEnding; 
@property (nonatomic,readonly) BOOL shouldShowNUXAtTheEndingInNullState; 
@property (nonatomic,readonly) BOOL shouldHidePublisherBar; 
@property (nonatomic,readonly) BOOL shouldUseSnacksCamera;                                  //@synthesize shouldUseSnacksCamera=_shouldUseSnacksCamera - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCameraButtonInNavigationBar; 
@property (nonatomic,readonly) BOOL hasAcceptedAllRequiredPermissions;                      //@synthesize hasAcceptedAllRequiredPermissions=_hasAcceptedAllRequiredPermissions - In the implementation block
@property (nonatomic,readonly) BOOL isLeftCameraEnabledButNotStartAppToCamera; 
@property (nonatomic,readonly) BOOL useSinglePlaneNavigation; 
-(BOOL)shouldStartToCamera;
-(BOOL)useSinglePlaneNavigation;
-(BOOL)shouldShowCameraButtonInNavigationBar;
-(BOOL)shouldShowCameraInLeftSidebar;
-(BOOL)shouldShowNUX;
-(BOOL)isLeftCameraEnabledButNotStartAppToCamera;
-(BOOL)shouldHidePublisherBar;
-(BOOL)shouldEnableStickySnacks;
-(BOOL)shouldEnableInlineSnacks;
-(BOOL)shouldShowNUXAtTheEnding;
-(void)nuxDidShowLastPage;
-(BOOL)shouldShowNUXAtTheEndingInNullState;
-(BOOL)_shouldEnableCameraInLeftSidebar;
-(BOOL)_shouldShowNUXAtTheBeginning;
-(BOOL)shouldUseSnacksCamera;
-(BOOL)hasAcceptedAllRequiredPermissions;
-(id)initWithSession:(id)arg1 ;
@end

