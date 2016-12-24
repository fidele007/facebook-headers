/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBSearchResultsContext;

@interface FBGraphSearchResultsCelebrityContextModulePhotoGridComponent : CKCompositeComponent {

	BOOL _hasAnnimation;
	unsigned long long _state;
	FBSearchResultsContext* _context;

}

@property (nonatomic,readonly) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnimation;                            //@synthesize hasAnnimation=_hasAnnimation - In the implementation block
@property (nonatomic,readonly) FBSearchResultsContext * context;              //@synthesize context=_context - In the implementation block
+(id)newWithModuleEdgeModel:(id)arg1 hasAnnimation:(BOOL)arg2 context:(id)arg3 ;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(BOOL)hasAnnimation;
-(unsigned long long)state;
-(FBSearchResultsContext *)context;
@end

