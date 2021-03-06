//
//  Playlist.h
//  Zype
//
//  Created by ZypeTech on 1/28/15.
//  Copyright (c) 2015 Zype. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "PlaylistVideo.h"


@interface Playlist : NSManagedObject

@property (nonatomic, retain) NSString * pId;
@property (nonatomic, retain) NSString * parent_id;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSDate * created_at;
@property (nonatomic, retain) NSDate * updated_at;
@property (nonatomic, retain) NSString * thumbnailUrl;
@property (nonatomic, retain) NSNumber * playlist_item_count;
@property (nonatomic, retain) NSNumber * priority;


@property (nonatomic, retain) NSSet<PlaylistVideo *> *playlistVideo;

@end

@interface Playlist (CoreDataGeneratedAccessors)

- (void)addPlaylistVideoObject:(PlaylistVideo *)value;
- (void)removePlaylistVideoObject:(PlaylistVideo *)value;
- (void)addPlaylistVideo:(NSSet<PlaylistVideo *> *)values;
- (void)removePlaylistVideo:(NSSet<PlaylistVideo *> *)values;

@end

