/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMediaPickerViewControllerDelegate.h>
#import <Facebook/RCTFBSessionModule.h>

@class RCTBridge, FBUserSession, NSString;

@interface FBGroupCommerceNativeModule : NSObject <FBMediaPickerViewControllerDelegate, RCTFBSessionModule> {

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
+(id)__rct_export__410;
+(void)load;
-(void)mediaPickerPermissionDenied:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(long long)arg3 currentPhotoAssetShown:(id)arg4 ;
-(void)mediaPicker:(id)arg1 openURL:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(id)convertToReactProperties:(id)arg1 ;
-(void)openNativePhotoPicker:(id)arg1 ;
-(id)navigationCoordinatorForRootTag:(id)arg1 ;
-(id)reactViewControllerForRootTag:(id)arg1 ;
-(FBUserSession *)session;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(RCTBridge *)bridge;
@end

