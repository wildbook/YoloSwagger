#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatPlayerPreferences_t {
    uint64_t modified;
    std::string type;
    std::string data;
    std::string hash;
  };

  inline void to_json(nlohmann::json& j, const LolChatPlayerPreferences_t& v) {
    j["modified"] = v.modified;
    j["type"] = v.type;
    j["data"] = v.data;
    j["hash"] = v.hash;
  }

  inline void from_json(const nlohmann::json& j, LolChatPlayerPreferences_t& v) {
    v.modified = j.at("modified").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<std::string>();
    v.hash = j.at("hash").get<std::string>();
  }
  inline std::string to_string(const LolChatPlayerPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
