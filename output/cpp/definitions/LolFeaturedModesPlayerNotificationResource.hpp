#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesPlayerNotificationResource_t {
    std::string iconUrl;
    std::string type;
    bool critical;
    std::map<std::string, std::string> data;
    std::string state;
    std::string backgroundUrl;
    std::string titleKey;
    uint64_t id;
    std::string detailKey;
    std::string expires;
    std::string source;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesPlayerNotificationResource_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["type"] = v.type;
    j["critical"] = v.critical;
    j["data"] = v.data;
    j["state"] = v.state;
    j["backgroundUrl"] = v.backgroundUrl;
    j["titleKey"] = v.titleKey;
    j["id"] = v.id;
    j["detailKey"] = v.detailKey;
    j["expires"] = v.expires;
    j["source"] = v.source;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesPlayerNotificationResource_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.critical = j.at("critical").get<bool>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.state = j.at("state").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.detailKey = j.at("detailKey").get<std::string>();
    v.expires = j.at("expires").get<std::string>();
    v.source = j.at("source").get<std::string>();
  }
}
