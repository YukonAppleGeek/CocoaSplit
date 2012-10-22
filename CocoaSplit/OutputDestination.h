//
//  OutputDestination.h
//  H264Streamer
//
//  Created by Zakk on 9/16/12.
//  Copyright (c) 2012 Zakk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OutputDestination : NSObject <NSCoding>

{
    NSString *_destination;
    
}


@property (strong) NSString *server_name;
@property (strong) NSString *name;
@property (strong) NSString *type_name;
@property (strong) NSString *destination;
@property (strong) NSString *output_format;
@property (strong) NSString *stream_key;


-(id)initWithType:(NSString *)type;


@end

