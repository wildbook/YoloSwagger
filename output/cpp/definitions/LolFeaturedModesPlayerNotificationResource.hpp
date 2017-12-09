#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesPlayerNotificationResource_t {
    std::string backgroundUrl;
    std::map<std::string, std::string> data;
    std::string iconUrl;
    std::string titleKey;
    bool critical;
    std::string expires;
    std::string state;
    uint64_t id;
    std::string type;
    std::string detailKey;
    std::string source;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesPlayerNotificationResource_t& v) {
    j["backgroundUrl"] = v.backgroundUrl;
    j["data"] = v.data;
    j["iconUrl"] = v.iconUrl;
    j["titleKey"] = v.titleKey;
    j["critical"] = v.critical;
    j["expires"] = v.expires;
    j["state"] = v.state;
    j["id"] = v.id;
    j["type"] = v.type;
    j["detailKey"] = v.detailKey;
    j["source"] = v.source;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesPlayerNotificationResource_t& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.critical = j.at("critical").get<bool>();
    v.expires = j.at("expires").get<std::string>();
    v.state = j.at("state").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.detailKey = j.at("detailKey").get<std::string>();
    v.source = j.at("source").get<std::string>();
  }
  inline std::string to_string(const LolFeaturedModesPlayerNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
