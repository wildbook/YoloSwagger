#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsMissionsNotificationResource_t {
    std::string iconUrl;
    std::string source;
    std::string type;
    std::string state;
    std::string created;
    uint64_t id;
    std::string expires;
    bool critical;
    std::map<std::string, std::string> data;
    std::string backgroundUrl;
    std::string titleKey;
    std::string detailKey;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsMissionsNotificationResource_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["source"] = v.source;
    j["type"] = v.type;
    j["state"] = v.state;
    j["created"] = v.created;
    j["id"] = v.id;
    j["expires"] = v.expires;
    j["critical"] = v.critical;
    j["data"] = v.data;
    j["backgroundUrl"] = v.backgroundUrl;
    j["titleKey"] = v.titleKey;
    j["detailKey"] = v.detailKey;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsMissionsNotificationResource_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.state = j.at("state").get<std::string>();
    v.created = j.at("created").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.expires = j.at("expires").get<std::string>();
    v.critical = j.at("critical").get<bool>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.detailKey = j.at("detailKey").get<std::string>();
  }
}
