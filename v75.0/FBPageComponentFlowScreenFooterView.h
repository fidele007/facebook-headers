/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBNetworkImageViewDelegate.h>

@class FBNetworkImageView, FBRichTextView, FBMemScreenFooter, FBPageComponentFlowComponentContext, NSString;

@interface FBPageComponentFlowScreenFooterView : UIView <FBNetworkImageViewDelegate> {

	FBNetworkImageView* _imageView;
	FBRichTextView* _text;
	FBMemScreenFooter* _model;
	FBPageComponentFlowComponentContext* _context;

}

@property (nonatomic,retain) FBMemScreenFooter * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) FBPageComponentFlowComponentContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkImageViewDidLoadImage:(id)arg1 ;
-(void)_build;
-(void)layoutSubviews;
-(FBPageComponentFlowComponentContext *)context;
-(FBMemScreenFooter *)model;
-(void)setContext:(FBPageComponentFlowComponentContext *)arg1 ;
-(void)setModel:(FBMemScreenFooter *)arg1 ;
@end

