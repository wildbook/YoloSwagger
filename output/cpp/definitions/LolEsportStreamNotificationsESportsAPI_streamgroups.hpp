#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEsportStreamNotificationsESportsAPI_streamgroups {
    // 
    std::string content;
    // 
    bool live;
    // 
    std::string title;
    // 
    int64_t id;
    // 
    std::string slug;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    j["content"] = v.content;
    j["live"] = v.live;
    j["title"] = v.title;
    j["id"] = v.id;
    j["slug"] = v.slug;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    v.content = j.at("content").get<std::string>;
    v.live = j.at("live").get<bool>;
    v.title = j.at("title").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.slug = j.at("slug").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_HPP
