/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CSFBGraphQLExecutorExport.h>

@class FBUserSession;

@interface CSGraphQLExecutor : NSObject <CSFBGraphQLExecutorExport> {

	FBUserSession* _session;

}

@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
-(void)executeWithRequest:(id)arg1 callback:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

