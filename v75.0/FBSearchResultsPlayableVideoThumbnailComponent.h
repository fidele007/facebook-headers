/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBSearchResultsContext, CKComponent, FBSearchComponentModel;

@interface FBSearchResultsPlayableVideoThumbnailComponent : CKCompositeComponent {

	id _video;
	FBSearchResultsContext* _context;
	CKComponent* _playerComponent;
	FBSearchComponentModel* _videoEdgeModel;

}

@property (nonatomic,readonly) id video;                                             //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBSearchResultsContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CKComponent * playerComponent;                        //@synthesize playerComponent=_playerComponent - In the implementation block
@property (nonatomic,readonly) FBSearchComponentModel * videoEdgeModel;              //@synthesize videoEdgeModel=_videoEdgeModel - In the implementation block
+(id)newWithVideoEdgeModel:(id)arg1 style:(const FBSearchResultsPlayableVideoThumbnailComponentStyle*)arg2 size:(const CKComponentSize*)arg3 context:(id)arg4 ;
-(void)_logDidTapVideo;
-(CKComponent *)playerComponent;
-(FBSearchComponentModel *)videoEdgeModel;
-(FBSearchResultsContext *)context;
-(id)video;
@end

