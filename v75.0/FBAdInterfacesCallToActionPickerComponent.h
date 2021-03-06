/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBAdInterfacesCallToActionListener;
@class FBAdInterfacesComponentToolbox;

@interface FBAdInterfacesCallToActionPickerComponent : CKCompositeComponent {

	id<FBAdInterfacesCallToActionListener> _actionListener;
	FBAdInterfacesComponentToolbox* _toolbox;

}

@property (assign,nonatomic,__weak) id<FBAdInterfacesCallToActionListener> actionListener;              //@synthesize actionListener=_actionListener - In the implementation block
@property (nonatomic,retain) FBAdInterfacesComponentToolbox * toolbox;                                  //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithCallToActions:(id)arg1 validating:(BOOL)arg2 validationError:(id)arg3 actionListener:(id)arg4 toolbox:(id)arg5 editable:(BOOL)arg6 addCTAButton:(BOOL)arg7 indentationLevel:(unsigned long long)arg8 ;
-(FBAdInterfacesComponentToolbox *)toolbox;
-(void)setToolbox:(FBAdInterfacesComponentToolbox *)arg1 ;
-(void)setActionListener:(id<FBAdInterfacesCallToActionListener>)arg1 ;
-(id<FBAdInterfacesCallToActionListener>)actionListener;
@end

