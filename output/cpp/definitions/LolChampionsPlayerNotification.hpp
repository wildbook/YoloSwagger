#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsPlayerNotification_t {
    std::string detailKey;
    std::string iconUrl;
    std::string source;
    uint64_t id;
    std::string type;
    std::map<std::string, std::string> data;
    bool critical;
    std::string state;
    std::string titleKey;
    std::string backgroundUrl;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsPlayerNotification_t& v) {
    j["detailKey"] = v.detailKey;
    j["iconUrl"] = v.iconUrl;
    j["source"] = v.source;
    j["id"] = v.id;
    j["type"] = v.type;
    j["data"] = v.data;
    j["critical"] = v.critical;
    j["state"] = v.state;
    j["titleKey"] = v.titleKey;
    j["backgroundUrl"] = v.backgroundUrl;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsPlayerNotification_t& v) {
    v.detailKey = j.at("detailKey").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.critical = j.at("critical").get<bool>();
    v.state = j.at("state").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
  }
  inline std::string to_string(const LolChampionsPlayerNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
