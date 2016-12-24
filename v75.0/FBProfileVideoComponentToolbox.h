/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileVideoComponentToolbox.h>
@class FBFeedToolbox, FBProfileVideoComponentListenerAnnouncer;


@protocol FBProfileVideoComponentToolbox <FIGProfileVideoHandler>
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox; 
@property (nonatomic,readonly) FBProfileVideoComponentListenerAnnouncer * componentAnnouncer; 
@required
-(FBFeedToolbox *)feedToolbox;
-(FBProfileVideoComponentListenerAnnouncer *)componentAnnouncer;

@end


@protocol FIGEntityHeaderProfileVideoTapResponder, FIGEntityHeaderProfileVideoDelegate;
@class FBFeedToolbox, FBProfileVideoComponentListenerAnnouncer, NSString;

@interface FBProfileVideoComponentToolbox : NSObject <FBProfileVideoComponentToolbox> {

	FBFeedToolbox* _feedToolbox;
	FBProfileVideoComponentListenerAnnouncer* _componentAnnouncer;
	id<FIGEntityHeaderProfileVideoTapResponder> _profileVideoTapResponder;
	id<FIGEntityHeaderProfileVideoDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FIGEntityHeaderProfileVideoTapResponder> profileVideoTapResponder;              //@synthesize profileVideoTapResponder=_profileVideoTapResponder - In the implementation block
@property (assign,nonatomic,__weak) id<FIGEntityHeaderProfileVideoDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox;                                                            //@synthesize feedToolbox=_feedToolbox - In the implementation block
@property (nonatomic,readonly) FBProfileVideoComponentListenerAnnouncer * componentAnnouncer;                          //@synthesize componentAnnouncer=_componentAnnouncer - In the implementation block
-(FBFeedToolbox *)feedToolbox;
-(FBProfileVideoComponentListenerAnnouncer *)componentAnnouncer;
-(id)initWithToolbox:(id)arg1 componentAnnouncer:(id)arg2 profileVideoTapResponder:(id)arg3 ;
-(void)setProfileVideoTapResponder:(id<FIGEntityHeaderProfileVideoTapResponder>)arg1 ;
-(id<FIGEntityHeaderProfileVideoTapResponder>)profileVideoTapResponder;
-(void)setDelegate:(id<FIGEntityHeaderProfileVideoDelegate>)arg1 ;
-(id<FIGEntityHeaderProfileVideoDelegate>)delegate;
@end

