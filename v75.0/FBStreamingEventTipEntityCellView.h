/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBStreamingEventEntityCellView.h>

@class FBFacecastTipEventView;

@interface FBStreamingEventTipEntityCellView : FBStreamingEventEntityCellView {

	FBFacecastTipEventView* _tipEventView;

}
+(CGSize)sizeWithEvent:(id)arg1 withinBounds:(CGSize)arg2 ;
-(id)callToActionControl;
-(void)setIsCallToActionPerformed:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 style:(unsigned long long)arg3 scenePath:(id)arg4 ;
-(void)setEvent:(id)arg1 targetOwnerID:(id)arg2 ;
-(void)setCallToActionHidden:(BOOL)arg1 ;
-(BOOL)callToActionHidden;
-(void)layoutSubviews;
@end

