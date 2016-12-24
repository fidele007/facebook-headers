/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRSingleViewFragmentController.h>

@class NSArray;

@interface FBMLGradientSpacerFragment : SRSingleViewFragmentController {

	double _gradientHeightFraction;
	NSArray* _gradientColors;

}

@property (assign,nonatomic) double gradientHeightFraction;              //@synthesize gradientHeightFraction=_gradientHeightFraction - In the implementation block
@property (nonatomic,copy) NSArray * gradientColors;                     //@synthesize gradientColors=_gradientColors - In the implementation block
-(Class)classOfSingleCell;
-(double)heightOfSingleCell;
-(void)configureSingleCell:(id)arg1 ;
-(void)setGradientHeightFraction:(double)arg1 ;
-(double)gradientHeightFraction;
-(id)init;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
@end

