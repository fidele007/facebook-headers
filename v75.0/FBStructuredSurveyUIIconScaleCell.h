/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBStructuredSurveyUICell.h>

@protocol FBStructuredSurveyUIIconScaleCellDelegate;
@class NSMutableArray, FBUserSession;

@interface FBStructuredSurveyUIIconScaleCell : FBStructuredSurveyUICell {

	NSMutableArray* _iconViews;
	NSMutableArray* _iconButtons;
	id<FBStructuredSurveyUIIconScaleCellDelegate> _delegate;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBStructuredSurveyUIIconScaleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) FBUserSession * session;                                             //@synthesize session=_session - In the implementation block
+(double)heightForModelObject:(id)arg1 context:(id)arg2 frame:(CGRect)arg3 styleSheet:(id)arg4 config:(id)arg5 ;
-(void)configureWithModelObject:(id)arg1 context:(id)arg2 ;
-(void)touched:(id)arg1 ;
-(void)cancelled:(id)arg1 ;
-(void)setDelegate:(id<FBStructuredSurveyUIIconScaleCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBStructuredSurveyUIIconScaleCellDelegate>)delegate;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)tapped:(id)arg1 ;
@end
