/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoActionSheetControllerDelegate <NSObject>
@optional
-(id)actionSheetControllerNeedsPhotoDeletionController:(id)arg1;
-(void)actionSheetController:(id)arg1 deletePhotoDidFail:(id)arg2;
-(void)actionSheetController:(id)arg1 deletePhotoDidSucceed:(id)arg2;
-(void)actionSheetController:(id)arg1 willDeletePhoto:(id)arg2;

@required
-(id)actionSheetController:(id)arg1 imageContentsForPhoto:(id)arg2;
-(id)actionSheetControllerPresentingViewController:(id)arg1;
-(BOOL)actionSheetController:(id)arg1 delegateHandleActionSheetOption:(unsigned long long)arg2 forPhoto:(id)arg3;

@end

