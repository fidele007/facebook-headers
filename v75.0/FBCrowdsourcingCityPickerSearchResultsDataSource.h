/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBCrowdsourcingCityPickerSearchResultsDataSourceDelegate;
@class FBUserSession, NSArray, NSDictionary, NSString;

@interface FBCrowdsourcingCityPickerSearchResultsDataSource : NSObject <UITableViewDataSource, UITableViewDelegate> {

	FBUserSession* _session;
	unsigned long long _style;
	NSArray* _places;
	NSDictionary* _countries;
	NSString* _searchText;
	id<FBCrowdsourcingCityPickerSearchResultsDataSourceDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * places;                                                                            //@synthesize places=_places - In the implementation block
@property (nonatomic,copy) NSDictionary * countries;                                                                    //@synthesize countries=_countries - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                                       //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic,__weak) id<FBCrowdsourcingCityPickerSearchResultsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBCrowdsourcingCityPickerSearchResultsDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBCrowdsourcingCityPickerSearchResultsDataSourceDelegate>)delegate;
-(NSString *)searchText;
-(NSArray *)places;
-(void)setPlaces:(NSArray *)arg1 ;
-(void)setCountries:(NSDictionary *)arg1 ;
-(NSDictionary *)countries;
-(void)setSearchText:(NSString *)arg1 ;
@end
