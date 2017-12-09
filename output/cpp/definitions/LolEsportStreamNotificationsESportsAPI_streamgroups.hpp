#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_t {
    std::string slug;
    int64_t id;
    bool live;
    std::string content;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    j["slug"] = v.slug;
    j["id"] = v.id;
    j["live"] = v.live;
    j["content"] = v.content;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    v.slug = j.at("slug").get<std::string>();
    v.id = j.at("id").get<int64_t>();
    v.live = j.at("live").get<bool>();
    v.content = j.at("content").get<std::string>();
    v.title = j.at("title").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
