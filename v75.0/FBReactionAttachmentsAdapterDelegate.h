/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionAttachmentsAdapterDelegate <NSObject>
@optional
-(void)performAction:(SEL)arg1 forReactionActionAdapter:(id)arg2 withContext:(id)arg3;

@required
-(void)switchToNewOverlayWithPageId:(id)arg1;
-(void)hideUnit:(id)arg1 forReactionAttachmentsAdapter:(id)arg2;
-(void)replaceUnit:(id)arg1 withUnit:(id)arg2 forReactionAttachmentsAdapter:(id)arg3;
-(void)cardHeightDidChangeForAttachmentsAdapter:(id)arg1;

@end

