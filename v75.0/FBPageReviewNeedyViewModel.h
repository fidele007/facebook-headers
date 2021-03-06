/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface FBPageReviewNeedyViewModel : FBValueObject <NSCopying> {

	BOOL _hasViewerRated;
	NSAttributedString* _callToAction;
	NSAttributedString* _reviewerContext;
	long long _viewerRating;

}

@property (nonatomic,copy,readonly) NSAttributedString * callToAction;                 //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * reviewerContext;              //@synthesize reviewerContext=_reviewerContext - In the implementation block
@property (nonatomic,readonly) BOOL hasViewerRated;                                    //@synthesize hasViewerRated=_hasViewerRated - In the implementation block
@property (nonatomic,readonly) long long viewerRating;                                 //@synthesize viewerRating=_viewerRating - In the implementation block
-(NSAttributedString *)callToAction;
-(id)initWithCallToAction:(id)arg1 reviewerContext:(id)arg2 hasViewerRated:(BOOL)arg3 viewerRating:(long long)arg4 ;
-(NSAttributedString *)reviewerContext;
-(BOOL)hasViewerRated;
-(long long)viewerRating;
@end

