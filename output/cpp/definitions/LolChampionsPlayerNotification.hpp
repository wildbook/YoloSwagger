#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsPlayerNotification_t {
    std::string source;
    std::string iconUrl;
    std::string titleKey;
    std::string backgroundUrl;
    std::map<std::string, std::string> data;
    uint64_t id;
    bool critical;
    std::string state;
    std::string type;
    std::string detailKey;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsPlayerNotification_t& v) {
    j["source"] = v.source;
    j["iconUrl"] = v.iconUrl;
    j["titleKey"] = v.titleKey;
    j["backgroundUrl"] = v.backgroundUrl;
    j["data"] = v.data;
    j["id"] = v.id;
    j["critical"] = v.critical;
    j["state"] = v.state;
    j["type"] = v.type;
    j["detailKey"] = v.detailKey;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsPlayerNotification_t& v) {
    v.source = j.at("source").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.id = j.at("id").get<uint64_t>();
    v.critical = j.at("critical").get<bool>();
    v.state = j.at("state").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.detailKey = j.at("detailKey").get<std::string>();
  }
  inline std::string to_string(const LolChampionsPlayerNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
