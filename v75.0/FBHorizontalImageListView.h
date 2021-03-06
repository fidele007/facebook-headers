/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, FBHorizontalImageListCountView, FBUserSession;

@interface FBHorizontalImageListView : UIView {

	long long _maxPicturesToShow;
	double _imageSize;
	double _imagePadding;
	unsigned long long _othersCount;
	unsigned long long _imageListViewStyle;
	NSArray* _imageViews;
	FBHorizontalImageListCountView* _othersView;
	FBUserSession* _session;
	NSArray* _imageURLs;
	double _cornerRadius;

}

@property (nonatomic,copy) NSArray * imageURLs;                           //@synthesize imageURLs=_imageURLs - In the implementation block
@property (assign,nonatomic) unsigned long long othersCount;              //@synthesize othersCount=_othersCount - In the implementation block
@property (assign,nonatomic) double cornerRadius;                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(CGSize)viewSizeForNumberOfImages:(long long)arg1 othersCount:(long long)arg2 imageSize:(double)arg3 imagePadding:(double)arg4 style:(unsigned long long)arg5 ;
-(id)initWithImageURLs:(id)arg1 maxPicturesToShow:(long long)arg2 imageSize:(double)arg3 othersCount:(unsigned long long)arg4 imagePadding:(double)arg5 session:(id)arg6 ;
-(id)initWithImageURLs:(id)arg1 maxPicturesToShow:(long long)arg2 imageSize:(double)arg3 othersCount:(unsigned long long)arg4 imagePadding:(double)arg5 session:(id)arg6 style:(unsigned long long)arg7 ;
-(void)setImageURLs:(NSArray *)arg1 ;
-(void)setOthersCount:(unsigned long long)arg1 ;
-(NSArray *)imageURLs;
-(id)_placesProfileImageView;
-(id)initWithImageURLs:(id)arg1 maxPicturesToShow:(long long)arg2 imageSize:(double)arg3 session:(id)arg4 ;
-(unsigned long long)othersCount;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)_setupViews;
@end

