/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemPage, FBMemPageCallToAction, FBPlacesComponentToolbox;

@interface FBPlacesResultOrderNowComponent : CKCompositeComponent {

	FBMemPage* _place;
	FBMemPageCallToAction* _callToAction;
	FBPlacesComponentToolbox* _toolbox;

}

@property (nonatomic,retain) FBMemPage * place;                                 //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) FBMemPageCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,retain) FBPlacesComponentToolbox * toolbox;                //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithPlace:(id)arg1 callToAction:(id)arg2 toolbox:(id)arg3 ;
-(FBPlacesComponentToolbox *)toolbox;
-(FBMemPageCallToAction *)callToAction;
-(void)setToolbox:(FBPlacesComponentToolbox *)arg1 ;
-(void)setCallToAction:(FBMemPageCallToAction *)arg1 ;
-(void)didTapOrder:(id)arg1 ;
-(FBMemPage *)place;
-(void)setPlace:(FBMemPage *)arg1 ;
@end

