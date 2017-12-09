#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsPlayerNotificationResource_t {
    std::string expires;
    std::string iconUrl;
    uint64_t id;
    std::string detailKey;
    std::string type;
    std::map<std::string, std::string> data;
    bool critical;
    std::string state;
    std::string source;
    std::string backgroundUrl;
    std::string titleKey;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    j["expires"] = v.expires;
    j["iconUrl"] = v.iconUrl;
    j["id"] = v.id;
    j["detailKey"] = v.detailKey;
    j["type"] = v.type;
    j["data"] = v.data;
    j["critical"] = v.critical;
    j["state"] = v.state;
    j["source"] = v.source;
    j["backgroundUrl"] = v.backgroundUrl;
    j["titleKey"] = v.titleKey;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    v.expires = j.at("expires").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.detailKey = j.at("detailKey").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.critical = j.at("critical").get<bool>();
    v.state = j.at("state").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
