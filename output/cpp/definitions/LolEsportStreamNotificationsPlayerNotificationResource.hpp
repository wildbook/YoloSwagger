#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsPlayerNotificationResource_t {
    std::string source;
    std::string type;
    std::string iconUrl;
    std::string titleKey;
    std::string backgroundUrl;
    std::map<std::string, std::string> data;
    uint64_t id;
    bool critical;
    std::string state;
    std::string detailKey;
    std::string expires;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    j["source"] = v.source;
    j["type"] = v.type;
    j["iconUrl"] = v.iconUrl;
    j["titleKey"] = v.titleKey;
    j["backgroundUrl"] = v.backgroundUrl;
    j["data"] = v.data;
    j["id"] = v.id;
    j["critical"] = v.critical;
    j["state"] = v.state;
    j["detailKey"] = v.detailKey;
    j["expires"] = v.expires;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    v.source = j.at("source").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.id = j.at("id").get<uint64_t>();
    v.critical = j.at("critical").get<bool>();
    v.state = j.at("state").get<std::string>();
    v.detailKey = j.at("detailKey").get<std::string>();
    v.expires = j.at("expires").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
