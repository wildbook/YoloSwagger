#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreNotification_t {
    std::string backgroundUrl;
    std::string created;
    std::map<std::string, std::string> data;
    std::string expires;
    std::string state;
    std::string source;
    bool dismissible;
    std::string titleKey;
    std::string iconUrl;
    bool critical;
    uint64_t id;
    std::string type;
    std::string detailKey;
  };

  inline void to_json(nlohmann::json& j, const LolStoreNotification_t& v) {
    j["backgroundUrl"] = v.backgroundUrl;
    j["created"] = v.created;
    j["data"] = v.data;
    j["expires"] = v.expires;
    j["state"] = v.state;
    j["source"] = v.source;
    j["dismissible"] = v.dismissible;
    j["titleKey"] = v.titleKey;
    j["iconUrl"] = v.iconUrl;
    j["critical"] = v.critical;
    j["id"] = v.id;
    j["type"] = v.type;
    j["detailKey"] = v.detailKey;
  }

  inline void from_json(const nlohmann::json& j, LolStoreNotification_t& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>();
    v.created = j.at("created").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, std::string>>();
    v.expires = j.at("expires").get<std::string>();
    v.state = j.at("state").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.dismissible = j.at("dismissible").get<bool>();
    v.titleKey = j.at("titleKey").get<std::string>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.critical = j.at("critical").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.detailKey = j.at("detailKey").get<std::string>();
  }
  inline std::string to_string(const LolStoreNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
