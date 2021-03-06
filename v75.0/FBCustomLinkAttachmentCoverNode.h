/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/ASNetworkImageNodeDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol FBCustomLinkAttachmentCoverNodeDelegate, FBVideoEntityProtocol;
@class FBAttachmentCoverFrameCache, FBUserSession, ASDisplayNode, ASNetworkImageNode, FBVideoNode, ASTextNode, ASImageNode, FBGridOverlayLayer, FBAttachmentCoverLayoutSpec, NSURL, UIImage, NSString;

@interface FBCustomLinkAttachmentCoverNode : ASDisplayNode <ASNetworkImageNodeDelegate, UIWebViewDelegate> {

	FBAttachmentCoverFrameCache* _frameCache;
	FBUserSession* _session;
	ASDisplayNode* _borderNodes[4];
	ASNetworkImageNode* _coverImageNode;
	FBVideoNode* _coverVideoNode;
	ASDisplayNode* _coverBorderNode;
	ASNetworkImageNode* _sourceImageNode;
	ASTextNode* _maxHeadlineTextNode;
	ASTextNode* _minHeadlineTextNode;
	ASTextNode* _maxDescriptionTextNode;
	ASTextNode* _minDescriptionTextNode;
	ASTextNode* _maxBylineTextNode;
	ASTextNode* _minBylineTextNode;
	ASDisplayNode* _barNodes[4];
	ASImageNode* _overlayImageNode;
	ASDisplayNode* _bottomGradientNode;
	ASDisplayNode* _topGradientNode;
	FBGridOverlayLayer* _gridOverlayLayer;
	BOOL _antialiasBars;
	BOOL _drawGrid;
	FBAttachmentCoverLayoutSpec* _layoutSpec;
	id<FBCustomLinkAttachmentCoverNodeDelegate> _delegate;
	ASDisplayNode* _overlayNode;
	id<FBVideoEntityProtocol> _video;

}

@property (nonatomic,readonly) FBAttachmentCoverLayoutSpec * layoutSpec;                               //@synthesize layoutSpec=_layoutSpec - In the implementation block
@property (nonatomic,copy) NSURL * coverImageURL; 
@property (assign,nonatomic,__weak) id<FBCustomLinkAttachmentCoverNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * sourceImage; 
@property (nonatomic,copy) NSURL * sourceImageURL; 
@property (nonatomic,copy) NSString * headline; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * maxByline; 
@property (nonatomic,copy) NSString * minByline; 
@property (nonatomic,retain) ASDisplayNode * overlayNode;                                              //@synthesize overlayNode=_overlayNode - In the implementation block
@property (assign,nonatomic) BOOL antialiasBars;                                                       //@synthesize antialiasBars=_antialiasBars - In the implementation block
@property (assign,nonatomic) BOOL drawGrid;                                                            //@synthesize drawGrid=_drawGrid - In the implementation block
@property (assign,nonatomic) id<FBVideoEntityProtocol> video;                                          //@synthesize video=_video - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(NSURL *)coverImageURL;
-(void)setCoverImageURL:(NSURL *)arg1 ;
-(FBAttachmentCoverLayoutSpec *)layoutSpec;
-(void)playVideo;
-(ASDisplayNode *)overlayNode;
-(void)imageNode:(id)arg1 didLoadImage:(id)arg2 ;
-(void)setMinimorphFactor:(FBMinimorphFactor)arg1 ;
-(void)insertSubnodeAtCorrectOrderPosition:(id)arg1 ;
-(void)_prepareTextNode:(id)arg1 withTextMetrics:(FBTextMetrics*)arg2 ;
-(void)_setSourceImage:(id)arg1 URL:(id)arg2 ;
-(id)initWithLayoutSpec:(id)arg1 session:(id)arg2 ;
-(void)setMaxByline:(NSString *)arg1 ;
-(NSString *)maxByline;
-(void)setMinByline:(NSString *)arg1 ;
-(NSString *)minByline;
-(void)setSourceImageURL:(NSURL *)arg1 ;
-(NSURL *)sourceImageURL;
-(void)setDrawGrid:(BOOL)arg1 ;
-(void)setOverlayNode:(ASDisplayNode *)arg1 ;
-(void)invalidateVideo;
-(BOOL)antialiasBars;
-(void)setAntialiasBars:(BOOL)arg1 ;
-(BOOL)drawGrid;
-(void)setDelegate:(id<FBCustomLinkAttachmentCoverNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCustomLinkAttachmentCoverNodeDelegate>)delegate;
-(void)layout;
-(UIImage *)sourceImage;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(void)didLoad;
-(void)setSourceImage:(UIImage *)arg1 ;
-(void)pauseVideo;
-(id<FBVideoEntityProtocol>)video;
-(void)setVideo:(id<FBVideoEntityProtocol>)arg1 ;
@end

