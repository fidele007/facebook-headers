/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreStateModifying.h>

@class NSDictionary, NSString;

@interface FBCKFeedbackConnectionStoreCommentUpdate : NSObject <FBGraphQLConnectionStoreStateModifying> {

	NSDictionary* _updates;

}

@property (nonatomic,copy,readonly) NSDictionary * updates;              //@synthesize updates=_updates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)transitionsFromState:(id)arg1 ;
-(id)initWithUpdatesMap:(id)arg1 ;
-(NSDictionary *)updates;
@end

