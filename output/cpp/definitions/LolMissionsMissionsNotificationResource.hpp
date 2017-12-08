#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMissionsMissionsNotificationResource_t {
    std::string source;
    std::string iconUrl;
    std::string created;
    std::string detailKey;
    std::string titleKey;
    uint64_t id;
    std::string state;
    bool critical;
    std::string backgroundUrl;
    std::string expires;
    std::map<std::string, std::string> data;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsMissionsNotificationResource_t& v) {
    j["source"] = v.source;
    j["iconUrl"] = v.iconUrl;
    j["created"] = v.created;
    j["detailKey"] = v.detailKey;
    j["titleKey"] = v.titleKey;
    j["id"] = v.id;
    j["state"] = v.state;
    j["critical"] = v.critical;
    j["backgroundUrl"] = v.backgroundUrl;
    j["expires"] = v.expires;
    j["data"] = v.data;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsMissionsNotificationResource_t& v) {
    v.source = j.at("source").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.created = j.at("created").get<std::string>();
    v.detailKey = j.at("detailKey").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.state = j.at("state").get<std::string>();
    v.critical = j.at("critical").get<bool>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.expires = j.at("expires").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolMissionsMissionsNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
