/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedReactionUnitComponentFieldsProtocol;
@class FBReactionContext, FBMemModelObject;

@interface FBReactionEventDescriptionWithoutDateBrickComponentConfig : NSObject {

	FBReactionContext* _context;
	FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> _component;

}

@property (nonatomic,retain) FBReactionContext * context;                                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol> component;              //@synthesize component=_component - In the implementation block
-(FBReactionContext *)context;
-(void)setContext:(FBReactionContext *)arg1 ;
-(void)setComponent:(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedReactionUnitComponentFieldsProtocol>)component;
@end

