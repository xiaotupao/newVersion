//
//  WeatherData.h
//  wirelessuda
//
//  Created by 叶帆 on 13-11-24.
//  Copyright (c) 2013年 苏州大学信息化建设与管理中心. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeatherModel.h"

@interface WeatherData : NSObject<WeatherDelegate>

@property(strong, nonatomic)NSDictionary *result;

- (NSDictionary *)startJSONSting;

@end
