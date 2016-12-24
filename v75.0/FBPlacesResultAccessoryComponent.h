/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemPage, FBPlacesComponentToolbox;

@interface FBPlacesResultAccessoryComponent : CKCompositeComponent {

	BOOL _shouldShowSaveButton;
	FBMemPage* _place;
	FBPlacesComponentToolbox* _toolbox;

}

@property (nonatomic,retain) FBMemPage * place;                               //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) FBPlacesComponentToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSaveButton;                       //@synthesize shouldShowSaveButton=_shouldShowSaveButton - In the implementation block
+(id)newWithPlace:(id)arg1 toolbox:(id)arg2 showSaveButton:(BOOL)arg3 ;
-(FBPlacesComponentToolbox *)toolbox;
-(void)setToolbox:(FBPlacesComponentToolbox *)arg1 ;
-(void)setShouldShowSaveButton:(BOOL)arg1 ;
-(BOOL)shouldShowSaveButton;
-(FBMemPage *)place;
-(void)setPlace:(FBMemPage *)arg1 ;
@end

