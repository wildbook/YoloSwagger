#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_t {
    std::string_t content;
    bool_t live;
    std::string_t title;
    int64_t_t id;
    std::string_t slug;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    j["content"] = v.content;
    j["live"] = v.live;
    j["title"] = v.title;
    j["id"] = v.id;
    j["slug"] = v.slug;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    v.content = j.at("content").get<std::string_t>();
    v.live = j.at("live").get<bool_t>();
    v.title = j.at("title").get<std::string_t>();
    v.id = j.at("id").get<int64_t_t>();
    v.slug = j.at("slug").get<std::string_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsESportsAPI_streamgroups_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
