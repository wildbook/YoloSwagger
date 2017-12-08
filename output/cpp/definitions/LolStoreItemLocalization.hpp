#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreItemLocalization_t {
    std::string description;
    std::string name;
    std::string language;
  };

  inline void to_json(nlohmann::json& j, const LolStoreItemLocalization_t& v) {
    j["description"] = v.description;
    j["name"] = v.name;
    j["language"] = v.language;
  }

  inline void from_json(const nlohmann::json& j, LolStoreItemLocalization_t& v) {
    v.description = j.at("description").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.language = j.at("language").get<std::string>();
  }
  inline std::string to_string(const LolStoreItemLocalization_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
