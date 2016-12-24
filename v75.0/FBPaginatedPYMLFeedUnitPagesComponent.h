/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBFeedInfiniteHScrollComponent, FBFeedToolbox, CKComponent, FBMemPage;

@interface FBPaginatedPYMLFeedUnitPagesComponent : CKCompositeComponent {

	FBFeedInfiniteHScrollComponent* _hScrollComponent;
	FBFeedToolbox* _toolbox;
	CKComponent* _navedAwayFromPageComponent;
	FBMemPage* _navedAwayFromPage;

}

@property (nonatomic,readonly) FBFeedInfiniteHScrollComponent * hScrollComponent;              //@synthesize hScrollComponent=_hScrollComponent - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                        //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,retain) CKComponent * navedAwayFromPageComponent;                         //@synthesize navedAwayFromPageComponent=_navedAwayFromPageComponent - In the implementation block
@property (nonatomic,retain) FBMemPage * navedAwayFromPage;                                    //@synthesize navedAwayFromPage=_navedAwayFromPage - In the implementation block
+(id)newWithUnit:(id)arg1 toolbox:(id)arg2 ;
-(FBFeedToolbox *)toolbox;
-(FBFeedInfiniteHScrollComponent *)hScrollComponent;
-(CKComponent *)navedAwayFromPageComponent;
-(void)setNavedAwayFromPageComponent:(CKComponent *)arg1 ;
-(FBMemPage *)navedAwayFromPage;
-(void)setNavedAwayFromPage:(FBMemPage *)arg1 ;
@end
