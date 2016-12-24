/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUpdateHandler.h>

@protocol FBAutoUpdaterHandlerDelegate, FBAutoUpdaterAutomaticRestartBehavior;
@interface FBAutoUpdaterHandler : FBUpdateHandler {

	id<FBAutoUpdaterHandlerDelegate> _installDelegate;
	id<FBAutoUpdaterAutomaticRestartBehavior> _restartBehavior;

}

@property (assign,nonatomic,__weak) id<FBAutoUpdaterHandlerDelegate> installDelegate;                //@synthesize installDelegate=_installDelegate - In the implementation block
@property (nonatomic,retain) id<FBAutoUpdaterAutomaticRestartBehavior> restartBehavior;              //@synthesize restartBehavior=_restartBehavior - In the implementation block
-(id<FBAutoUpdaterHandlerDelegate>)installDelegate;
-(void)setInstallDelegate:(id<FBAutoUpdaterHandlerDelegate>)arg1 ;
-(id<FBAutoUpdaterAutomaticRestartBehavior>)restartBehavior;
-(void)setRestartBehavior:(id<FBAutoUpdaterAutomaticRestartBehavior>)arg1 ;
-(id)deviceStateRequirementsForUpdate:(id)arg1 ;
-(void)processUpdate:(id)arg1 ;
-(void)cancel;
@end

