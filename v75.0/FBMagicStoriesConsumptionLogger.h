/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FBMagicStoriesConsumptionLogger : NSObject {

	NSString* _storyGraphQLID;
	NSString* _souvenirGraphQLID;
	NSString* _uniqueLoggerID;
	NSDate* _viewAppearTime;

}
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(void)logViewDidLoad;
-(void)logViewDidDisappearWithUnpublishedCharacterCount:(unsigned long long)arg1 ;
-(void)logViewDidAppear;
-(void)setParentStoryID:(id)arg1 souvenirID:(id)arg2 ;
-(id)init;
@end

