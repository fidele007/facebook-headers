/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSNumber, FBEventContext;

@interface FBLightweightEventCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _threadId;
	NSNumber* _eventTime;
	FBEventContext* _context;
	NSString* _eventType;
	NSString* _title;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * threadId;                      //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,copy) NSNumber * eventTime;                     //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * eventType;                     //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setEventTime:(NSNumber *)arg1 ;
-(NSNumber *)eventTime;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(FBEventContext *)context;
-(void)setContext:(FBEventContext *)arg1 ;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)eventType;
-(NSString *)threadId;
-(void)setThreadId:(NSString *)arg1 ;
@end
