/* ************************************************************************
 *
 * ADOBE CONFIDENTIAL
 * ___________________
 *
 * Copyright 2018 Adobe Systems Incorporated
 * All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains
 * the property of Adobe Systems Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Adobe Systems Incorporated and its
 * suppliers and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Adobe Systems Incorporated.
 **************************************************************************/

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const PLAYER_EVENT_VIDEO_LOAD;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_VIDEO_UNLOAD;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_PLAY;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_PAUSE;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_COMPLETE;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_SEEK_START;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_SEEK_COMPLETE;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_AD_START;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_AD_COMPLETE;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_CHAPTER_START;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_CHAPTER_COMPLETE;
FOUNDATION_EXPORT NSString *const PLAYER_EVENT_PLAYHEAD_UPDATE;

@protocol VideoPlayerDelegate <NSObject>

@required

- (NSTimeInterval)getCurrentPlaybackTime;

@end


@interface VideoPlayer : NSObject <VideoPlayerDelegate>

- (void)loadContentUrl:(NSURL *)url;
- (UIView *)getView;

@end
