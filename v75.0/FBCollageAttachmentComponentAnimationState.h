/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBCollageAttachmentComponentAnimationState : NSObject {

	BOOL _isAnimating;
	long long _currentAnimatingTileIndex;
	long long _nextUpPhotoIndex;

}

@property (nonatomic,readonly) BOOL isAnimating;                                 //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,readonly) long long currentAnimatingTileIndex;              //@synthesize currentAnimatingTileIndex=_currentAnimatingTileIndex - In the implementation block
@property (nonatomic,readonly) long long nextUpPhotoIndex;                       //@synthesize nextUpPhotoIndex=_nextUpPhotoIndex - In the implementation block
+(id)initialState;
-(long long)currentAnimatingTileIndex;
-(long long)nextUpPhotoIndex;
-(id)initWithAnimatingTileIndex:(long long)arg1 animatingPhotoIndex:(long long)arg2 isAnimating:(BOOL)arg3 ;
-(BOOL)isAnimating;
@end

