#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsNotificationResource_t {
    std::string iconUrl;
    std::string backgroundUrl;
    std::string created;
    std::string titleKey;
    std::string expires;
    std::string source;
    std::string detailKey;
    std::map<std::string, std::string> data;
    uint64_t id;
    bool critical;
    std::string state;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const ClubsNotificationResource_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["backgroundUrl"] = v.backgroundUrl;
    j["created"] = v.created;
    j["titleKey"] = v.titleKey;
    j["expires"] = v.expires;
    j["source"] = v.source;
    j["detailKey"] = v.detailKey;
    j["data"] = v.data;
    j["id"] = v.id;
    j["critical"] = v.critical;
    j["state"] = v.state;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, ClubsNotificationResource_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.created = j.at("created").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.expires = j.at("expires").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.detailKey = j.at("detailKey").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.id = j.at("id").get<uint64_t>();
    v.critical = j.at("critical").get<bool>();
    v.state = j.at("state").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const ClubsNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
