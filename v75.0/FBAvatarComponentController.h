/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDetailComponentController.h>

@protocol FBEntity;
@class FBUserSession;

@interface FBAvatarComponentController : FBDetailComponentController {

	FBUserSession* _session;
	id<FBEntity> _entity;

}

@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBEntity> entity;                  //@synthesize entity=_entity - In the implementation block
-(void)setupCell;
-(id)initWithEntity:(id)arg1 session:(id)arg2 ;
-(void)didReceiveDetailResponse;
-(void)sessionWillInvalidate;
-(void)didBeginDetailResponse;
-(void)didReceiveFailureResponse:(id)arg1 ;
-(void)dealloc;
-(id<FBEntity>)entity;
-(FBUserSession *)session;
@end

