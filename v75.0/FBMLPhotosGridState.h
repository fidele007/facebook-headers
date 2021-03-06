/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBMLPhotosGridState : NSObject {

	NSArray* _cellDatas;
	long long _minimumPhotosToDisplay;
	long long _limitPhotosToDisplay;

}

@property (nonatomic,retain) NSArray * cellDatas;                           //@synthesize cellDatas=_cellDatas - In the implementation block
@property (assign,nonatomic) long long minimumPhotosToDisplay;              //@synthesize minimumPhotosToDisplay=_minimumPhotosToDisplay - In the implementation block
@property (assign,nonatomic) long long limitPhotosToDisplay;                //@synthesize limitPhotosToDisplay=_limitPhotosToDisplay - In the implementation block
-(NSArray *)cellDatas;
-(long long)limitPhotosToDisplay;
-(void)setCellDatas:(NSArray *)arg1 ;
-(void)setMinimumPhotosToDisplay:(long long)arg1 ;
-(void)setLimitPhotosToDisplay:(long long)arg1 ;
-(long long)minimumPhotosToDisplay;
@end

