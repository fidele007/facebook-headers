/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMStickerInputViewDelegate <NSObject>
@optional
-(void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stickerInputView:(id)arg1 didTapTabWithTitle:(id)arg2;

@required
-(void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2;
-(void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2;

@end

