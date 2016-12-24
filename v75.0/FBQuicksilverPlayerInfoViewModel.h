/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBQuicksilverPlayerInfoLabelViewModel, NSArray;

@interface FBQuicksilverPlayerInfoViewModel : FBValueObject <NSCopying> {

	FBQuicksilverPlayerInfoLabelViewModel* _labelViewModel;
	NSArray* _imageURLs;
	double _imageRadius;
	long long _layout;

}

@property (nonatomic,copy,readonly) FBQuicksilverPlayerInfoLabelViewModel * labelViewModel;              //@synthesize labelViewModel=_labelViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageURLs;                                                 //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,readonly) double imageRadius;                                                       //@synthesize imageRadius=_imageRadius - In the implementation block
@property (nonatomic,readonly) long long layout;                                                         //@synthesize layout=_layout - In the implementation block
-(NSArray *)imageURLs;
-(id)initWithLabelViewModel:(id)arg1 imageURLs:(id)arg2 imageRadius:(double)arg3 layout:(long long)arg4 ;
-(FBQuicksilverPlayerInfoLabelViewModel *)labelViewModel;
-(double)imageRadius;
-(long long)layout;
@end
