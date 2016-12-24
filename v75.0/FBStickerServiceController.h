/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStickerUpdateServiceListener.h>

@class FBUserSession, FBStickerUpdateService, FBMStickerTrayConfigSyncCoordinator, NSString;

@interface FBStickerServiceController : NSObject <FBStickerUpdateServiceListener> {

	FBUserSession* _session;
	unsigned long long _layoutIdiom;
	FBStickerUpdateService* _updateService;
	FBMStickerTrayConfigSyncCoordinator* _syncCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(BOOL)_isUpdateEnabled;
-(void)_updateStickerResources;
-(void)_startSyncIfEnabled;
-(void)_stopSyncService;
-(BOOL)_isSyncEnabled;
-(void)_startSyncService;
-(void)stickerUpdateWillStart:(id)arg1 ;
-(void)stickerUpdateDidFinish:(id)arg1 ;
-(void)stickerUpdateDidFailWithError:(id)arg1 ;
-(void)startServices;
-(void)stopServices;
@end

