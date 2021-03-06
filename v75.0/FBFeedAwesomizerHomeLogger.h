/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedAwesomizerHomeViewControllerListener.h>

@class NSDate, NSMutableArray, NSMutableOrderedSet, NSString;

@interface FBFeedAwesomizerHomeLogger : NSObject <FBFeedAwesomizerHomeViewControllerListener> {

	long long _directlyPresentedCardIdentifier;
	unsigned long long _availableCardCount;
	NSDate* _homeOpenDate;
	double _timeToSelectFirstCard;
	NSMutableArray* _openedCardsArray;
	NSMutableOrderedSet* _openedCardsSet;
	NSDate* _lastTimeSpentTimeMarker;
	double _homeTimeSpent;
	double _moreOptionsTimeSpent;
	NSString* _awesomizerSessionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * awesomizerSessionIdentifier;              //@synthesize awesomizerSessionIdentifier=_awesomizerSessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithHomeViewControllerListenerAnnouncer:(id)arg1 ;
-(void)fb_applicationDidBecomeActive;
-(void)fb_applicationWillResignActive;
-(NSString *)awesomizerSessionIdentifier;
-(void)resetLastTimeSpentMarker;
-(void)addToHomeTimeSpent;
-(void)addToMoreOptionsTimeSpent;
-(void)homeViewControllerDidOpenWithDirectlyPresentedCardIdentifier:(long long)arg1 availableCardCount:(unsigned long long)arg2 ;
-(void)homeViewControllerDidOpenWithDirectlyPresentedMoreOptions;
-(void)homeViewControllerWillClose;
-(void)cardWillBePresented:(long long)arg1 ;
-(void)cardWillClose:(long long)arg1 ;
-(void)moreOptionsWillOpen;
-(void)moreOptionsWillClose;
-(void)dealloc;
-(id)init;
-(void)viewDidAppear;
-(void)viewDidDisappear;
@end

