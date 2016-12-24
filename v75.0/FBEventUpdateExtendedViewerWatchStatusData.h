/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, FBEventContext;

@interface FBEventUpdateExtendedViewerWatchStatusData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _eventId;
	NSString* _watchStatus;
	NSArray* _tracking;
	FBEventContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * eventId;                       //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSString * watchStatus;                   //@synthesize watchStatus=_watchStatus - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                       //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) FBEventContext * context;                 //@synthesize context=_context - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)watchStatus;
-(void)setWatchStatus:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBEventContext *)context;
-(void)setTracking:(NSArray *)arg1 ;
-(void)setContext:(FBEventContext *)arg1 ;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(NSArray *)tracking;
@end

