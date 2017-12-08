#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEsportStreamNotificationsPlayerNotificationResource_t {
    std::string detailKey;
    std::string source;
    std::string type;
    std::string expires;
    std::string state;
    std::string iconUrl;
    std::string backgroundUrl;
    bool critical;
    std::string titleKey;
    std::map<std::string, std::string> data;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    j["detailKey"] = v.detailKey;
    j["source"] = v.source;
    j["type"] = v.type;
    j["expires"] = v.expires;
    j["state"] = v.state;
    j["iconUrl"] = v.iconUrl;
    j["backgroundUrl"] = v.backgroundUrl;
    j["critical"] = v.critical;
    j["titleKey"] = v.titleKey;
    j["data"] = v.data;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    v.detailKey = j.at("detailKey").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.expires = j.at("expires").get<std::string>();
    v.state = j.at("state").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.critical = j.at("critical").get<bool>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const LolEsportStreamNotificationsPlayerNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
