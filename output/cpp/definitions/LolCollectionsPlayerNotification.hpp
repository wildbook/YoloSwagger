#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsPlayerNotification_t {
    bool critical;
    std::string source;
    std::string type;
    std::map<std::string, std::string> data;
    std::string detailKey;
    std::string iconUrl;
    std::string backgroundUrl;
    std::string titleKey;
    uint64_t id;
    std::string state;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsPlayerNotification_t& v) {
    j["critical"] = v.critical;
    j["source"] = v.source;
    j["type"] = v.type;
    j["data"] = v.data;
    j["detailKey"] = v.detailKey;
    j["iconUrl"] = v.iconUrl;
    j["backgroundUrl"] = v.backgroundUrl;
    j["titleKey"] = v.titleKey;
    j["id"] = v.id;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsPlayerNotification_t& v) {
    v.critical = j.at("critical").get<bool>();
    v.source = j.at("source").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.detailKey = j.at("detailKey").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.state = j.at("state").get<std::string>();
  }
  inline std::string to_string(const LolCollectionsPlayerNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
