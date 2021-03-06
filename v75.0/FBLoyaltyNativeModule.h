/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/RCTFBSessionModule.h>

@class NSString, RCTBridge, FBUserSession;

@interface FBLoyaltyNativeModule : NSObject <UIAlertViewDelegate, RCTFBSessionModule> {

	BOOL _showAttentionGrabbingTags;
	BOOL _showMessageInBrowse;
	BOOL _showSearchUpsell;
	BOOL _showTitleAsImagePlaceholder;
	BOOL _useFixedHeightImages;
	BOOL _showTitleInBrowse;
	BOOL _showTitleInSearch;
	BOOL _showTopCategoryUpsell;
	BOOL _useLowResInitialImageInBrowse;
	BOOL _usePreviewPayloadInBrowse;
	BOOL _useStoryView;
	NSString* _topSectionType;
	RCTBridge* _bridge;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (assign,nonatomic,__weak) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
+(id)moduleName;
+(void)load;
-(id)constantsToExport;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)updateLoyaltyNotificationsSection;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(RCTBridge *)bridge;
@end

