#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorPlayerNotificationResource_t {
    std::string detailKey;
    std::string type;
    uint64_t id;
    bool critical;
    std::string titleKey;
    std::string expires;
    std::string iconUrl;
    std::string backgroundUrl;
    std::string created;
    std::map<std::string, std::string> data;
    std::string state;
    std::string source;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerNotificationResource_t& v) {
    j["detailKey"] = v.detailKey;
    j["type"] = v.type;
    j["id"] = v.id;
    j["critical"] = v.critical;
    j["titleKey"] = v.titleKey;
    j["expires"] = v.expires;
    j["iconUrl"] = v.iconUrl;
    j["backgroundUrl"] = v.backgroundUrl;
    j["created"] = v.created;
    j["data"] = v.data;
    j["state"] = v.state;
    j["source"] = v.source;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerNotificationResource_t& v) {
    v.detailKey = j.at("detailKey").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.critical = j.at("critical").get<bool>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.expires = j.at("expires").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.created = j.at("created").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.state = j.at("state").get<std::string>();
    v.source = j.at("source").get<std::string>();
  }
  inline std::string to_string(const LolPlayerBehaviorPlayerNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
