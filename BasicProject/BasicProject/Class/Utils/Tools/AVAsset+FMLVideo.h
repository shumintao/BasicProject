//
//  AVAsset+FMLVideo.h
//  VideoClip
//
//  Created by samo on 16/7/27.
//  Copyright © 2016年 Collion. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

@interface AVAsset (FMLVideo)

/**
 *   获取每帧图片
 *
 *  @param imageCount     需要获取的图片个数
 *  @param imageBackBlock 得到一个图片时返回的block
 */
- (void)fml_getImagesCount:(NSUInteger)imageCount imageBackBlock:(void (^)(UIImage *image))imageBackBlock;



- (void)getExportWithStartTime:(Float64)startTime andEndTime:(Float64)endTime andClipBlock:(void(^)(NSURL *videoUrl))block;
/**
 *  获取视频的总秒数
 */
- (Float64)fml_getSeconds;

/** 获取fps */
- (float)fml_getFPS;

- (CGSize)avAssetNaturalSize;

@end
