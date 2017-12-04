#ifndef SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_HPP
#define SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolEsportStreamNotificationsESportsAPI_streamgroups {
'    // 
    std::string content;
    // 
    int64_t id;
    // 
    bool live;
    // 
    std::string slug;
    // 
    std::string title;
  };

  void to_json(nlohmann::json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    j["content"] = v.content;
    j["id"] = v.id;
    j["live"] = v.live;
    j["slug"] = v.slug;
    j["title"] = v.title;
  }

  void from_json(const nlohmann::json& j, LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    v.content = j.at("content").get<std::string>;
    v.id = j.at("id").get<int64_t>;
    v.live = j.at("live").get<bool>;
    v.slug = j.at("slug").get<std::string>;
    v.title = j.at("title").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEsportStreamNotificationsESportsAPI_streamgroups_HPP
