/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBGbdtClassifierDownloadManagerConfiguration : NSObject <NSCopying> {

	unsigned long long _subtype;
	double _defaultBehavior_modelParamsIntervalMins;
	double _defaultBehavior_featuresVectorIntervalMins;
	double _defaultBehavior_classificationIntervalMins;
	double _modelOnly_modelParamsIntervalMins;

}
+(id)modelOnlyWithModelParamsIntervalMins:(double)arg1 ;
+(id)defaultBehaviorWithModelParamsIntervalMins:(double)arg1 featuresVectorIntervalMins:(double)arg2 classificationIntervalMins:(double)arg3 ;
-(void)matchDefaultBehavior:(/*^block*/id)arg1 modelOnly:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

