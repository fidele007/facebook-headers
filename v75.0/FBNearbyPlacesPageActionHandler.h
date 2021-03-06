/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLocationMapViewControllerDelegate.h>

@protocol FBNavigationCoordinator, FBIntentHandler, FBLocationMapViewControllerDelegate;
@class FBUserSession, NSString;

@interface FBNearbyPlacesPageActionHandler : NSObject <FBLocationMapViewControllerDelegate> {

	FBUserSession* _session;
	unsigned long long _entryPoint;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	id<FBLocationMapViewControllerDelegate> _mapViewControllerDelegate;
	NSString* _analyticsModule;

}

@property (nonatomic,copy) NSString * analyticsModule;                                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;                                     //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) id<FBIntentHandler> intentHandler;                                                     //@synthesize intentHandler=_intentHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBLocationMapViewControllerDelegate> mapViewControllerDelegate;              //@synthesize mapViewControllerDelegate=_mapViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)displayDirectionsToLocation:(CLLocationCoordinate2D)arg1 locationName:(id)arg2 ;
-(id)initWithSession:(id)arg1 analyticsModule:(id)arg2 entryPoint:(unsigned long long)arg3 ;
-(void)openPageViewControllerForPage:(id)arg1 ;
-(void)openStoryPermalinkViewControllerForStoryFBID:(id)arg1 fallbackURL:(id)arg2 ;
-(void)openPhotoVCWithPhotos:(id)arg1 startIndex:(unsigned long long)arg2 ;
-(void)openPageAboutVC:(id)arg1 ;
-(void)openPageMapVC:(id)arg1 ;
-(void)openPageReviewsVC:(id)arg1 ;
-(void)openPageLikesAndVisitsActivityVC:(id)arg1 ;
-(void)performShareActionForPage:(id)arg1 ;
-(id<FBLocationMapViewControllerDelegate>)mapViewControllerDelegate;
-(void)setMapViewControllerDelegate:(id<FBLocationMapViewControllerDelegate>)arg1 ;
@end

