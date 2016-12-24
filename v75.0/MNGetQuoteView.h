/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/MNAttachmentView.h>

@class MNGetQuoteDetailsView, FBProviderMapData, MNGetQuoteViewModel, NSString;

@interface MNGetQuoteView : UIView <MNAttachmentView> {

	MNGetQuoteDetailsView* _detailsView;
	FBProviderMapData* _mapData;
	MNGetQuoteViewModel* _viewModel;

}

@property (nonatomic,copy) MNGetQuoteViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithMapData:(id)arg1 ;
-(void)layoutSubviews;
-(MNGetQuoteViewModel *)viewModel;
-(void)setViewModel:(MNGetQuoteViewModel *)arg1 ;
@end

