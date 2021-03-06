/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerSproutStyle : FBValueObject <NSCopying> {

	BOOL _compact;
	double _interiorSpacing;
	double _topBottomPadding;

}

@property (nonatomic,readonly) double interiorSpacing;               //@synthesize interiorSpacing=_interiorSpacing - In the implementation block
@property (nonatomic,readonly) double topBottomPadding;              //@synthesize topBottomPadding=_topBottomPadding - In the implementation block
@property (nonatomic,readonly) BOOL compact;                         //@synthesize compact=_compact - In the implementation block
-(double)topBottomPadding;
-(id)initWithInteriorSpacing:(double)arg1 topBottomPadding:(double)arg2 compact:(BOOL)arg3 ;
-(double)interiorSpacing;
-(BOOL)compact;
@end

