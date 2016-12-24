/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionCenteredFooterView.h>

@protocol FBQueriedReactionUnitComponentFieldsProtocol;
@class FBReactionContext, FBMemModelObject;

@interface FBReactionCenteredFooterViewWrapper : FBReactionCenteredFooterView {

	unsigned long long _position;
	FBReactionContext* _context;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _component;

}

@property (assign,nonatomic) unsigned long long position;                                                            //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) FBReactionContext * context;                                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> component;              //@synthesize component=_component - In the implementation block
-(void)setPosition:(unsigned long long)arg1 ;
-(FBReactionContext *)context;
-(unsigned long long)position;
-(void)setContext:(FBReactionContext *)arg1 ;
-(void)setComponent:(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)component;
@end

