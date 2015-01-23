// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2014-11-17 18:43:33 UTC
//   on: 2014-12-11, 22:05:47 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 125
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_CONTENT_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_CONTENT_DETAILS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Details about the content of a channel.
 *
 * @ingroup DataObject
 */
class ChannelContentDetails : public client::JsonCppData {
 public:

  /**
   * No description provided.
   *
   * @ingroup DataObject
   */
  class ChannelContentDetailsRelatedPlaylists : public client::JsonCppData {
   public:

    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static ChannelContentDetailsRelatedPlaylists* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit ChannelContentDetailsRelatedPlaylists(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit ChannelContentDetailsRelatedPlaylists(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~ChannelContentDetailsRelatedPlaylists();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return
     * <code>google_youtube_api::ChannelContentDetailsRelatedPlaylists</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_youtube_api::ChannelContentDetailsRelatedPlaylists");
    }

    /**
     * Determine if the '<code>favorites</code>' attribute was set.
     *
     * @return true if the '<code>favorites</code>' attribute was set.
     */
    bool has_favorites() const {
      return Storage().isMember("favorites");
    }

    /**
     * Clears the '<code>favorites</code>' attribute.
     */
    void clear_favorites() {
      MutableStorage()->removeMember("favorites");
    }


    /**
     * Get the value of the '<code>favorites</code>' attribute.
     */
    const StringPiece get_favorites() const {
      const Json::Value& v = Storage("favorites");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>favorites</code>' attribute.
     *
     * The ID of the playlist that contains the channel"s favorite videos. Use
     * the  playlistItems.insert and  playlistItems.delete to add or remove
     * items from that list.
     *
     * @param[in] value The new value.
     */
    void set_favorites(const StringPiece& value) {
      *MutableStorage("favorites") = value.data();
    }

    /**
     * Determine if the '<code>likes</code>' attribute was set.
     *
     * @return true if the '<code>likes</code>' attribute was set.
     */
    bool has_likes() const {
      return Storage().isMember("likes");
    }

    /**
     * Clears the '<code>likes</code>' attribute.
     */
    void clear_likes() {
      MutableStorage()->removeMember("likes");
    }


    /**
     * Get the value of the '<code>likes</code>' attribute.
     */
    const StringPiece get_likes() const {
      const Json::Value& v = Storage("likes");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>likes</code>' attribute.
     *
     * The ID of the playlist that contains the channel"s liked videos. Use the
     * playlistItems.insert and  playlistItems.delete to add or remove items
     * from that list.
     *
     * @param[in] value The new value.
     */
    void set_likes(const StringPiece& value) {
      *MutableStorage("likes") = value.data();
    }

    /**
     * Determine if the '<code>uploads</code>' attribute was set.
     *
     * @return true if the '<code>uploads</code>' attribute was set.
     */
    bool has_uploads() const {
      return Storage().isMember("uploads");
    }

    /**
     * Clears the '<code>uploads</code>' attribute.
     */
    void clear_uploads() {
      MutableStorage()->removeMember("uploads");
    }


    /**
     * Get the value of the '<code>uploads</code>' attribute.
     */
    const StringPiece get_uploads() const {
      const Json::Value& v = Storage("uploads");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>uploads</code>' attribute.
     *
     * The ID of the playlist that contains the channel"s uploaded videos. Use
     * the  videos.insert method to upload new videos and the videos.delete
     * method to delete previously uploaded videos.
     *
     * @param[in] value The new value.
     */
    void set_uploads(const StringPiece& value) {
      *MutableStorage("uploads") = value.data();
    }

    /**
     * Determine if the '<code>watchHistory</code>' attribute was set.
     *
     * @return true if the '<code>watchHistory</code>' attribute was set.
     */
    bool has_watch_history() const {
      return Storage().isMember("watchHistory");
    }

    /**
     * Clears the '<code>watchHistory</code>' attribute.
     */
    void clear_watch_history() {
      MutableStorage()->removeMember("watchHistory");
    }


    /**
     * Get the value of the '<code>watchHistory</code>' attribute.
     */
    const StringPiece get_watch_history() const {
      const Json::Value& v = Storage("watchHistory");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>watchHistory</code>' attribute.
     *
     * The ID of the playlist that contains the channel"s watch history. Use the
     * playlistItems.insert and  playlistItems.delete to add or remove items
     * from that list.
     *
     * @param[in] value The new value.
     */
    void set_watch_history(const StringPiece& value) {
      *MutableStorage("watchHistory") = value.data();
    }

    /**
     * Determine if the '<code>watchLater</code>' attribute was set.
     *
     * @return true if the '<code>watchLater</code>' attribute was set.
     */
    bool has_watch_later() const {
      return Storage().isMember("watchLater");
    }

    /**
     * Clears the '<code>watchLater</code>' attribute.
     */
    void clear_watch_later() {
      MutableStorage()->removeMember("watchLater");
    }


    /**
     * Get the value of the '<code>watchLater</code>' attribute.
     */
    const StringPiece get_watch_later() const {
      const Json::Value& v = Storage("watchLater");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>watchLater</code>' attribute.
     *
     * The ID of the playlist that contains the channel"s watch later playlist.
     * Use the playlistItems.insert and  playlistItems.delete to add or remove
     * items from that list.
     *
     * @param[in] value The new value.
     */
    void set_watch_later(const StringPiece& value) {
      *MutableStorage("watchLater") = value.data();
    }

   private:
    void operator=(const ChannelContentDetailsRelatedPlaylists&);
  };  // ChannelContentDetailsRelatedPlaylists
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelContentDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelContentDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelContentDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelContentDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelContentDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelContentDetails");
  }

  /**
   * Determine if the '<code>googlePlusUserId</code>' attribute was set.
   *
   * @return true if the '<code>googlePlusUserId</code>' attribute was set.
   */
  bool has_google_plus_user_id() const {
    return Storage().isMember("googlePlusUserId");
  }

  /**
   * Clears the '<code>googlePlusUserId</code>' attribute.
   */
  void clear_google_plus_user_id() {
    MutableStorage()->removeMember("googlePlusUserId");
  }


  /**
   * Get the value of the '<code>googlePlusUserId</code>' attribute.
   */
  const StringPiece get_google_plus_user_id() const {
    const Json::Value& v = Storage("googlePlusUserId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>googlePlusUserId</code>' attribute.
   *
   * The googlePlusUserId object identifies the Google+ profile ID associated
   * with this channel.
   *
   * @param[in] value The new value.
   */
  void set_google_plus_user_id(const StringPiece& value) {
    *MutableStorage("googlePlusUserId") = value.data();
  }

  /**
   * Determine if the '<code>relatedPlaylists</code>' attribute was set.
   *
   * @return true if the '<code>relatedPlaylists</code>' attribute was set.
   */
  bool has_related_playlists() const {
    return Storage().isMember("relatedPlaylists");
  }

  /**
   * Clears the '<code>relatedPlaylists</code>' attribute.
   */
  void clear_related_playlists() {
    MutableStorage()->removeMember("relatedPlaylists");
  }


  /**
   * Get a reference to the value of the '<code>relatedPlaylists</code>'
   * attribute.
   */
  const ChannelContentDetailsRelatedPlaylists get_related_playlists() const {
     const Json::Value& storage = Storage("relatedPlaylists");
    return client::JsonValueToCppValueHelper<ChannelContentDetailsRelatedPlaylists >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>relatedPlaylists</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  ChannelContentDetailsRelatedPlaylists mutable_relatedPlaylists() {
    Json::Value* storage = MutableStorage("relatedPlaylists");
    return client::JsonValueToMutableCppValueHelper<ChannelContentDetailsRelatedPlaylists >(storage);
  }

 private:
  void operator=(const ChannelContentDetails&);
};  // ChannelContentDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_CONTENT_DETAILS_H_