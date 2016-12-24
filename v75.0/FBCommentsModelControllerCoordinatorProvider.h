/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCommentsModelControllerCoordinatorLifecycleManaging.h>
#import <Facebook/FBCommentsModelControllerProviderProtocol.h>

@class NSMapTable, FBUserSession, NSCountedSet, NSString;

@interface FBCommentsModelControllerCoordinatorProvider : NSObject <FBCommentsModelControllerCoordinatorLifecycleManaging, FBCommentsModelControllerProviderProtocol> {

	NSMapTable* _configurationToCoodinatorMap;
	FBUserSession* _session;
	NSCountedSet* _activeCoordinators;

}

@property (nonatomic,readonly) FBUserSession * session;                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSCountedSet * activeCoordinators;              //@synthesize activeCoordinators=_activeCoordinators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)controllerWithConfiguration:(id)arg1 ;
-(id)coordinatorWithConfiguration:(id)arg1 ;
-(void)commentsModelControllerCoordinatorDidBeginActivity:(id)arg1 ;
-(void)commentsModelControllerCoordinatorDidEndActivity:(id)arg1 ;
-(NSCountedSet *)activeCoordinators;
-(id)init;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end

