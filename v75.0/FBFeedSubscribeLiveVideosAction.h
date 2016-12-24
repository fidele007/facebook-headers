/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedSecondaryAction.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMemModelObject, FBFeedSecondaryActionContext, NSString;

@interface FBFeedSubscribeLiveVideosAction : NSObject <FBFeedSecondaryAction> {

	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	FBFeedSecondaryActionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(id)overrideIcon;
-(long long)menuPriority;
-(BOOL)shouldPerformAfterMenuDismissed;
-(id)initWithVideoChannel:(id)arg1 context:(id)arg2 ;
-(unsigned long long)glyphName;
-(id)title;
-(id)accessibilityIdentifier;
-(id)detail;
@end

