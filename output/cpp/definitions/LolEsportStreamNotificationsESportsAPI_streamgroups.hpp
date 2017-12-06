#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_t {
    std::string content;
    int64_t id;
    bool live;
    std::string slug;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    j["content"] = v.content;
    j["id"] = v.id;
    j["live"] = v.live;
    j["slug"] = v.slug;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    v.content = j.at("content").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.live = j.at("live").get<bool>();
    v.slug = j.at("slug").get<std::string>();
    v.title = j.at("title").get<std::string>();
  }
}
