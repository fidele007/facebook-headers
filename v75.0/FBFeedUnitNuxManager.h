/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedUnitNuxPresenterListener.h>

@class FBUserSession, FBFeedUnitNuxPresenter, NSMutableSet, NSMutableDictionary, NSString;

@interface FBFeedUnitNuxManager : NSObject <FBFeedUnitNuxPresenterListener> {

	FBUserSession* _session;
	FBFeedUnitNuxPresenter* _currentPresenter;
	NSMutableSet* _blacklistedNuxIDs;
	NSMutableDictionary* _registeredNuxPresenters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearCurrentPresenter;
-(void)registerNuxPresenter:(id)arg1 ;
-(void)feedUnitWithNuxPresenter:(id)arg1 didAcquirePosition:(CGPoint)arg2 inView:(id)arg3 inCell:(id)arg4 ;
-(void)unregisterNuxPresenter:(id)arg1 ;
-(void)feedUnitWithNuxPresenterDidRelinquishView:(id)arg1 ;
-(void)nuxPresenterDidPresent:(id)arg1 ;
-(void)nuxPresenterDidDismiss:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)feedUnitWithNuxPresenter:(id)arg1 setNuxAtPosition:(CGPoint)arg2 inView:(id)arg3 inCell:(id)arg4 ;
-(void)showNext;
-(id)initWithSession:(id)arg1 ;
@end
