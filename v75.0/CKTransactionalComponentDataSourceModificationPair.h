/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKTransactionalComponentDataSourceStateModifying;
@class CKTransactionalComponentDataSourceState;

@interface CKTransactionalComponentDataSourceModificationPair : NSObject {

	id<CKTransactionalComponentDataSourceStateModifying> _modification;
	CKTransactionalComponentDataSourceState* _state;

}

@property (nonatomic,readonly) id<CKTransactionalComponentDataSourceStateModifying> modification;              //@synthesize modification=_modification - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * state;                                //@synthesize state=_state - In the implementation block
-(id)initWithModification:(id)arg1 state:(id)arg2 ;
-(CKTransactionalComponentDataSourceState *)state;
-(id<CKTransactionalComponentDataSourceStateModifying>)modification;
@end

