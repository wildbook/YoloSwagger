#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_t {
    std::string title;
    std::string content;
    int64_t id;
    std::string slug;
    bool live;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    j["title"] = v.title;
    j["content"] = v.content;
    j["id"] = v.id;
    j["slug"] = v.slug;
    j["live"] = v.live;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    v.title = j.at("title").get<std::string>();
    v.content = j.at("content").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.slug = j.at("slug").get<std::string>();
    v.live = j.at("live").get<bool>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
