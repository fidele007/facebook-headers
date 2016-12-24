/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@protocol FBReactionActionAdapter, FBQueriedReactionUnitFieldsProtocol;
@class MKPointAnnotation, FBReactionContext;

@interface FBReactionPageMapWithDistanceBrickComponent : CKComponent <FBReactionBrickComponent> {

	id<FBReactionActionAdapter> _action;
	SCD_Struct_FB48 _region;
	MKPointAnnotation* _annotation;
	FBReactionContext* _context;
	id<FBQueriedReactionUnitFieldsProtocol> _unit;

}
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
+(SCD_Struct_FB47)createRegionWithLocation:(id)arg1 zoomLevel:(long long)arg2 ;
+(id)createAnnotationWithTitle:(id)arg1 location:(id)arg2 ;
-(void)mapViewTapped:(id)arg1 ;
@end
