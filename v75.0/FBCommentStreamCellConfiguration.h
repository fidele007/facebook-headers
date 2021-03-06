/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBCommentStreamCellConfiguration : FBValueObject <NSCopying> {

	BOOL _highlighted;
	BOOL _disabled;
	BOOL _focused;
	BOOL _dimmed;
	id _model;

}

@property (nonatomic,copy,readonly) id model;                 //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) BOOL disabled;                 //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) BOOL focused;                  //@synthesize focused=_focused - In the implementation block
@property (nonatomic,readonly) BOOL dimmed;                   //@synthesize dimmed=_dimmed - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithModel:(id)arg1 highlighted:(BOOL)arg2 disabled:(BOOL)arg3 focused:(BOOL)arg4 dimmed:(BOOL)arg5 ;
-(id)model;
-(BOOL)disabled;
-(BOOL)highlighted;
-(BOOL)dimmed;
-(BOOL)focused;
@end

