#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorPlayerNotificationResource_t {
    std::string backgroundUrl;
    std::string created;
    std::map<std::string, std::string> data;
    std::string expires;
    std::string state;
    std::string source;
    std::string type;
    bool critical;
    std::string iconUrl;
    std::string titleKey;
    uint64_t id;
    std::string detailKey;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerNotificationResource_t& v) {
    j["backgroundUrl"] = v.backgroundUrl;
    j["created"] = v.created;
    j["data"] = v.data;
    j["expires"] = v.expires;
    j["state"] = v.state;
    j["source"] = v.source;
    j["type"] = v.type;
    j["critical"] = v.critical;
    j["iconUrl"] = v.iconUrl;
    j["titleKey"] = v.titleKey;
    j["id"] = v.id;
    j["detailKey"] = v.detailKey;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerNotificationResource_t& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.created = j.at("created").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.expires = j.at("expires").get<std::string>();
    v.state = j.at("state").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.critical = j.at("critical").get<bool>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.detailKey = j.at("detailKey").get<std::string>();
  }
  inline std::string to_string(const LolPlayerBehaviorPlayerNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
