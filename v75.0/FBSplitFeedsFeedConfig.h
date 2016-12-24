/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedConfigProtocol.h>

@class NSString;

@interface FBSplitFeedsFeedConfig : NSObject <FBFeedConfigProtocol> {

	BOOL _showNavBarSearchField;
	unsigned long long _feedStoryStyle;

}

@property (nonatomic,readonly) unsigned long long feedStoryStyle;              //@synthesize feedStoryStyle=_feedStoryStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showNavBarSearchField;                       //@synthesize showNavBarSearchField=_showNavBarSearchField - In the implementation block
@property (nonatomic,readonly) BOOL isFeedComposerDisabled; 
-(void)setShowNavBarSearchField:(BOOL)arg1 ;
-(long long)feedPlaceHolderTypeForFeedType:(long long)arg1 ;
-(id)optionalTopComposerDataSourceFromNavigationCoordinator:(id)arg1 delegate:(id)arg2 session:(id)arg3 toolbox:(id)arg4 ;
-(id)optionalAdditionalFeedCustomizations;
-(BOOL)showNavBarSearchField;
-(BOOL)isFeedComposerDisabled;
-(id)initWithFeedStoryStyle:(unsigned long long)arg1 ;
-(unsigned long long)feedStoryStyle;
-(id)initWithSession:(id)arg1 ;
@end

