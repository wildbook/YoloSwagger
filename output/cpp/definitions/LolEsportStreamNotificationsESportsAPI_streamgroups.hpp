#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_t {
    bool live;
    std::string slug;
    int64_t id;
    std::string title;
    std::string content;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    j["live"] = v.live;
    j["slug"] = v.slug;
    j["id"] = v.id;
    j["title"] = v.title;
    j["content"] = v.content;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    v.live = j.at("live").get<bool>();
    v.slug = j.at("slug").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.title = j.at("title").get<std::string>();
    v.content = j.at("content").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
