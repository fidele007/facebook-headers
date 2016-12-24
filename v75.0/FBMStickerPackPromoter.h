/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMStickerManager, FBMStickerPurchaseManager;

@interface FBMStickerPackPromoter : NSObject {

	unsigned long long _layoutIdiom;
	FBUserSession* _session;
	FBMStickerManager* _stickerManager;
	FBMStickerPurchaseManager* _stickerPurchaseManager;

}
-(id)initWithLayoutIdiom:(unsigned long long)arg1 session:(id)arg2 ;
-(BOOL)_needPromoteStickPackWithId:(unsigned long long)arg1 ;
-(void)_queueDownloadForStickerPack:(id)arg1 ;
-(void)promoteStickerPacks:(id)arg1 ;
@end

