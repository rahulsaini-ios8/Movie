//
//  ViewController.h
//  Movie
//
//  Created by Rahul on 24/09/14.
//  Copyright (c) 2014 RahulSaini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@interface ViewController : UIViewController
- (IBAction)Play:(id)sender;
@property (strong, nonatomic) MPMoviePlayerController *moviePlayer;

@end

