/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSDictionary, FBMLSession;

@interface FBMLSuggestionPhotosView : UIView {

	NSArray* _photoCells;
	NSDictionary* _boxedFocalPointByAssetIdentifier;
	NSArray* _photos;
	NSArray* _localImages;
	FBMLSession* _momentsSession;

}

@property (nonatomic,copy) NSDictionary * boxedFocalPointByAssetIdentifier;              //@synthesize boxedFocalPointByAssetIdentifier=_boxedFocalPointByAssetIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                             //@synthesize photos=_photos - In the implementation block
@property (nonatomic,copy) NSArray * localImages;                                        //@synthesize localImages=_localImages - In the implementation block
@property (nonatomic,retain) FBMLSession * momentsSession;                               //@synthesize momentsSession=_momentsSession - In the implementation block
+(double)squareAspectHeightForWidth:(double)arg1 ;
-(void)setPhotos:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMomentsSession:(FBMLSession *)arg1 ;
-(void)_applyPhotoCellDependencies;
-(void)resetToDefaultProps;
-(void)setLocalImages:(NSArray *)arg1 ;
-(void)setBoxedFocalPointByAssetIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)boxedFocalPointByAssetIdentifier;
-(NSArray *)localImages;
-(FBMLSession *)momentsSession;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
@end

