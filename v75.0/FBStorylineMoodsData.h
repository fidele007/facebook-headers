/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSDictionary, NSDate;

@interface FBStorylineMoodsData : NSObject <NSCoding> {

	NSArray* _moodsConfiguration;
	NSDictionary* _musicTracksForMood;
	NSArray* _categoriesWithMoods;
	NSDate* _lastFetchDate;

}

@property (nonatomic,copy,readonly) NSDate * lastFetchDate;                         //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moodsConfiguration;                   //@synthesize moodsConfiguration=_moodsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * musicTracksForMood;              //@synthesize musicTracksForMood=_musicTracksForMood - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categoriesWithMoods;                  //@synthesize categoriesWithMoods=_categoriesWithMoods - In the implementation block
-(NSArray *)moodsConfiguration;
-(NSArray *)categoriesWithMoods;
-(id)initWithMoodsConfiguration:(id)arg1 musicTracksForMood:(id)arg2 categoriesWithMoods:(id)arg3 ;
-(NSDictionary *)musicTracksForMood;
-(NSDate *)lastFetchDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

