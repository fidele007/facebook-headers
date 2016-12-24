/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNAttachmentCellElementController.h>

@protocol MNAttachmentView;
@class UIView, FBMThreadKey, NSString;

@interface MNDefaultAttachmentCellElementController : NSObject <MNAttachmentCellElementController> {

	UIView*<MNAttachmentView> _attachmentView;
	FBMThreadKey* _threadKey;

}

@property (nonatomic,copy,readonly) UIView*<MNAttachmentView> attachmentView;              //@synthesize attachmentView=_attachmentView - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                              //@synthesize threadKey=_threadKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)willUpdateWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)_setViewModel:(id)arg1 threadKey:(id)arg2 ;
-(FBMThreadKey *)threadKey;
-(UIView*<MNAttachmentView>)attachmentView;
@end

