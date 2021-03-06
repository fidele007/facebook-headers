/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCameraPermissionsRequesterDelegate.h>

@protocol FBInspirationUpdateHandler;
@class FBUserSession, FBInspirationUpdateActionCompletion, NSString;

@interface FBInspirationPermissionRequestActionHandler : NSObject <FBCameraPermissionsRequesterDelegate> {

	FBUserSession* _session;
	FBInspirationUpdateActionCompletion* _completion;
	id<FBInspirationUpdateHandler> _updateHandler;

}

@property (assign,nonatomic,__weak) id<FBInspirationUpdateHandler> updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)permissionRequesterWillRequestPermissions;
-(void)permissionRequesterDidGrantPermission:(unsigned long long)arg1 ;
-(void)permissionRequesterDidDenyPermission:(unsigned long long)arg1 ;
-(void)permissionRequesterDidGrantAllPermissions;
-(void)permissionEdutationPresenterDidGrantPermission:(unsigned long long)arg1 ;
-(void)permissionEdutationPresenterDidDenyPermission:(unsigned long long)arg1 ;
-(void)requestForPermissionWithPermissionRequester:(id)arg1 requiredPermission:(unsigned long long)arg2 completion:(id)arg3 ;
-(void)openSettingsApp;
-(id)initWithSession:(id)arg1 ;
-(void)setUpdateHandler:(id<FBInspirationUpdateHandler>)arg1 ;
-(id<FBInspirationUpdateHandler>)updateHandler;
@end

