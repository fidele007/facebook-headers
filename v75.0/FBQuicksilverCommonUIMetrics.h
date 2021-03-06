/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBQuicksilverCommonUIMetrics : NSObject {

	double _standardProfileImageRadius;
	double _compactCellProfileImageRadius;
	double _nameLabelFontSize;
	double _weeklyScoreLabelFontSize;
	double _allTimeScoreLabelFontSize;

}

@property (nonatomic,readonly) double standardProfileImageRadius;                 //@synthesize standardProfileImageRadius=_standardProfileImageRadius - In the implementation block
@property (nonatomic,readonly) double compactCellProfileImageRadius;              //@synthesize compactCellProfileImageRadius=_compactCellProfileImageRadius - In the implementation block
@property (nonatomic,readonly) double nameLabelFontSize;                          //@synthesize nameLabelFontSize=_nameLabelFontSize - In the implementation block
@property (nonatomic,readonly) double weeklyScoreLabelFontSize;                   //@synthesize weeklyScoreLabelFontSize=_weeklyScoreLabelFontSize - In the implementation block
@property (nonatomic,readonly) double allTimeScoreLabelFontSize;                  //@synthesize allTimeScoreLabelFontSize=_allTimeScoreLabelFontSize - In the implementation block
+(id)sharedInstance;
-(double)standardProfileImageRadius;
-(double)compactCellProfileImageRadius;
-(double)nameLabelFontSize;
-(double)weeklyScoreLabelFontSize;
-(double)allTimeScoreLabelFontSize;
-(id)init;
@end

