/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBCrowdsourcingCityPickerNullStateDataSourceDelegate;
@class FBItemContentSquareViewConfig, FBNearbyPlace, NSString;

@interface FBCrowdsourcingCityPickerNullStateDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {

	unsigned long long _style;
	FBItemContentSquareViewConfig* _squareViewConfig;
	BOOL _hideTopSection;
	id<FBCrowdsourcingCityPickerNullStateDataSourceDelegate> _delegate;
	FBNearbyPlace* _closestCity;
	FBNearbyPlace* _profileCity;
	NSString* _profileCountry;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingCityPickerNullStateDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBNearbyPlace * closestCity;                                                           //@synthesize closestCity=_closestCity - In the implementation block
@property (nonatomic,retain) FBNearbyPlace * profileCity;                                                           //@synthesize profileCity=_profileCity - In the implementation block
@property (nonatomic,copy) NSString * profileCountry;                                                               //@synthesize profileCountry=_profileCountry - In the implementation block
@property (assign,nonatomic) BOOL hideTopSection;                                                                   //@synthesize hideTopSection=_hideTopSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClosestCity:(FBNearbyPlace *)arg1 ;
-(FBNearbyPlace *)closestCity;
-(id)_tableView:(id)arg1 cellForSuggestionsSectionItem:(long long)arg2 ;
-(FBNearbyPlace *)profileCity;
-(NSString *)profileCountry;
-(BOOL)hideTopSection;
-(void)setHideTopSection:(BOOL)arg1 ;
-(void)setProfileCity:(FBNearbyPlace *)arg1 ;
-(void)setProfileCountry:(NSString *)arg1 ;
-(void)setDelegate:(id<FBCrowdsourcingCityPickerNullStateDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBCrowdsourcingCityPickerNullStateDataSourceDelegate>)delegate;
-(id)initWithStyle:(unsigned long long)arg1 ;
@end

